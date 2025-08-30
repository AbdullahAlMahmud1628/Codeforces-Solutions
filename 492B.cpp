#include <iostream>
#include <queue>
#include <limits>
#include <iomanip>
using namespace std;

int main()
{
	int n, l;
	cin >> n >> l;
	priority_queue<int> lanterns;
	int min_l = numeric_limits<int>::max();
	int max_l = numeric_limits<int>::min();
	
	for(int i = 0; i < n; i++) 
	{
		int a;
		cin >> a;
		lanterns.push(a);
		min_l = min(min_l, a);
		max_l = max(max_l, a);
	}

	int max_gap = -1;

	int prev = lanterns.top();
	if(prev != l) max_gap = 2 * (l - prev);
	lanterns.pop();
	while(!lanterns.empty())
	{
		int current = lanterns.top();
		lanterns.pop();
		max_gap = max(max_gap, prev - current);
		prev = current;
	}

	if(prev != 0) max_gap = max(max_gap, 2 * prev);

	cout << setprecision(10) << 1.0 * max_gap / 2 << endl;
	return 0;
}
