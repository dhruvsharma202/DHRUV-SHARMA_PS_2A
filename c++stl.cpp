#include<iostream>
#include<vector>
#include<array>
using namespace std;
int main(){
    array<int, 4>a={0};
    for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
 }
 vector<int>v;
 vector<int> c(5,1);
 vector<int>last(c);
 for(int i=0;i<last.size();i++){
    cout<<last[i]<<" ";
 }
 cout<<v.capacity();
 v.push_back(11);
 v.push_back(2);
 v.push_back(4);
 
 
 v.begin();

cout<<v.capacity();
 cout<<v.size();
for(int i:v){
    cout<<i<<" ";
}
    }