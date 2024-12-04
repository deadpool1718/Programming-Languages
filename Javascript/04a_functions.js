const prompt = require("prompt-sync")();
function AverageOfTwo(x, y) {
  console.log("Done!");
  return (x + y) / 2;
}
function num(n){
    if(n>0){
        return num(n-1);
        return n;   
    }
}
let a = 1;
let b = 3;
let c = 5;
console.log("Average of a and b : ", AverageOfTwo(a, b));
// console.log("Done.");
console.log("Average of a and c : ", AverageOfTwo(a, c));
// console.log("Done.  ");
console.log("Average of c and b : ", AverageOfTwo(c, b));
// console.log("Done.");
console.log(num(7))
