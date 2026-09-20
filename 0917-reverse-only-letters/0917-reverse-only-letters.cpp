class Solution {
public:
    string reverseOnlyLetters(string s) {
        string reverse="";
        for(int  i=0;i<s.length();i++)
        {
            if((s[i]>='a'&&s[i]<='z')|| s[i]>='A'&&s[i]<='Z')
            {
                reverse+=s[i];
            }
        }
        int j=reverse.length()-1;
        for(int i=0;i<s.length();i++){
            if((s[i]>='a'&&s[i]<='z')|| s[i]>='A' && s[i]<='Z'){
                s[i]=reverse[j];
                j--;
            }
        }
        return s;
    }
};