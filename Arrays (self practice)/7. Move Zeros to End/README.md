# Move Zeros to End

## Difficulty: Easy

### Problem Statement

Given an array `arr` of `N` integers, move all the zeros to the end of the array while maintaining the relative order of the non-zero elements. This should be done in-place.

### Input Format

- The first line contains `T`, the number of test cases.
- Each test case has two parts:
  - An integer `N`, the size of the array
  - `N` space-separated integers

### Output Format

For each test case, print the modified array with space-separated elements.

### Constraints

- $1 \\le T \\le 100$
- $1 \\le N \\le 10^5$
- $0 \\le arr[i] \\le 10^9$

### Sample Input

```
2
8
1 0 2 3 0 4 0 1
5
1 2 0 0 3
```

### Sample Output

```
1 2 3 4 1 0 0 0
1 2 3 0 0
```
