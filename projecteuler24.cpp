#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

typedef unsigned long long int ulli;

ulli tots,n;

void permute(string s){

   for(ulli i = s.length()-1;i>0;i--){
       if(s[i]>s[i-1]){
           char min = 'z';
           ulli pos;
           for(ulli j=i;j<s.length();j++){
               if(s[j]<min && s[j]>s[i-1]){
                   min=s[j];
                   pos=j;
               }
           }
           char temp = s[pos];
           s[pos]=s[i-1];
           s[i-1]=temp;
           string t = s.substr(i);
           sort(t.begin(),t.end());
           string b = s.substr(0,i);
           s = b+t;
           tots++;
           if(tots == n){
               cout<<s<<endl;
               break;
           }
           else{
               permute(s);
               break;
           }
       }

   }
}


int main() {
   /* Enter your code here. Read input from STDIN. Prulli output to STDOUT */
   string s;//= "abcdefghijlkm";
   ulli Q;
   cin>>Q;
   while(Q>0){
       s = "abcdefghijklm";
       cin>>n;
       tots=1;
       if(n==1)
           cout<<s<<endl;
       else{
           permute(s);
       }
       Q--;
   }
   return 0;
}
