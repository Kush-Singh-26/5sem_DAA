# LAB 1

1. **Aim of the program** : Write a program to find out the second smallest and second largest element stored in an array of n integers.
    - *Input*: Size of the array is 'n' and read 'n' number of elements from a disc file.
    - *Output*: Second smallest, Second largest.

2. **Aim of the program** : Given an array arr of size N, find the prefix sum of the array. A prefix sum array is another array prefixSum[] of the same size, such that the value of prefixSum[i] is arr[0] + arr[1] + arr[2] + ...
    - *Input Array* : 3 4 5 1 2
    - *Output Array* : 3 7 12 13 15

3. **Aim of the program** : Write a program to read n integers from a disc file that must contain some duplicate values and store them into an array. 
    - Perform the following operations on the array :
        - a. Find out the total number of duplicate elements.
        - b. Find out the most repeating element in the array.
    - *Input*:
        - Enter how many numbers you want to read from file: 15
    - *Output*:
        - The content of the array 10 40 35 47 68 22 40 10 98 50 35 68 40 10
        - Total number Of duplicate values = 4
        - The most repeating element in the array = 10

4. **Aim of the program** : Write a function to ROTATE_RIGHT (p1, p2) right an array for first p2 elements by 1 position using EXCHANGE (p, q) function that swaps/exchanges the numbers p & q. Parameter p1 be the starting address of the array and p2 be the number of elements to be rotated.
    - *Input*:
        - Enter an array A of size N (9) 11 22 33 44 55 66 77 88 99
        - Call the function ROTATE_RIGHT (A, 5)
    - *Output*:
        - Before ROTATE:    11 22 33 44 55 66 77 88 99
        - After ROTATE:     55 11 22 33 44 66 77 88 99
