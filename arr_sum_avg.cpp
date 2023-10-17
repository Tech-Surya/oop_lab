#include <iostream>
using namespace std;


int main()
{
    int n,sum=0,avg=0;
    cout<<"Enter your size of an array\n";
    cin>>n;
	int nums[n];

    cout<<"Enter your elements of an array\n";
    for (int i = 0; i < n; i++)
	{
		cin>>nums[i];
	}

	// Sum = Adding all the elements
	for (int i = 0; i < n; i++)
	{
		sum += nums[i];
	}

	// Calculating the average
	avg = sum / n;

	cout << endl << "Sum of your array is: " << sum;
	cout << endl << "Average of your array is: " << avg;
	return 0;

}
