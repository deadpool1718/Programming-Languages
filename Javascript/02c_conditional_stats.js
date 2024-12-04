// pract 1
const prompt = require('prompt-sync')();
let age = parseInt(prompt("Hey what is your age?"))
// age = Number.parseInt(age);
switch(age){
    case 12:
        console.log("Your age is 12.")
            break
    case 13:
        console.log("Your age is 13")
        break
    case 14:
        console.log("Your age is 14.")
    default:
        console.log("Your age is not special.")
        break
}

if(age%2==0 && age %3==0){
    console.log("Number is divisible by 2 and 3.")
}
else{
    console.log("Number is either divisible by 2 nor 3.")
}
