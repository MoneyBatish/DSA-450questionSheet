#include<bits/stdc++.h>
using namespace std;
string solve(int n){
    if(n==1){
        return "1";
    }

    string s=solve(n-1);
    string res="";
    int counter=0;
    for(int i=0;i<s.length();i++){
        counter++;
        if(i==n-1 || s[i]!=s[i+1]){
            res+=to_string(counter)+s[i];
            counter=0;
        }
    }
    return res;
}
string countAndSay(int n) {
    string result = "1";

    for (int i = 2; i <= n; i++) {
        string temp = "";
        int count = 1;
        char digit = result[0];

        for (int j = 1; j < result.length(); j++) {
            if (result[j] == digit) {
                count++;
            } else {
                temp += to_string(count) + digit;
                digit = result[j];
                count = 1;
            }
        }

        temp += to_string(count) + digit;
        result = temp;
    }

    return result;
}


int main()
{
    int n;
    cin>>n;
    string ans=solve(n);
    cout<<ans<<endl;
}

