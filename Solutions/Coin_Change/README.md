# Coin Change Calculator

This program calculates how a given amount of money can be decomposed into the smallest possible number of euro coins.

The user enters an amount in euros, which is internally converted into **cents**.
The program then determines how many coins of each denomination are needed.

## Available Coin Values

The program uses the following euro coin denominations:

* 2 Euro
* 1 Euro
* 50 Cent
* 20 Cent
* 10 Cent
* 5 Cent
* 2 Cent
* 1 Cent

These values are stored in an array and processed sequentially.

## Features

The program provides a user-friendly output:

* Numbers from **1 to 5 are printed as words** (`Eine`, `Zwei`, `Drei`, …).
* Larger values are printed as numbers.
* Coin types with **zero occurrences are not displayed**.
* The program distinguishes between **singular** (`Muenze`) and **plural** (`Muenzen`).

## Example

Input

```
8.97
```

Output

```
Vier 2-Euro-Muenzen
Eine 50-Cent-Muenze
Zwei 20-Cent-Muenzen
Eine 5-Cent-Muenze
Eine 2-Cent-Muenze
```

## Concepts Practiced

This program demonstrates several basic C programming concepts:

* arrays
* functions
* loops
* integer arithmetic
* pointers
* formatted output
* simple algorithmic problem solving

## Algorithm

The program uses a **greedy algorithm**:

1. Start with the largest coin value.
2. Determine how many coins of that value fit into the remaining amount.
3. Subtract the used value.
4. Continue with the next smaller coin.

This approach guarantees the minimum number of coins for euro denominations.
