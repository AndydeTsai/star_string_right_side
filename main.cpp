#include <cstdlib>
#include <iostream>
#include <stdio.h>

using namespace std;

int main(int argc, char *argv[])
{
    int i=1,j,k=1,l;
    cout<<"Type a number"<<endl;
    cin>>j;
    cout<<endl;
    l=j-1;
    for(i=1;i<=j;i++){
       for(i=1;i<=l;i++){
          cout<<" ";
          }
       for(i=1;i<=k;i++){
       cout<<"*";
          }
       cout<<endl;
       l=l-1;
       k=k+1;
       }
    system("PAUSE");
    return 0;
}
