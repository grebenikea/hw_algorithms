#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

bool isUpperCase(const string& str) 
{
    return all_of(str.begin(), str.end(), [](char c) { return isupper(c); });
}

int main() 
{
    string str1 = "CATS AND DOGS";
    string str2 = "Cats and Dogs!";
    string str3 = "ABC123!@";
    string str4 = "Abc123!@";
    cout << boolalpha << isUpperCase(str1) << '\n'; // true
    cout << boolalpha << isUpperCase(str2) << '\n'; // false
    cout << boolalpha << isUpperCase(str3) << '\n'; // true
    cout << boolalpha << isUpperCase(str4) << '\n';
    return 0;
}