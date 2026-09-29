# DSA Practice

This repository contains my daily DSA practice problems and the approaches used to solve them.

> **Note:** This README was generated with the help of AI to make the approaches easier to understand and to help with revising these problems. The code and problem-solving practice are my own work.

## Problems and Approaches

| Question | Problem | Approach Used |
|---|---|---|
| Q1 | Find all divisors of a number | Optimized divisor enumeration up to `sqrt(n)`; store divisors in a set to avoid duplicates |
| Q2 | Count the digits of a number | Repeated division by `10` |
| Q3 | Check whether a number is prime | Trial division up to `sqrt(n)` |
| Q4 | Find all prime numbers up to `n` | Sieve of Eratosthenes |
| Q5 | Find the GCD of two numbers | Euclidean algorithm using modulo/remainders |
| Q6 | Find the GCD of two numbers | Euclidean algorithm using subtraction |
| Q7 | Find the LCM of two numbers | Brute-force approach using multiples |
| Q8 | Find the LCM of two numbers | Euclidean GCD algorithm with the LCM formula |
| Q9 | Find the LCM of an array | Iterative accumulation using GCD and LCM |
| Q10 | Luntik's Concerts: minimum duration difference | Mathematical observation and parity checking |
| Q11 | Valid Palindrome (LeetCode 125) | Alphanumeric filtering followed by the two-pointer approach |

## Approaches by Category

- **Brute force:** Q7
- **Optimized mathematical approach:** Q1, Q2, Q3, Q5, Q8, Q10
- **Sieve approach:** Q4
- **Euclidean algorithm:** Q5, Q6, Q8, Q9
- **Array reduction/accumulation:** Q9
- **Two pointers:** Q11
- **Mathematical observation:** Q10

## Complexity Notes

- Divisor enumeration: `O(sqrt(n))`
- Prime check by trial division: `O(sqrt(n))`
- Sieve of Eratosthenes: `O(n log log n)`
- Euclidean GCD algorithm: `O(log(min(a, b)))`
- Digit counting: `O(log10(n))`
- Two-pointer palindrome check: `O(n)`
- Parity observation: `O(1)`
