#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else
        {
            b-=a;
        }
    }
    cout<<"NOK="<<a<<endl;
	return 0;
}
