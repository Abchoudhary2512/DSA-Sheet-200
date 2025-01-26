// Reference types represent objects that are stored in heap memory. The variable holds a reference (or pointer) to the memory location where the object is stored, rather than the object itself.

// Reference Types in JavaScript
// Objects
// Arrays
// Functions
// Key Characteristics of Reference Types
// Stored in the heap memory, but the reference (or pointer) is in the stack memory.
// Mutable (changing one reference affects all references pointing to the same object).
// Comparison is based on the memory reference, not the actual value.


let obj1 = { name: "Alice" };
let obj2 = obj1; // obj2 points to the same memory location as obj1
obj2.name = "Bob"; // Modifying obj2 also affects obj1
// obj1.name = "last_name";


console.log(obj1.name); // "Bob"
console.log(obj2.name); // "Bob"


let a =12;
let b =a;
b = 10;;
console.log(a); //12
console.log(b) //10 here copy is done nott the reference