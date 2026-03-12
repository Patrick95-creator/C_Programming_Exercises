# Integer Input Parser in C

This program demonstrates how to manually convert a text input into an integer in C.

Instead of using functions like `scanf()` or `atoi()`, the program reads a line of text and converts the characters into a numeric value step by step.

## How the Program Works

1. The function `readtext()` reads a line of text from standard input.
2. The function `readint()` processes the string character by character.
3. Each character is checked to determine whether it is a digit (`0–9`).
4. The integer value is built by multiplying the current number by 10 and adding the new digit.
5. Optional leading `+` or `-` signs are handled.
6. If a minus sign is present, the result becomes negative.

## Example

**Input**

```
1234
```

**Output**

```
Die eingelesene Zahl ist 1234
```

**Input**

```
-42
```

**Output**

```
Die eingelesene Zahl ist -42
```

## Concepts Practiced

* working with dynamically allocated strings
* manual integer parsing
* ASCII character handling
* loops and conditional statements
* memory management (`malloc` / `free`)

## Notes

The implementation intentionally avoids standard conversion functions such as `atoi()` to better understand how numeric parsing works internally in C.
