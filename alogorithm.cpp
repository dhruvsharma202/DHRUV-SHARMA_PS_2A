#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(7);
    v.push_back(9);
    cout<<"bineary search"<< binary_search(v.begin(),v.end(),3)<<endl;
    cout<<"lower bond"<<lower_bound(v.begin(),v.end(),3)-v.begin()<<endl;;
    int a=3;
    int b=5;
    swap(a,b);
    string s="abcd";
    reverse(s.begin(),s.end());
    cout<<s
<<endl;
rotate(v.begin(),v.begin()+1,v.end());
for(int i:v){
    cout<<i<<" "<<endl;
}
sort(v.begin(),v.end());
for(int i:v){
    cout<<i<<" ";
}
}