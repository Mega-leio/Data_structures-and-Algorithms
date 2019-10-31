#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
    cout << "Enter size of array : " ;
    cin >> n;
    int arr[n];
	cout << " Enter elements : " << endl;
	for(int i=0;i<5;i++)
		cin >> arr[i];	

	for(int i=1;i<n;i++)
	{
		for(int j=0;j<=n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}

	for(int i=0;i<5;i++)
		cout << arr[i];
	cout << endl;

    return 0;
}
