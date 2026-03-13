#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> v = {1,2,3,4,5};

    // access
    cout << v[2] << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;

    // iterate
    for(int x : v){
        cout << x << " ";
    }

}