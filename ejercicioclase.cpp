#include <iostream>

using namespace std;

int main()
{
    int altura;
    cout<<"INgrese la altura que desea: ";cin>>altura;

    for(int i=1; i<=altura;i++)
    {
        for(int j=1;j<=i;j++)
        {    
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"**";
        }
        cout<<"\n";
    }
    return 0;
}