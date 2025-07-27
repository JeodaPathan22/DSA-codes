#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int target, int n)
{
    int low = 0;
    int high = n - 1;

    while(low <= high)
    {
        int mid = low + (high - low) / 2;

        if(arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int n, target;

    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];

    cout << " Enter the sorted elements:";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the target value to search: ";
    cin >> target;
    sort(arr, arr + n);
    cout << "Already Sorted array:\n";
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    int idx = binarySearch(arr, target, n);

    if(idx != -1)
        cout<<"Target value is at index:"<<idx;
    else
        cout<<"Not Found"<<endl;

    return 0;
}
