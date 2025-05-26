# 30-Days-DSA-Challenge
Solving 1 LeetCode DSA question daily using C++


Day 1: Two Sum
Problem Description:
    Given an array of integers nums and an integer target, find indices of the two numbers such that they add up to the target.

Approach:
    -> Used a simple brute force method with nested loopsTime 
    -> Prints the first valid pair of indices and values if found
    -> Prints message if no valid pair exists
    -> Complexity: O(n²) — due to nested loops checking all pairs
    -> Space Complexity: O(1) — only a few extra variables used, no extra data structures



Day 2: Add Two Numbers (Linked List)
Problem Description:
    Given two non-empty linked lists representing two non-negative integers.
Digits are stored in reverse order. Add the two numbers and return the sum as a linked list.

Approach:
→ Used iterative addition with carry handling
→ Adds corresponding digits and carry, stores result in new list
→ Returns the head of the resulting linked list
→ Time Complexity: O(max(n, m)) — where n and m are lengths of the two lists
→ Space Complexity: O(max(n, m)) — output list size



Day 3: Reverse Integer
Problem Description:
    Given a signed 32-bit integer x, reverse its digits.
    If the reversed integer overflows the 32-bit signed integer range [-2³¹, 2³¹ - 1], return 0.

Approach:
→ Used a while loop to extract digits using % 10
→ Build the reversed number using multiplication and addition
→ Before updating, check for overflow using INT_MAX and INT_MIN
→ If overflow detected, return 0
→ Else, return the reversed number
→ Time Complexity: O(log₁₀n) — Proportional to the number of digits in the integer
→ Space Complexity: O(1) — Constant space used for a few variables only



Day 4: Reverse Integer
Problem Description:
    Given a signed 32-bit integer x, reverse its digits.
    If the reversed integer overflows the signed 32-bit integer range [-2³¹, 2³¹ - 1], return 0.

Approach:
→ Extract digits using % 10 in a while loop
→ Build reversed number by multiplying previous result by 10 and adding digit
→ Check for overflow before updating result using INT_MAX and INT_MIN
→ Return 0 if overflow detected, else return reversed number

Time Complexity: O(log₁₀n) — proportional to number of digits
Space Complexity: O(1) — constant extra space

