#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> list;
    set<int> seen;
    int val;

    while(cin >> val && val != -1){
        if(seen.find(val) == seen.end()){
            list.push_back(val);
            seen.insert(val);
        }
    }

    for(int i = 0; i < list.size(); i++){
        cout << list[i];
        if(i != list.size()-1) cout << " ";
    }
}