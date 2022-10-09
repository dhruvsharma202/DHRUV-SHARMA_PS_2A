#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int facto=1;
int sum=0;
for(int i=1;i<=n;i++){
     facto=facto*i;
     sum+=facto;
} 
cout<<sum<<endl;
return 0;
}