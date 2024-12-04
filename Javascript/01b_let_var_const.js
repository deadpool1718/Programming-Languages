console.log("Difference among var,const and let:")
// var a =45
// var b="ait"
// var c=null
// var d=undefined
// {
//     var b="this"
//     console.log(b)
// }
// console.log(b) 



//let works on block level whereas var is like global variable

let b="ait"

{
    let b="this"
    console.log(b)
}
console.log(b)  