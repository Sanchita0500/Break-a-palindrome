class Solution {
public:
    string breakPalindrome(string palindrome) {
        int i,n=palindrome.length();
        string res=palindrome;
        if(n==1)
            return "";
        for(i=0;i<n;i++)
        {
            char ch=palindrome[i];
            int j=0,val=ch-'a';
            while(j<val)
            {
                res[i]=char(j+97);
                if(res[i]!=res[n-1-i] && res<palindrome)
                    return res;
                else
                    res[i]=palindrome[i];
                j++;
            }
        }
        res[n-1]=char(int(palindrome[n-1]-'a')+98);
        return res;
    }
};
