function validateform(){
    const yourname = document.getElementById("yourname").value;
    const youremail = document.getElementById("youremail").value;
    const yourmessage = document.getElementById("yourmessage").value;
    if(yourname.length > 10){
        document.getElementById("yournameError").innerText = "Your name is too long";
        return false;
    }else{
document.getElementById("yournameError").innerText="";
    }
    if(yourmessage.length > 100){
        document.getElementById("yourmessageError").innerText="Your message is to long bro";
        return false;
    }else{
        document.getElementById("yourmessageError").innerText=""
    }
    return true;
}