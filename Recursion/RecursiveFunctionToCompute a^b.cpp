#include<iostream>
using namespace std;
int power(int a,int b)
{
    if(b==0) return 1;
    return a*power(a,b-1);
}
int main()
{
    int a,b;
    cin>>a>>b;
    int result=power(a,b);
    cout<<"The power is : " <<result<<endl;
}
