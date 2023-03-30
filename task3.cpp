#include<iostream>
#include<string>

using namespace std;

const int a_CODE = 97;
const int z_CODE = 122;

bool isUpper(string s)
{
    for(auto x: s)
    {
        int code = x;
        if (code >= 97 and code <= 122)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string symbols, result;
    cin >> symbols;
    result = (isUpper(symbols))?"true":"false";
    cout << result;
    return 0;
}