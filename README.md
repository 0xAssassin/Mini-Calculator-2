# Mini Calculator

A simple command-line calculator written in **C language**. This project performs basic arithmetic operations on two numbers based on a user-provided operator, using **switch-case statements**.

## Features

* Addition (`+`)
* Subtraction (`-`)
* Multiplication (`x` or `*`)
* Division (`/`)
* Division-by-zero error handling
* Supports floating-point numbers
* Simple command-line interface

## Supported Operators

| Operator | Operation      |
| -------- | -------------- |
| `+`      | Addition       |
| `-`      | Subtraction    |
| `x`      | Multiplication |
| `*`      | Multiplication |
| `/`      | Division       |

## How It Works

The program asks the user to enter an operation in this format:

```text
12 + 37
```

The input contains:

* **Operand 1** → `12`
* **Operator** → `+`
* **Operand 2** → `37`

The program uses a **switch-case statement** to identify the operator and perform the corresponding calculation.

For multiplication, both `x` and `*` are supported:

```c
case 'x':
case '*':
    result = operand1 * operand2;
```

For division, the program checks whether the second operand is zero before performing the calculation.

## Example

```text
Operators: '+', '-', 'x', '/'
Enter your operation like this (12 + 37): 12 x 5

12.00 x 5.00 = 60.00
```

Division example:

```text
Enter your operation like this (12 + 37): 75 / 3

75.00 / 3.00 = 25.00
```

Division by zero:

```text
Enter your operation like this (12 + 37): 10 / 0

Error: cannot divide by zero!
```

## Concepts Used

This project demonstrates the following C programming concepts:

* Variables
* `char` and `float` data types
* `scanf()` for user input
* `printf()` for output
* `switch-case` statements
* Multiple `case` labels
* `if-else` conditional statements
* Arithmetic operators
* Logical comparison
* Basic input validation

## How to Run

### Compile

Using GCC:

```bash
gcc calculator.c -o calculator
```

### Run

On Windows:

```bash
calculator
```

On Linux/macOS:

```bash
./calculator
```

## Project Level

**Beginner** — This project is suitable for practicing basic C programming concepts and understanding how `switch-case` works with user input.

