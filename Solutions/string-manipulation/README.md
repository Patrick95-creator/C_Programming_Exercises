# Basic String Manipulation in C

The goal of these tasks is to practice working with **strings in C** without relying on standard library functions such as `strlen()` or `strcpy()`.

Instead, the algorithms are implemented manually using loops and pointers.

## Implemented Tasks

### 3.1 – Count Characters

Counts the number of characters in a given string (excluding the terminating `'\0'`).

### 3.2 – Count Occurrences of a Character

Counts how often a specified character appears in a string.

Example:
`"Banane"` with character `'a'` → result `2`.

### 3.3 – Copy a String

Creates a copy of a string by allocating new memory and copying each character manually.

### 3.4 – Reverse a String

Creates a reversed copy of a string.

Example:
`"Banane"` → `"enanaB"`

### 3.5 – ASCII Shift

Copies a string while increasing the ASCII value of every character by 1.

Example:
`"Banane"` → `"Cbobof"`

### 3.6 – Generate a Palindrome

Creates a palindrome by appending the reversed version of the string to the original string.

Example:
`"Banane"` → `"BananeenanaB"`

## Concepts Practiced

* working with **null-terminated strings**
* iterating through strings using loops
* dynamic memory allocation (`malloc`, `realloc`)
* manual string copying
* basic string algorithms
* ASCII character manipulation

## Notes

These implementations intentionally avoid using standard string library functions in order to better understand how string processing works internally in C.
