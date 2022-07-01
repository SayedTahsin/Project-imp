#include<bits/stdc++.h>
#include<fstream>
using namespace std;
int main()
{
    string name;
    int age,n;
    double cgpa;
    fstream file;
    file.open("STD_info.txt",ios::app);
    cout<<"How many student's: ";
    cin>>n;
    cin.ignore();
    for(int i=1; i<=n; i++)
    {
        system("cls");
        cout<<"Student "<<i<<endl;
        cout<<"Enter Name: ";
        getline(cin,name);
        file<<name<<"\t";
        cout<<"Enter Age: ";
        cin>>age;
        file<<age<<"\t";
        cout<<"Enter CGPA: ";
        cin>>cgpa;
        file<<cgpa<<endl;
        cin.ignore();
    }
    file.close();
    system("cls");

    file.open("STD_info.txt");
    cout<<"Name\tAge\tCGPA\n";
    while(getline(file,name))
    {
        cout<<name<<endl;
    }
}
