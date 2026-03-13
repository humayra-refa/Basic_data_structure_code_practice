#include<iostream>
#include<string>
using namespace std;

int main(){

    int n;
    cin >> n;

    cin.ignore();   // newline remove

    string s;
    getline(cin, s);

    cout << s << endl;

}