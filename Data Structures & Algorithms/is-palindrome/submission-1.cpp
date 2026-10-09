class Solution {
public:
    bool isPalindrome(string s) {
       string a;
       for(char x : s){
            if(iswalnum(x)){
                a+=x;
            }
       }
        cout<<endl;
       transform(a.begin(), a.end(), a.begin(), ::tolower);
        cout<<a<<endl;
       int i = 0, j = a.length()-1;
       int k = 0;
       while(i<=j){
            if (a[i] != a[j]){
                cout<<k;
                return false;
            }
            i++;
            j--;
            k++;
       } 
       return true;
    }
};
