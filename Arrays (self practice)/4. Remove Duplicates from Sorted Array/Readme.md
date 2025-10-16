4. Remove Duplicates from Sorted Array
   Difficulty: Easy

Problem Statement
You are given a sorted array arr of N integers. You must remove the duplicate elements in-place such that each unique element appears only once. The relative order of the elements should be kept the same. After removing duplicates, return the new length of the array.

Input Format

The first line contains T, the number of test cases.

Each test case consists of two lines:

The size of the array, N.

N space-separated integers of the array.

Output Format
For each test case, print the new length of the array after removing duplicates.

Constraints

1≤T≤100

1≤N≤10
6

0≤arr[i]≤10
9

Sample Input

2
10
1 1 2 2 2 3 3 4 4 5
3
1 1 1
Sample Output

5
1
Explanation: For the first test case, the modified array would be [1, 2, 3, 4, 5, _, _, _, _, _] and the new length is 5.
