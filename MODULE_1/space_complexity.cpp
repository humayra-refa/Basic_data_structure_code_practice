#include<iostream>
using namespace std;
int sum(int a, int b)
{
    int s = a + b;
    return s;
}
int main(){
    int x = sum(5, 7);
    cout << x << endl;
}
//এই প্রোগ্রামে ব্যবহৃত variables:
// a
// b
// s
// x
// এগুলো fixed number of variables।
// Input size (n) বাড়লেও নতুন memory লাগছে না।
// তাই memory usage constant।
// Space Complexity = O(1) (constant space)