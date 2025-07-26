#include<iostream>
using namespace std;
void reverse_string(char str[],int start,int end)
{
    if(start>=end)return;
    char temp=str[start];
    str[start]=str[end];
    str[end]=temp;
    reverse_string(str,start+1,end-1);
}

int main()
{
    char str[100];
    cout<<"Enter a string : ";
    cin>>str;
    int length=0;
    while(str[length]!= '\0')
    {
        length++;
    }
    int start=0,end=length-1;
    reverse_string(str,start,end);
    cout<<"Reverse String is : "<<str<<endl;
}
