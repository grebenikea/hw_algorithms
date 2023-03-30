#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

void printVector(const vector<string>& v)
{
    for (auto it = v.crbegin(); it != v.crend(); ++it)
        cout << *it << " ";
    cout << endl;

}

int main()
{
	vector<string> v;
	for (int i = v.size(); i < v.size(); ++i)
		cin >> v[i];

	for (vector<string>::iterator it = v.begin(); it != v.end(); ++it)
    {
        reverse(it->begin(), it->end());
    }

    printVector(v);
   		
}