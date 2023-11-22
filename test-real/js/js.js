function Profile(){
    const Firstname = document.getElementById("Firstname").value;
    const Lastname = document.getElementById("Lastname").value;
    const Phone = document.getElementById("Phone").value;
    const Address = document.getElementById("Address").value;
if (Firstname.length <3){
    document.getElementById("FirstnameError").innerText = "Name must be more than 3"
    return false;
}else{
    document.getElementById("FirstnameError").innerText = ""
}
if (Lastname.length <3){
document.getElementById("LastnameError").innerText = "Name must be more than 3"
    return false;
}else{
    document.getElementById("LastnameError").innerText = ""
}
if(Address.length > 1000){
    document.getElementById("AddressError").innerText = "Too much address"
    return false;
}else{
    document.getElementById("AddressError").innerText = ""
}
return true;
}