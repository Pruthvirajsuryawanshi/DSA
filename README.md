# DSA Practice

This repository contains my daily DSA practice problems and the approaches used to solve them.

> **Note:** This README was generated with the help of AI to make the approaches easier to understand and to help with revising these problems. The code and problem-solving practice are my own work.

## Problems and Approaches

| Question | Problem | Approach Used |
|---|---|---|
| [Q1](DSA%20day-1%2026%20sep/q1.cpp) | Find all divisors of a number | Optimized divisor enumeration up to `sqrt(n)`; store divisors in a set to avoid duplicates |
| [Q2](DSA%20day-1%2026%20sep/q2.cpp) | Count the digits of a number | Repeated division by `10` |
| [Q3](DSA%20day-1%2026%20sep/q3.cpp) | Check whether a number is prime | Trial division up to `sqrt(n)` |
| [Q4](DSA%20day-2%2027%20sep/q4.cpp) | Find all prime numbers up to `n` | Sieve of Eratosthenes |
| [Q5](DSA%20day-3%2028%20sep/q5.cpp) | Find the GCD of two numbers | Euclidean algorithm using modulo/remainders |
| [Q6](DSA%20day-3%2028%20sep/q6.cpp) | Find the GCD of two numbers | Euclidean algorithm using subtraction |
| [Q7](DSA%20day-3%2028%20sep/q7.cpp) | Find the LCM of two numbers | Brute-force approach using multiples |
| [Q8](DSA%20day-3%2028%20sep/q8%20LCM%20Using%20Ecledian%20Aproach.cpp) | Find the LCM of two numbers | Euclidean GCD algorithm with the LCM formula |
| [Q9](DSA%20day-3%2028%20sep/q9%20LCM%20of%20Array.cpp) | Find the LCM of an array | Iterative accumulation using GCD and LCM |
| [Q10](DSA%20day-3%2028%20sep/q10%20Luntik's%20Concerts%20%E2%80%93%20Minimum%20Duration%20Difference.cpp) | Luntik's Concerts: minimum duration difference | Mathematical observation and parity checking |
| [Q11](DSA%20day-4%2029%20sep/q11%20Valid%20palindrome%20lc-125) | Valid Palindrome (LeetCode 125) | Alphanumeric filtering followed by the two-pointer approach |

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
