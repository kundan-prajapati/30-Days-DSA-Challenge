// 7 -- Reverse_Integer
// Given a signed 32-bit integer x, return x with its digits reversed. 
// If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.
// Assume the environment does not allow you to store 64-bit integers (signed or unsigned).


#include<iostream>
#include<climits> // For INT_MAX and INT_MIN
using namespace std;
int reverse(int num)
{
    int ans=0;
    while(num != 0)
    {
        int mod = num % 10;
        num = num/10;
         if( ans > INT_MAX/10 || ( ans == INT_MAX && mod > 7)) return 0;
         if(ans < INT_MIN/10 || ( ans == INT_MIN && mod < -8 )) return 0;

         ans = (ans*10) + mod;
    }
    return ans;
}
int main()
{
    int x;
    cout << "Enter Number " << endl;
    cin >> x;

    int result = reverse(x);
    cout << "Reverse Number is --> " << result << endl;


    return 0;
}
