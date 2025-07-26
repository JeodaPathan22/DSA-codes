#include<iostream>
using namespace std;
void string_palindrome(char str[],int start,int end)
{
    if(start>=end)
    {
        cout<<"Palindrome!"<<endl;
        return;
    }
    if(str[start] != str[end])
    {
        cout<<"Not Palindrome!"<<endl;
        return;
    }
    string_palindrome(str,start+1,end-1);
}
int main()
{
    char str[100];
    cout<<"Enter a string : ";
    cin>>str;
    int length=0;
    while(str[length] != '\0')
    {
        length++;
    }
    int start=0,end=length-1;
    string_palindrome(str,start,end);
}
