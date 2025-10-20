# Left Rotate an Array by D Places

## Difficulty: Easy

### Problem Statement

Given an array `arr` of size `N` and an integer `D`, rotate the array to the left by `D` places.

### Input Format

- The first line contains `T`, the number of test cases.
- Each test case has two lines:
  - Two space-separated integers `N` (size of the array) and `D` (number of places to rotate)
  - `N` space-separated integers of the array

### Output Format

For each test case, print the space-separated elements of the rotated array.

### Constraints

- $1 \le T \le 100$
- $1 \le N \le 10^5$
- $1 \le D \le N$
- $0 \le arr[i] \le 10^9$

### Sample Input

```
2
7 2
1 2 3 4 5 6 7
5 3
10 20 30 40 50
```

### Sample Output

```
3 4 5 6 7 1 2
40 50 10 20 30
```
