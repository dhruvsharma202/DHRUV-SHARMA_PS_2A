#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
int factorial=1;
int sum=0;
for(int i=1;i<=n;i++){
    factorial=factorial*i;
    sum=sum+(factorial/i);
}
cout<<sum<<endl;
    return 0;
}