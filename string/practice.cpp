#include<bits/stdc++.h>
using namespace std;

int main(){
    string word1 = "abcefg";
    string word2 = "abc";
  
        string result = "";
        int i = 0, j = 0;

        while (i < word1.length() && j < word2.length()) {
            result += word1[i];
            result += word2[j];
            i++;
            j++;
        }
        cout<<result<<endl;
        cout<<word1.substr(2)<<endl;
        cout<<word2.substr(j)<<endl;


        result += word1.substr(i);
        result += word2.substr(j);

        cout<<result<<endl;
        // cout<<word1[5];
    
    return 0;
}