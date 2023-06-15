#include<bits/stdc++.h>
using namespace std;
void duplicateBrute(string &s){
    int arr[26];
    for(int i=0;i<26;i++){
        arr[i]=0;
    }
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch==' '){
            continue;
        }
        int index=s[i]-'a';
        arr[index]++;
    }
    for(int i=0;i<26;i++){
        if(arr[i]>1){
            char ch= i+'a';
            cout<<ch<<" "<<arr[i]<<endl;
        }
    }
}
void duplicateMap(string &s){
    unordered_map<char,int>map;
    for(int i=0;i<s.length();i++){
        map[s[i]]++;
    }
    for(auto i:map){
        if(i.second>1){
            cout<<i.first<<" "<<i.second<<endl;
        }
    }
}
int main()
{
    string s;
    getline(cin, s);
    duplicateMap(s);
}