//Simple inverted triangle
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the no. of layers of triangles needed:\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=5;j>=i;j--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
//And also this pattern will solved by
#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter the no. of layers to be formed:\n";
    cin>>n;
    for(i=5;i>=1;i--)
    {
        for(j=i;j>=1;j--)
        {
            cout<<"*  ";
        }
        cout<<endl;
    }
    return 0;
}
