#include<iostream>
using namespace std;
void insertionSort(int a[],int n)
{

    for(int i=1; i<n; i++)
    {
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    cout << "Sorted Array: ";
    for(int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
int main()
{
    int a[100],n;
    cout << "Enter number of Elements: ";
    cin >> n;
    cout << "Enter " << n << " Elements: ";
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }
    insertionSort(a,n);
    return 0;
}
