#include<bits/stdc++.h>
using namespace std;
int main()
{
    ifstream file;
    ofstream in("Copied.txt");
    file.open("fileInput.txt",ios::app);
    char ch;
    if(!file || !in)
    {
        cout<<"Error Opening file\n";
    }
    else
    {

        while((file.get(ch)))
        {
            if(ch=='\0')
                break;
            in.put(ch);
        }
        file.close();
        in.close();
    }
}

