#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int fact=1;
    int sum=0;
    int ans;
    for(int i=1;i<=n;i++){
         fact=fact*i;
         sum=sum+(pow(x,i)*(fact/i));
    }
    cout<<sum<<endl;

return 0;
}

