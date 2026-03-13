#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v = {1,2,3,4};
    vector<int> v1;
    v1 = v;
    v.push_back(6);
    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }
    cout << endl;
    vector<int> v3 = {5,6,7,8,9};
    v3.pop_back();
    for(int i=0; i<v3.size(); i++){
        cout << v3[i] << endl;
    }
    cout << endl;
    vector<int> v4 = {5,6,7,8,9};
    v4.erase(v4.begin()+2);
    for(int i=0; i<v4.size(); i++){
        cout << v4[i] <<" ";
    }
    cout << endl;
    vector<int> v2 = {1,2,3,4,5};
    v2.erase(v2.begin()+1, v2.begin()+3);
    for(int i=0; i<v2.size(); i++){
        cout << v2[i] << " ";
    }
}