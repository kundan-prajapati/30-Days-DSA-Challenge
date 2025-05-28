#include<iostream>
#include<climits>
#include<string>
using namespace std;
class Solution{
    public:
    int convert(string s){
        int i = 0;
        int n = s.length();
        // for whitespace 
        while(i<n && s[i] == ' '){
            i++;
        }

    // check sign 
        int sign = 1;
        if(i<n && (s[i] == '-' || s[i] == '+')){
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

    // check non char digit 
        int result = 0;
        int digit ;

        while(i<n && isdigit(s[i])){
            digit = s[i] - '0';

            // check overflow
            if(result > INT_MAX/10 || (result == INT_MAX/10  && digit > INT_MAX % 10)){
                return (sign == 1) ? INT_MAX : INT_MIN  ;
            }
            result = ( result * 10 ) + digit ;
            i++ ;
        }
        return result * sign ;
    }
};
int  main(){
    string s;
    cout << " Enter String " << endl;
    getline(cin,s);
    Solution sol;
    int ans = sol.convert(s);
    cout << "String TO  Interger Output - " << ans << endl;

    return 0 ;
}
