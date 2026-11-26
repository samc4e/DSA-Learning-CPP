class Solution {
public:
    bool checkString(string s) {
        int i=0;
        for(char ch :s){if(ch=='b')break;i++;}
        for(i;i<s.length();i++){if(s[i]=='a')return false;}
        return true;
    }
};