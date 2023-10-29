#include<bits/stdc++.h>
using namespace std;
int main(){
   int N,sum,high;
   cin>>N;
   for(int i=1;i<=N;i++){
     high=2*max(i-1,N-i);
     cout<<high<<endl;
   }

    return 0;
}