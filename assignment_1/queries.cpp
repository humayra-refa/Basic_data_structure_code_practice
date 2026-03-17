#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> list;
    int q;
    cin >> q;
    while(q--){
        int x, v;
        cin >> x >> v;
        if(x == 0) list.insert(list.begin(), v);        
        else if(x == 1) list.push_back(v);              
        else if(x == 2 && v < list.size())              
            list.erase(list.begin() + v);
        
        for(int val : list) cout << val << " ";
        cout << "\n";
    }
}