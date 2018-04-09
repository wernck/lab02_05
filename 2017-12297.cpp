#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main()
{
	vector<int> number;
	int num;
	
	while (cin >> num)
	{
		number.push_back(num);
	}

	sort(number.begin(), number.end(), greater<int>());

	cout << "\nordered array" << endl;
	for (auto i : number)
		cout << i << " ";
	cout << endl;

	return 0;
}