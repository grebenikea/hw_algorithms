#include<iostream>
#include<string>
#include<cstdlib>
#include<string_view>

using namespace std;

const int A_code = 65;
const int Z_code = 90;
const int a_code = 97;
const int z_code = 122;
const int underline_code = 95;
const int zero_code = 48;
const int nine_code = 57;

bool isIdentifier(string_view s)
{
    int code = s[0];
    if (not (code >= A_code and code <= Z_code or code >= a_code and code <= z_code or code == underline_code ) )
        return false;
        
    for(auto x:s)
    {
        code = int(x);
        if (not (code >= A_code and code <= Z_code or code >= a_code and code <= z_code or code == underline_code or code >= zero_code and code <= nine_code) )
        return false;
    }

    return true;
}


int main()
{
    string str;
    getline(cin, str);
    cout << isIdentifier(str);

    return 0;
}