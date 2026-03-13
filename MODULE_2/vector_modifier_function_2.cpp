#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector<int> v = {1,2,3,4,7,6,4,5,4,3,4};
    replace(v.begin(), v.end(), 4, 100);
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    auto it = find(v.begin(), v.end(), 6);
    if(it != v.end()){
        cout << "Found the value " << *it << endl;
    }
    else{
        cout << "Not found" << endl;
    }
}