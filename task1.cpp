#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

template <typename T>
void printVector(const vector<T>& v)
{
    for (typename vector<T>::const_iterator it = v.cbegin(); it != v.cend(); ++it)
    {
        cout << *it << " ";
    }
    cout << endl;
}


int main()
{
	int n;
	cin >> n;

	vector<int> v(n);
	for (int i = 0; i < n; ++i)
		cin >> v[i];

	vector<int>::iterator max = max_element(v.begin(), v.end());

	sort(v.begin(), max);
	sort(max, v.end(), greater<>());

	printVector(v);
}
