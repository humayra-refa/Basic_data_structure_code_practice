#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1={2,4,6,8,10};
    cout<<v1.size()<<endl;
    v1.clear();
    cout<<v1.size()<<endl;
    cout<<v1[1]<<endl;

}