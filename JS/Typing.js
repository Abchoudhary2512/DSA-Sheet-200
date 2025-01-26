// 1. Implicit Typing (Type Coercion)
// Definition:
// Implicit typing occurs when JavaScript automatically converts one data type to another to make an operation valid. This type conversion, called type coercion, happens at runtime.

console.log("5" + 3); // "53" (number 3 is coerced to a string)
console.log("5" - 3); // 2 (string "5" is coerced to a number)
console.log(!!"hello"); // true (non-empty string is coerced to a boolean)


//2. Explicit Typing
//Definition:
//Explicit typing involves manually converting a value from one type to another using built-in functions or methods like Number(), String(), or Boolean().

let a = "123";
let num =  Number(a); //123  is a number
console.log(typeof num);
console.log(typeof a); //string


// 3. Nominal Typing
// Definition:
// Nominal typing requires explicit declarations of types, and compatibility is determined by the name or identity of the type, not just its structure. JavaScript does not natively support nominal typing, but TypeScript, a superset of JavaScript, introduces it.

// type UserID = string;
// type OrderID = string;

// let user: UserID = "user_123";
// let order: OrderID = "order_456";

// TypeScript ensures you cannot assign one type to another, even if both are strings.
// user = order; // Error: Type 'OrderID' is not assignable to type 'UserID'.


//4. Structural Typing
//Definition:

//Structural typing focuses on the shape or structure of data. Two objects are considered compatible if they have the same structure, regardless of their declared type.

// function greet(person) {
//     console.log(`Hello, ${person.name}`);
//   }
  
//   let obj1 = { name: "Alice", age: 25 };
//   let obj2 = { name: "Bob", country: "US" };
  
//   greet(obj1); // "Hello, Alice"
//   greet(obj2); // "Hello, Bob" (both have a "name" property, so they're compatible)
  

//5. Duck Typing
//Definition:
//Duck typing is a concept where an object's suitability is determined by its properties and methods, not its declared type. The term comes from the saying:
//"If it looks like a duck, swims like a duck, and quacks like a duck, it's a duck."


// function fly(thing) {
//     if (thing.fly && typeof thing.fly === "function") {
//       thing.fly();
//     } else {
//       console.log("Cannot fly!");
//     }
//   }
  
//   let bird = { fly: () => console.log("Flying!") };
//   let car = { drive: () => console.log("Driving!") };
  
//   fly(bird); // "Flying!"
//   fly(car);  // "Cannot fly!"
  