#include<bits/stdc++.h>
using namespace std;
int main()
{

    string name;
    int roll;
    double cgpa;
    //ifstream file("output.txt");
    ifstream file;
    file.open("output.txt",ios::in);
    if(!file)
    {
        cout<<"Error in opening FILE\n";
    }
    else
    {
        int count=1;
        while(!file.eof())
        {
            file>>name>>roll>>cgpa;
            if(file.eof())
            {
                break;
            }
            else
            {

                cout<<"Record "<<count<<endl;
                cout<<name<<" "<<roll<<" "<<cgpa<<endl;
                count++;
            }
        }
    }
    file.close();
}

