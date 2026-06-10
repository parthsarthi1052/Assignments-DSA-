#include <bits/stdc++.h>
using namespace std;

int main() {
int t;
cin>>t;

while(t--)
{
   int x;
   int y;
   cin>>x>>y;
   
   string str1,str2;
   cin>>str1;
   cin>>str2;
   
   vector<char>v;
   
   int l=min(str1.length(),str2.length());
   
   for(int i=0;i<l;i++){
       if(str1[i]==str2[i]){
           v.push_back(str1[i]);
       }else 
       break;
   }
    for (auto it : v) {
    cout << it;
}
}


return 0;
}
