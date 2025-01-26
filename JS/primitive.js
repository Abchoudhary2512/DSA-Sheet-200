// Primitive Types in JavaScript
//Primitive types are the most basic data types in JavaScript. They are immutable (cannot be changed) and stored directly in memory as values.

// List of Primitive Types
// Number
// String
// Boolean
// Undefined
// Null
// BigInt
// Symbol


let age = 25; // Integer
let price = 19.99; // Float
let infinity = Infinity; // Special numeric value
let notANumber = NaN; // "Not a Number" (invalid math operations)

let name = "John";
let greeting = `Hello, ${name}`; // Template literals for dynamic strings

console.log(greeting)

let isLoggedIn = true;
let isAdult = age > 18; // Result is true or false


let x; // x is undefined
// console.log(x); // Output: undefined


let user = null; // No value

//Represents integers larger than 2^53 - 1 (the largest safe integer in JavaScript).
let bigNumber = 123456789012345678901234567890n; // Note the 'n' suffix


// Symbol

// Represents unique, immutable identifiers.

console.log(typeof Number,typeof (null) ,typeof (Symbol))
 // function object functoin

 console.log(typeof (String))
 

 let sym1 = Symbol("key");
let sym2 = Symbol("key");
console.log(sym1 === sym2); // false


console.log({} + []);   

// Why Did This Happen?
// When the + operator is used with objects, JavaScript tries to convert the object to a primitive (string or number) using the toString() or valueOf() method.
// The default toString() method for plain objects returns "[object Object]".