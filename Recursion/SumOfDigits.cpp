#include<iostream>
using namespace std;
int sum_of_digits(int n)
{
    if(n==0) return 0;
    int rem=n%10;
    return rem+sum_of_digits(n/10);
}
int main()
{
    int n;
    cin>>n;
    int result=sum_of_digits(n);
    cout<<"The sum of digits is : " <<result<<endl;
}
