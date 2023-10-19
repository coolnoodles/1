#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=100010,MOD=1000000007;
int main(){
int n,m1,m2,m;
int a[N],b[N];
scanf("%d",&n);
scanf("%d",&m1);
for(int i=m1-1;i>=0;i--)scanf("%d",&a[i]);
scanf("%d",&m2);
for(int i=m2-1;i>=0;i--)scanf("%d",&b[i]);
m=max(m1,m2);
int res=0;
for(int i=m-1;i>=0;i--)
res=(res*(LL)max({2,a[i]+1,b[i]+1})+a[i]-b[i])%MOD;
cout<<res<<endl;
return 0;
}