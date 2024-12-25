#include<iostream>
using namespace std;
int main()
{
    int i, j, n=1;
    for(i=0; i<4; i++)
        {
            for(j=0; j<=i; j++)
            {
                cout<<n<<" ";
                n++;
            }
        cout<<endl;
        }
    return 0;
}