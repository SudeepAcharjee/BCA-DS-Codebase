//Write a program in javasrcript to accept a name from the user and display the same name in an alert box
let name = prompt("Enter Your name");
document.write("Your name is: " + name) ;



// Write a program in javasrcript to display a message in a confirm box.
function showMessage() {
    var message = "Are you Above 18?";
    var userResponse = window.confirm(message);

    // Check the user's response
    if (userResponse) {
        alert("Welcome to 18+ website");
    } else {
        alert("Go Away");
    }
}
showMessage();
