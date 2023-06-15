#include<bits/stdc++.h>
using namespace std;
bool solveQueue(string s1,string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    queue<char>q1;
    queue<char>q2;

    for(int i=0;i<s1.length();i++){
        q1.push(s1[i]);
        q2.push(s2[i]);
    }
    int k=s2.length();
    while(k--){
        char ch=q2.front();
        q2.pop();
        q2.push(ch);
        if(q1==q2){
            return true;
        }
    }
    return false;
}
bool checkString(string s1,string s2,int index){
    for(int i=0;i<s1.length();i++){
        if(s1[i]!=s2[(index+i)%s2.length()]){
            return false;
        }
    }
    return true;
}
bool solveMOD(string s1,string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    else{
        vector<int>indexes;
        char ch=s1[0];
        for(int i=0;i<s2.length();i++){
            if(ch==s2[i]){
                indexes.push_back(i);
            }
        }
        for(int index:indexes){
            bool ans=checkString(s1,s2,index);
            if(ans){
                return true;
            }
        }
        return false;
    }
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    bool ans=solveMOD(s1,s2);
    if(ans){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}