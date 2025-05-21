// 1. Two Sum : Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

#include<iostream>
#include<vector>
using namespace std;

void findPairs(vector<int>& nums , int target) {
  bool found = false;  // Flag to track if pair is found
  
  for (size_t i = 0; i < nums.size(); i++) {
      for (size_t j = i + 1; j < nums.size(); j++) {
          if (nums[i] + nums[j] == target) {
              cout << "Pair found at indices: " << i << " and " << j
                   << " | Values: " << nums[i] << ", " << nums[j] << endl;
              found = true;
              break;  // Exit the inner loop immediately
          }
      }
      if (found) break;  // Exits the OUTER loop once a pair is found
  }
  
  if (!found) cout << "No valid pair found!" << endl; // Handle case when no pair exists
}
int main() {
  vector<int> nums = {2, 7, 11, 15}; // Example input
  int target = 9;
  
  findPairs(nums , target);
  
  return 0;
}
