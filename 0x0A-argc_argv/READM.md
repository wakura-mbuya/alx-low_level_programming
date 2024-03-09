# 0x0A. C - argc_argv
## Project Objectives
In this project, we'll and practice:
- How to use arguments passed to your program
- What are two prototypes of `main` and in which case to use either.
- How to use `__attribute_((unused))` or `(void)`to compile functions with unused variables or parameters.
## Tasks
### 1. Task 0
Write a program that prints its name, followed by a new line
### 2. Task 1
Write a progrma that prints the number of arguments passed into it.
### 3. Task 2
Write a program that prints all argument it receives
### 4. Task 3
Write a program that multiplies two numbers
  - Your program should print the result of the multiplication, followed by a new line
  - You can assume that the two numbers and result of the multiplication can be stored in an integer
  - If the program does not receive two arguments, your program should print `Error`, followed by a new line, and return 1
### 4. Task 4
Write a program that adds positive numbers.
  - Print the result, followed by a new line
  - If no number is passed to the program, print 0, followe by a new line
  - If one of the number contains symbols that are not digits, print `Error`, followed by a new line, and return `1`
  - You can assume that numbers and addition of all the numbers can be stored in an `int`
### 5. Task 5
Write a program that prints the minimum number of coins to make change for and amount of money.
  - Usage: `./change cents`
  - where `cents` is the amount of cents you need to give back
  - if the number of arguments passed to your program is not exactly `1`, print `Error`, followed by new line, and return `1`
  - you should use `atoi` to parse the parameter passed to your program
  - If the number passed as the argument is negative, print `0`, followed by a new line
  - You can use an unlimited number of coins of values 25, 10, 5, 2 and 1 cent
