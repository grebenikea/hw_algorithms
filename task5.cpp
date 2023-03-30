#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

void movespaces(string& s)
{
    int spacecounter = 0;
    while(s.find(" ") != string::npos)
    {
        s.erase(s.find(' '), 1);
        spacecounter++;
    }
    for (int i = 0; i < spacecounter; ++i)
        s.push_back(' ');
}

int main()
{
    string symbols;
    getline(cin, symbols);
    movespaces(symbols);
    cout << symbols<<"!"; 
    return 0;
}