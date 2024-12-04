let sum =0
const prompt = require('prompt-sync')();
let n=parseInt(prompt("Enter the value of n: "))
for (let i=1;i<=n;i++){
    sum+=i
}
console.log(sum)  


let obj={
    Harry:90,
    amir:45,
    shiv:56,
    siru:454
}
for (let a in obj){
    console.log("Marks of " + a +" are "+obj[a])
} 

for(let b of "amit"){
    console.log(b)
}