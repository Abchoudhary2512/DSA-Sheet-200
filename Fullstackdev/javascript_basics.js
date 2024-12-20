// // JavaScript Basics

// // Variables (var, let, const)
// var x = 10;
// var x = 20; // Allowed with var
// console.log(x); // 20

// let y = 30;
// //let y = 40; // Error: Identifier 'y' has already been declared
// console.log(y);

// const z = 50;
// // z = 60; // Error: Assignment to constant variable
// console.log(z);

// // Special Case: var is function-scoped and hoisted but initialized to undefined.

// // Data Types
// let a = "Hello"; // string
// let b = 42; // number
// let c = true; // boolean
// let d = null; // null (intentional absence of value)
// let e; // undefined (variable declared but not assigned)
// let f = Symbol('unique'); // Symbol (unique identifier)
// let g = 9007199254740991n; // BigInt (for very large integers)

// console.log(typeof a, typeof b, typeof c, typeof d, typeof e, typeof f, typeof g);

// // Special Case: typeof null returns "object" due to a historical bug.

// // Type Conversion
// console.log('5' + 3); // "53" (string concatenation)
// console.log('5' - 3); // 2 (string converted to number)
// console.log(Number("123")); // 123
// console.log(String(123)); // "123"
// console.log(Boolean(0)); // false

// // Special Case: Boolean(" ") is true because non-empty strings are truthy.

// // Operators
// console.log(5 == "5"); // true (loose equality)
// console.log(5 === "5"); // false (strict equality)
// console.log(true && false); // false (logical AND)
// console.log(true || false); // true (logical OR)
// console.log(!true); // false (logical NOT)
// console.log(1 / 0); // Infinity
// console.log(-1 / 0); // -Infinity

// // Template Literals
// const name = "Alice";
// const age = 25;
// console.log(`My name is ${name} and I am ${age} years old.`);

// // Control Flow

// // Conditional Statements
// if (age < 18) {
//     console.log("Minor");
// } else if (age < 60) {
//     console.log("Adult");
// } else {
//     console.log("Senior");
// }

// const fruit = "apple";
// switch (fruit) {
//     case "apple":
//         console.log("Apple is red.");
//         break;
//     case "banana":
//         console.log("Banana is yellow.");
//         break;
//     default:
//         console.log("Unknown fruit.");
// }

// // Special Case: Forgetting break in switch leads to fall-through behavior.

// // Loops
// for (let i = 0; i < 5; i++) {
//     console.log(i);
// }

// let j = 0;
// while (j < 5) {
//     console.log(j);
//     j++;
// }

// do {
//     console.log(j);
//     j++;
// } while (j < 5);

// // Break and Continue
// for (let i = 0; i < 5; i++) {
//     if (i === 2) continue; // Skip iteration
//     if (i === 4) break; // Exit loop
//     console.log(i);
// }

// // Special Case: Ensure loop counters update correctly to avoid infinite loops.

// // Functions

// // Function Declaration
// function greet(name) {
//     return `Hello, ${name}!`;
// }

// // Function Expression
// const farewell = function(name) {
//     return `Goodbye, ${name}!`;
// };

// console.log(greet("Alice"));
// console.log(farewell("Bob"));

// // Arrow Functions
// const square = (x) => x * x;
// console.log(square(4)); // 16

// // Special Case: Arrow functions do not bind their own `this`.

// // Parameters and Arguments
// function add(a = 0, b = 0) { // Default parameters
//     return a + b;
// }
// console.log(add(5, 10)); // 15
// console.log(add(5)); // 5

// // Error Handling

// try {
//     const result = 5 / 0;
//     if (!isFinite(result)) {
//         throw new Error("Division by zero is not allowed");
//     }
//     console.log(result);
// } catch (error) {
//     console.error("Error:", error.message);
// } finally {
//     console.log("Execution complete.");
// }

// // Special Case: Unhandled exceptions in async code require `catch` blocks.

// // Basic DOM Manipulation

// // Selecting Elements
// const heading = document.getElementById("title");
// const buttons = document.querySelectorAll(".btn");
// console.log(heading);
// console.log(buttons);

// // Modifying DOM Content
// const paragraph = document.querySelector("#paragraph");
// paragraph.textContent = "Updated Text!";
// paragraph.innerHTML = "<b>Updated Text with Bold!</b>";

// // Basic Event Listeners
// const button = document.querySelector("#myButton");
// button.addEventListener("click", () => {
//     alert("Button clicked!");
// });

// // Special Case: Remove event listeners when not needed to prevent memory leaks.
