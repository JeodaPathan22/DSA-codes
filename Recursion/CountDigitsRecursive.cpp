
#include<iostream>
using namespace std;
int count_digit(int num)
{
    if(num==0)return 0;
    return 1+count_digit(num/10);
}
int main()
{
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int count=count_digit(num);
    if(num==0)
    {
        cout<<"The number of digit : 1"<<endl;
    }
    else
    {
        cout<<"The number of digit : "<<count<<endl;
    }
    return 0;
}
