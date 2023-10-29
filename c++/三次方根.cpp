#include<bits/stdc++.h>
using namespace std;
int main(){
    double mid,x;
    cin>>x;
double l=-10000,r=10000;
while(r-l > 1e-8){
   mid=(l+r)/2;
   if(mid*mid*mid>=x)r=mid;
   else l=mid;
}
printf("%lf\n",l);
return 0;
}