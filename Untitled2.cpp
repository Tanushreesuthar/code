#include<iostream>
using namespace std;

int main()
{
    int row;
    int colo;
    cout<<"enter no. of row";
    cin>>row;
    cout<<"enter no. of colo";
    cin>>colo;


    for(int i=0;i<colo;i++)
    {
        for(int j=0;j<row;j++)
        {
            if((i+j)%2==0)
            cout<<"1";
            else
                cout<<"0";
        }
        cout<<"\n";
    }
return 0;

}
