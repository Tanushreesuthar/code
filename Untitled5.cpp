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


    for(int i=1;i<=colo;i++)
    {
        for(int j=1;j<=row;j++)
        {
             if(j==row+1-i||(j>1&&j<row))
            cout<<"0";

                else
                cout<<"1";
        }
        cout<<"\n";
    }
return 0;

}
