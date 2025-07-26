#include<iostream>
using namespace std;
int Max_in_array(int arr[],int index,int n)
{
    if(index==n-1)
    {
        return arr[index];
    }
    int max_arr=Max_in_array(arr,index+1,n);
    if(max_arr<arr[index])
    {
        return arr[index];
    }
    return max_arr;
}A
int main()
{
    int n;
    cout<<"Enter the number of elements : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of array elements : ";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    int index=0;
    int max=Max_in_array(arr,index,n);
    cout<<"Maximum element is : "<<max<<endl;
    return 0;
}
