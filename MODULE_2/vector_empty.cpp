#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v1={1,3,7,9,11,13};
    cout<<v1.empty()<<endl;
    v1.clear();
    cout<<v1.empty()<<endl;
}