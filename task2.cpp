#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;


void reverseVector(vector<string>& vec)
{
  reverse(vec.begin(), vec.end());

  for_each(vec.begin(), vec.end(), [](string& str){reverse(str.begin(), str.end()); });
}

void printVector(const vector<string>& v)
{
    for (vector<string>::const_iterator it = v.cbegin(); it != v.cend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}


int main()
{
    int n;
    cin >> n;
	vector<string> v(n);
	for (int i = 0; i < n; ++i)
		cin >> v[i];

    reverseVector(v);
    printVector(v);	
}
