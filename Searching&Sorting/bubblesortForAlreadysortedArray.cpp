#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter array element : ";
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }
    int pass=1;
    while(n>pass){
        int f=0;
        for(int i=0 ; i<n-pass ; i++){
            if(arr[i]>arr[i+1]){
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
                f=1;
            }
        }
        if(f==0){
            cout<<"Array was already sorted.Stopped at pass : "<<pass<<endl;
            break;
        }
        pass++;
    }
    cout<<"Sorted Array : ";
    for(int i=0 ; i<n ; i++){
        cout<<arr[i]<< " ";
    }
    return 0;
}
