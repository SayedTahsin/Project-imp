#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream file;
    file.open("fileInput.txt",ios::app);
    char ch;
    if(!file)
    {
        cout<<"Error Opening file\n";
    }
    else
    {
        cout<<"Enter paragraph press ctrl + z and enter key...\n";
        while((cin.get(ch)))
        {
            if(ch=='\0')
                break;
            file.put(ch);
        }
        file.close();
    }
}
