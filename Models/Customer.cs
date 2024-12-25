using System.ComponentModel.DataAnnotations;
using Microsoft.VisualBasic;

namespace WebApplication6.Models;

public class Customer
{
    public int CustomerID { get; set; }
    public String FullName { get; set; }
    public String PhoneNumber { get; set; }
    public DateAndTime datetime { get; set; }
    public DateTime RegistrationDate { get; set; }
    public List<Rental> Rentals { get; set; }
}