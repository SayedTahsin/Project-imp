#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream file;
    int count=0;
    file.open("fileInput.txt");
    char word[100];
    if(!file )
    {
        cout<<"Error Opening file\n";
    }
    else
    {
        while(!file.eof())
        {
            file>>word;
            if(strcmp(word,"Birthday")==0)count++;
        }
        cout<<count<<endl;
        file.close();
    }
}


