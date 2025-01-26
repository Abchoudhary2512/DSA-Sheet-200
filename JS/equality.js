// === (Strict Equality) vs == (Loose Equality) vs typeof Operator

// === STRICT EQUALITY
// Compares both value and type
console.log(5 === "5"); // false (number vs string)
console.log(0 === false); // false (number vs boolean)
console.log(null === undefined); // false (different types)
console.log(" " === 0); // false (string vs number)

// == LOOSE EQUALITY
// Performs type coercion before comparison
console.log(5 == "5"); // true (string "5" coerced to number 5)
console.log(0 == false); // true (false coerced to 0)
console.log(null == undefined); // true (special case)
console.log(" " == 0); // true (string " " coerced to number 0)

// typeof OPERATOR
console.log(typeof 42); // "number"
console.log(typeof "hello"); // "string"
console.log(typeof true); // "boolean"
console.log(typeof undefined); // "undefined"
console.log(typeof null); // "object" (quirk in JavaScript)
console.log(typeof []); // "object" (arrays are objects)
console.log(typeof function () {}); // "function"

// === TRICKY QUESTIONS ===

// 1. null vs undefined
console.log(null == undefined); // true
console.log(null === undefined); // false

// 2. Empty string vs number
console.log(" " == 0); // true
console.log(" " === 0); // false

// 3. Array coercion
console.log([] == 0); // true
console.log([] === 0); // false

// 4. Array to string comparison
console.log([1, 2] == "1,2"); // true
console.log([1, 2] === "1,2"); // false

// 5. Boolean vs number
console.log(true == 1); // true
console.log(true === 1); // false

// 6. typeof of typeof
console.log(typeof typeof 42); // "string" (typeof always returns a string)

// 7. null quirk
console.log(typeof null); // "object"

// 8. Checking arrays
console.log(typeof []); // "object"
console.log(Array.isArray([])); // true

// 9. Objects comparison
console.log({} == "[object Object]"); // false
console.log({} === "[object Object]"); // false

// 10. Function type
console.log(typeof function () {}); // "function"

// 11. Number vs string comparison
console.log(5 == "5"); // true
console.log(5 === "5"); // false

// 12. Arithmetic coercion
console.log("5" - 3); // 2 (string coerced to number)
console.log("5" + 3); // "53" (number coerced to string)

// 13. Objects and arrays
console.log({} + []); // "[object Object]"

// 14. Double negatives
console.log(!!""); // false
console.log(!!"hello"); // true

// 15. Truthy and falsy values
console.log([] == true); // false
console.log([1] == true); // true

// 16. typeof on undeclared variable
// Uncommenting below will throw an error in strict mode, so don't uncomment:
// console.log(typeof undeclaredVariable); // "undefined"

// 17. NaN comparison
console.log(NaN == NaN); // false
console.log(NaN === NaN); // false

// 18. Loose equality with empty arrays
console.log([] == ""); // true

// 19. typeof Infinity
console.log(typeof Infinity); // "number"

// 20. Loose equality with false
console.log(false == "0"); // true
console.log(false === "0"); // false

// === ADDITIONAL TIPS ===
// 1. Prefer `===` over `==` to avoid unexpected type coercion.
// 2. Use `typeof` cautiously and be aware of quirks like `typeof null`.
// 3. Use `Array.isArray()` to check for arrays instead of `typeof`.
