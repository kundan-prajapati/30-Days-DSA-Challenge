// 9 -- Palindrome_Number  
// Given an integer x, return true if x is a palindrome, and false otherwise.
// only reverse  half number

#include<iostream>
#include<climits>
using namespace std;
class Solution{
public :
    bool ispalindrome(int num){
          // Negative numbers and numbers ending with 0 (except 0 itself) can't be palindrome
        if( num < 0 || (num % 10 == 0 && num != 0) ) return 0;
        int reversehalf = 0;
        while(num > reversehalf)
        {
            int mod = num % 10;
          reversehalf = ( reversehalf * 10 ) + mod ;
            num = num / 10;
        }
         // Handle even and odd length numbers
        return ( num == reversehalf || num == reversehalf/10 ) ;
    }
};
int main()
{
    int x;
    Solution sol;
    cout << "Enter number" << endl;
    cin >> x;
    if(sol.ispalindrome(x))
        cout << "Number is Palindrome " << endl;
    else
        cout << "Number is Not Palindrome " << endl;
    return 0;
}