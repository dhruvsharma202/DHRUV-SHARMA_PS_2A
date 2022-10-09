#include<iostream>
using namespace std;
void pattern(int n){
    cout<<n;
    if(n<=0){
        return ;

    }
    pattern(n-5);
cout<<n;

}
int main(){
 int n;
 cin>>n;
cout<<pattern<<endl;

}