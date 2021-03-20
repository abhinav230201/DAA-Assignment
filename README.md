# Daa Assingment-1
#### Team Members

|Enrollment No.|Name|GithubId|
|--------------|----|--------|
|IIT2019098|Abhinav|abhinav230201|
|IIT2019097|Harsh Sharma|harsh12-hub|
|IIT2019096|Riya Goyal|riyag0512|

**Group No-** 15

**Faculty Name-** Dr. Mohammad Javed IIIT Allahabad

**Mentor Name-** Md. Meraz

---
## Problem Statement
Given a number N, find the numbers whose factorial ends ends with N zeroes.

---
## How to use code

Download project
```
git clone https://github.com/abhinav230201/DAA-Assignment.git
```
Project Initialize 
```
#Opening Assingment folder
cd DAA-Assignment

#Compiling The code
g++ solution.cpp -o output
```
---

Run the code
```
./output
```
Input
```
First line of input contains N (the number of trailing zeroes a factorial should have, whose count we have to find).
```
Ouput 
```
The numbers whose factorial has N trailing zeroes. (If no such number exist, we specify that)
```
---
**Test case**

Test Case-1
```
Input:
6
Output:
The numbers whose factorial has 6 trailing zeroes are : 25 26 27 28 29 
```

Test Case-2
```
Input:
5 
Output:
No such number exists whose factorial has 5 trailing zeroes
```
---
### Theory
Logic
```
We find the smallest number whose factorial has N or more trailing zeroes. Finally we check if the factorial of that number has exactly N trailing zeroes or not, if yes we print that number and the next 4 numbers, otherwise we print that no such number exists whose factorial has exaclty N trailing zeroes
```
Implementation
```
We use binary search for finding the smallest number that has N or more trailing zeroes.  Let that small number be A, we set the low value of binary search to be 1, and high value to n*5, during binary search(hi>=lo), we check if factorial mid {(high+low)/2}, has n or more zeroes, if yes we set a=mid, and lo=mid-1, and check for smaller number otherwise, we set hi=mid+1, and check for higher number.
```
---
### Analysis

**Time Complexity**
```
For all the cases : o(log(N)(log(N))

```
where N is the number of required trailing zeroes.

---
**Space Complexity**
```
For all the cases : o(1)
```

### References

GFG : Divide and Conquer

