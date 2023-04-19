#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void reverseVector(std::vector<string>& v) 
{
    reverse(v.begin(), v.end());
    for_each(v.begin(), v.end(), [](string& str) { reverse(str.begin(), str.end()); });
}

int main() 
{
    vector<string> v = {"cat", "dog", "mouse", "elephant"};
    reverseVector(v);
    for (const auto& str : v)
    {
        cout << str << ' ';
    }
    cout << '\n';
    return 0;
}