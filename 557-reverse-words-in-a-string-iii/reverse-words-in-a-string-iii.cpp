class Solution {
public:
    string reverseWords(string s) {
        int i=0;
        int j=0;

        while(i<s.length()){

             while(i < j ||s[i]==' ' && i<s.length()){
            i++;
        }
            while(j < i||s[j]!=' '&& j<s.length()){
                j++;
            }
            
           // string temp=s.substr(i,j-1);
            //reverse(temp.begin(),temp.end());
            reverse(s.begin() + i, s.begin() + j);
           // i=j+1;
        
    }
    return s;
    }
};