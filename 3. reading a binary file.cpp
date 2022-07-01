#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x;
    char str[]="";
    fstream file("demoWritting.txt",ios::binary|ios::in);
    /*while(file.read(&x,1))
    {
        cout<<x;
    }*/
    file.read(str,sizeof(file));
    cout<<str<<endl;
    file.close();
}

