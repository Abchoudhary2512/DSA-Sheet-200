// 1. What is the output?
console.log({} + []); // "[object Object]"
// {} is treated as an object, and [] becomes an empty string. Concatenation results in "[object Object]".

// 2. What is the output?
console.log([] + {}); // "[object Object]"
// [] becomes an empty string, {} becomes "[object Object]".

// 3. What is the output?
console.log({} - {}); // NaN
// Both objects are converted to strings ("[object Object]"), which cannot be subtracted. Result: NaN.

// 4. What is the output?
console.log([] + []); // ""
// Both arrays are converted to empty strings. Concatenation results in "".

// 5. What is the output?
console.log([] - []); // 0
// Arrays are converted to numbers (empty strings become 0). Subtraction results in 0.

// 6. What is the output?
console.log([1] + [2, 3]); // "12,3"
// Arrays are converted to strings: "1" and "2,3". Concatenation gives "12,3".

// 7. What is the output?
console.log([1, 2] - [3]); // NaN
// Arrays are converted to strings ("1,2" and "3"), which cannot be subtracted. Result: NaN.

// 8. What is the output?
console.log(true + false); // 1
// true is 1, false is 0. Addition gives 1.

// 9. What is the output?
console.log("5" - 3); // 2
// "5" is coerced to 5. Subtraction results in 2.

// 10. What is the output?
console.log("5" + 3); // "53"
// "5" is a string, so the + operator performs concatenation, resulting in "53".

// 11. What is the output?
console.log(null + 10); // 10
// null is coerced to 0. Addition gives 10.

// 12. What is the output?
console.log(undefined + "text"); // "undefinedtext"
// undefined is coerced to the string "undefined". Concatenation gives "undefinedtext".

// 13. What is the output?
console.log([] == false); // true
// [] is coerced to an empty string (""), and false is coerced to 0. "" == 0 is true.

// 14. What is the output?
console.log([10] - [5]); // 5
// [10] becomes "10", [5] becomes "5". Subtraction gives 10 - 5 = 5.

// 15. What is the output?
console.log(+true); // 1
// Unary + converts true to 1.

// 16. What is the output?
console.log(+[]); // 0
// [] is coerced to an empty string (""), which becomes 0.

// 17. What is the output?
console.log([] + null); // "null"
// [] becomes an empty string (""), and null becomes "null". Concatenation gives "null".

// 18. What is the output?
console.log(typeof NaN); // "number"
// NaN is a special numeric value representing invalid numbers.

// 19. What is the output?
console.log("text" - "text"); // NaN
// Strings cannot be subtracted. The result is NaN.

// 20. What is the output?
console.log(+""); // 0
// An empty string is coerced to 0 with the unary + operator.

// 21. What is the output?
console.log("10" * 2); // 20
// "10" is coerced to 10. Multiplication results in 20.

// 22. What is the output?
console.log("10px" - 2); // NaN
// "10px" cannot be coerced to a valid number, so the result is NaN.

// 23. What is the output?
console.log([] == ""); // true
// [] is coerced to an empty string (""). "" == "" is true.

// 24. What is the output?
console.log({} === {}); // false
// Objects are compared by reference, and two separate objects are never equal.

// 25. What is the output?
console.log([1, 2] == "1,2"); // true
// [1, 2] is coerced to the string "1,2". "1,2" == "1,2" is true.

// 26. What is the output?
console.log(null == undefined); // true
// null and undefined are loosely equal in JavaScript.

// 27. What is the output?
console.log(null === undefined); // false
// Strict equality checks type as well. null and undefined are of different types.

// 28. What is the output?
console.log(0 == false); // true
// 0 is loosely equal to false as both are coerced to 0.

// 29. What is the output?
console.log("" == false); // true
// An empty string is coerced to 0. 0 == false is true.

// 30. What is the output?
console.log("1" - - "1"); // 2
// "1" is coerced to 1, - "1" becomes -1. 1 - (-1) = 2.
