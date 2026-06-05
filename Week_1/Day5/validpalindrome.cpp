class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.size();
        int i=0;
        string a="";
        //clean the string
        for(int i=0;i<n;i++){
            if(isalnum(s[i])){
                a+=tolower(s[i]);
            }
        }

        int j=a.size()-1;
        while(i<=j){
            if(a[i]==a[j]){
                i++;
                j--;
            }
            else return false;
        }
        return true;
    }
};
