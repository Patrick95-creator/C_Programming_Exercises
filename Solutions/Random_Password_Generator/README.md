# Random Password Generator

This program generates an **8-character password** consisting of uppercase letters, lowercase letters, and digits.

To avoid confusing characters (such as `l`, `I`, `1`, `O`, `0`), the password is generated only from a predefined set of allowed characters.

## Allowed Characters

The following characters may appear in the generated password:

```
a b c d e f h i m n q r t
A B C D E F G H L M N Q R T
2 3 4 6 7 8
```

These characters are stored in an array from which random characters are selected.

## Random Number Generation

Random numbers are generated using:

* `random()` from `<stdlib.h>`
* `srandom()` to initialize the random generator
* `time(NULL)` from `<time.h>` as the seed value

This ensures that each program execution produces a **different password**.

## Password Requirements

The generated password must contain at least:

* one **uppercase letter**
* one **lowercase letter**
* one **digit**

Each character in the password is randomly selected from the allowed character set.

## Example Outputs

Possible outputs of the program:

```
LTdTrM3L
ibDRerBF
eFFH7nG8
34LmTiqc
Ar7DAEbr
```

Only the generated password is printed to the console.
