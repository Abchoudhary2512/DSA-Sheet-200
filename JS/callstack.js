function first() {
    second();

    console.log("First function");
  }
  
  function second() {
    console.log("Second function");
    third();
  }
  
  function third() {
    console.log("Third function");
  }
  
  first();
  second();


  
//maximum call stack limit reacher
// function ajay(){
//     first();
//     console.log("hiiii");
// }

// function first(){
//     ajay();
// }
// ajay();







//   Execution Process:

//   first() is called → Added to the call stack.
//   Inside first(), second() is called → Added to the call stack.
//   Inside second(), third() is called → Added to the call stack.
//   third() executes and is removed from the stack.
//   Control returns to second(), which completes and is removed.
//   Control returns to first(), which completes and is removed.






  
//   Key Interview Questions
// What is the call stack in JavaScript?

// The call stack is a data structure that keeps track of function calls in a program, following the Last In, First Out (LIFO) principle.
// What happens when the call stack is full?

// A stack overflow error occurs when the call stack exceeds its limit, typically due to infinite recursion.
// How does the call stack handle asynchronous code?

// The call stack doesn't directly handle asynchronous code. Such tasks are delegated to the Web APIs or Node.js APIs, and the Event Loop queues them for execution once the stack is empty.
// Explain how the call stack manages function calls.

// When a function is invoked, it is pushed onto the stack. When the function finishes execution, it is popped off the stack.
// What is the difference between the call stack and the task queue/microtask queue?

// The call stack executes synchronous code. The task queue (macro/microtasks) handles asynchronous tasks and feeds them to the stack when it’s empty.
// Can the call stack execute more than one function at a time?

// No, JavaScript is single-threaded and executes one function at a time in the call stack.
// What is the maximum size of the call stack?

// The maximum stack size varies between browsers and environments. For example, Chrome has a limit of around 10,000 calls in most cases.