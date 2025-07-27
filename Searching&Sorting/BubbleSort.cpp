#include<iostream>
using namespace std;
void bubbleSort(int a[],int n)
{
    int temp;
    for(int i=0; i<n-1; i++)
    {
        int swapped=0;
        for( int j=0; j<n-1-i; j++)
        {
            if(a[j]> a[j+1])
            {
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                swapped=1;
            }
        }
        if(swapped==0)
            break;
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
    bubbleSort(a,n);
    return 0;
}
