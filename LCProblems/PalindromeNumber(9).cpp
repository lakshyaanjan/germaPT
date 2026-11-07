class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        return 0;
        int n=x;
      long rev=0;
      int temp;
    while(n>0)
    {
        temp=n%10;
        rev=rev*10+temp;
        n/=10;
    }
    if (rev==x)
    return 1;
    else return 0;  
    }
};