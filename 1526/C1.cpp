#include<bits/stdc++.h>
#define int               long long
using namespace std;

signed main()
{
#ifndef ONLINE_JUDGE
	//FOR GETTING INPUT FROM INPUT.TEXT
	freopen("input", "r", stdin);
	//for getting output to output.txt
	freopen("output1", "w", stdout);
#endif
	int n;
	cin >> n;
	int val[n];
	for (int i = 0; i < n; i++)
	{
		cin >> val[i];
	}

	int hal = 0;
	int max1 = 0;

	priority_queue<int> maxHeap;

	int streak = 0;

	for (int i = 0; i < n; i++)
	{
		hal = hal + val[i];
		// cout << hal << endl;
		// cout << hal << " ";
		streak++;
		if (val[i] < 0)
		{
			// cout << val[i] << endl;
			maxHeap.push(-val[i]);
		}
		if (hal < 0)
		{

			while (!maxHeap.empty() and hal < 0)
			{

				hal = hal  +  maxHeap.top();
				maxHeap.pop();
				streak--;

			}
			// cout << hal << " " << streak << " efsdc" << endl;
			if (maxHeap.empty() and hal < 0)
			{
				break;
			}


		}

		max1 = max(max1 , streak);

	}
	// cout << endl;
	cout << max1 << endl;


}