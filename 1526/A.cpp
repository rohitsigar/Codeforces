#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
	//FOR GETTING INPUT FROM INPUT.TEXT
	freopen("input", "r", stdin);
	//for getting output to output.txt
	freopen("output1", "w", stdout);
#endif
	int t;
	cin >> t;
	while (t--)
	{

		int n;
		cin >> n;
		int arr[2 * n];

		for (int i = 0; i < 2 * n; i++)
		{
			cin >> arr[i];
		}

		sort(arr, arr + 2 * n);

		int i = 1;
		int mid = 2;



		cout << arr[0] << " ";

		while (mid < 2 * n)
		{

			cout << arr[mid] << " " << arr[i] << " ";
			i = i + 2;
			mid = mid + 2;

		}
		cout << arr[2 * n - 1] << endl;



	}


}