using Microsoft.EntityFrameworkCore;
using WebApplication6.Data;
using WebApplication6.Models;

namespace WebApplication6.Controllers;
using Microsoft.AspNetCore.Mvc;
using System.Linq;
using System.Threading.Tasks;
public class CosmicController : Controller
{
    private readonly MyDbContext _context;

    public CosmicController(MyDbContext context)
    {
        _context = context;
    }

    // ComicBook CRUD
    public async Task<IActionResult> ComicBooks()
    {
        var books = await _context.ComicBooks.ToListAsync();
        return View(books);
    }
    public IActionResult RegisterCustomer()
    {
        return View(new Customer());
    }
    [HttpPost]
    public async Task<IActionResult> RegisterCustomer(Customer customer)
    {
        customer.RegistrationDate = DateTime.Now;
        _context.Customers.Add(customer);
        await _context.SaveChangesAsync();
        return RedirectToAction("Index");
    }
    public async Task<IActionResult> Rent()
    {
        var customers = await _context.Customers.ToListAsync();
        var books = await _context.ComicBooks.ToListAsync();
        return View();
    }
    [HttpPost]
    public async Task<IActionResult> Rent(Rental rental, RentalDetail rentalDetail)
    {
        rental.Status = "Active";
        _context.Rentals.Add(rental);
        await _context.SaveChangesAsync();
        rentalDetail.RentalID = rental.RentalID;
        _context.RentalDetails.Add(rentalDetail);
        await _context.SaveChangesAsync();
        return RedirectToAction("Index");
    }
}