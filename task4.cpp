#include<iostream>
#include<string>
#include<algorithm>
#include<string_view>

using namespace std;

bool isIdentifier(const string& str)
{
    if (str.empty() || !isalpha(str[0]) && str[0] != '_') 
    {
        return false;
    }

    for (char c : str) 
    {
        if (!isalnum(c) && c != '_') 
        {
            return false;
        }
    }
    return true;
}

int main() {
    string str1 = "isIdentifier";
    string str2 = "_name123";
    string str3 = "hello world";
    string str4 = "123name";
    string str5 = "name-123";
    cout << boolalpha << isIdentifier(str1) << '\n'; 
    cout << boolalpha << isIdentifier(str2) << '\n'; 
    cout << boolalpha << isIdentifier(str3) << '\n'; 
    cout << boolalpha << isIdentifier(str4) << '\n'; 
    cout << boolalpha << isIdentifier(str5) << '\n'; 
    return 0;
}