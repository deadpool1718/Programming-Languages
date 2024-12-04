const prompt = require('prompt-sync')();
let n=parseInt(prompt("Enter the value of n: "));
var i=1;
while(i<=n){
    console.log(i)
    i++;
}
 

do{
    console.log(i)
    i++

}while(i<n)