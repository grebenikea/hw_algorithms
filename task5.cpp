#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

void moveSpacesToEnd(string& str) {
    stable_partition(str.begin(), str.end(), [](char c) { return c != ' '; });
}

int main() {
    string str = "cat and dog";
    moveSpacesToEnd(str);
    cout << str << "!" <<'\n';
    return 0;
}