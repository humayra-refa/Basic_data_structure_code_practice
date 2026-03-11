#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n;i>1;i=i/2){
        cout<<i<<endl;
    }
}
//this is a case of O(logN)