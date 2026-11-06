#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int n) {
        int num=0,temp;

while(n!=0)
    {
        temp=n%10;
        if((num>INT_MAX/10)||(num<INT_MIN/10))
        {
            return 0;
        }
        num=num*10+temp;
        n/=10;
    }
    return num;
    }
};