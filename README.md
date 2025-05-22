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

