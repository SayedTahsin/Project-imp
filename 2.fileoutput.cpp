#include<bits/stdc++.h>
using namespace std;
int main()
{

    string name;
    int roll;
    double cgpa;
    //ofstream file("output.txt");
    ofstream file;
    file.open("output.txt",ios::out);
    if(!file)
    {
        cout<<"Error in opening FILE\n";
    }
    else
    {
        char wish='y';
        int count=1;
        while(wish=='y')
        {
            cout<<"Enter info of student "<<count<<endl;
            cout<<"Enter A Name: ";
            getline(cin,name);
            cout<<"Enter Roll: ";
            cin>>roll;
            cout<<"Enter CGPA: ";
            cin>>cgpa;
            cin.ignore();
            file<<name<<" "<<roll<<" "<<cgpa<<endl;
            cout<<"Wanna Add more students info(y/n): ";
            cin>>wish;
            cin.ignore();
            count++;
        }
    }
    file.close();
}
