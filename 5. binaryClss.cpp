#include<bits/stdc++.h>
using namespace std;
class student
{
    int id;
    char name[30];
    double cgpa;
public:
    void write_info()
    {
        system("cls");

        cout<<endl;

        cout<<"\tEnter ID   : ";
        cin>>id;

        cin.ignore();

        cout<<"\tEnter Name : ";
        cin.getline(name,30);

        cout<<"\tEnter CGPA : ";
        cin>>cgpa;

        cout<<"\tInfo Added...\n\n";

        system("pause");
    }
    void read_info()
    {
        cout<<"\t"<<left<<setw(5)<<id<<left<<setw(30)<<name<<left<<setw(5)<<cgpa<<endl;
    }
    int returnID()
    {
        return id;
    }
    void search_info()
    {
        system("cls");
        cout<<"\n";
        cout<<"\tID  : "<<id<<endl;
        cout<<"\tName: "<<name<<endl;
        cout<<"\tcgpa: "<<cgpa<<endl;
        cout<<endl;
        system("pause");
    }
    void update_info()
    {
        system("cls");
        cout<<"\n\tEnter Updated Name: ";
        cin.getline(name,30);
        cout<<"\tEnter Updated CGPA: ";
        cin>>cgpa;
        cout<<"\n\tINFO updated...\n";
        system("pause");
    }
};
void write()
{
    ofstream file("Student_info.txt",ios::binary|ios::app);
    student st;
    st.write_info();
    file.write((char*)&st,sizeof(student));
    file.close();
}
void read()
{
    system("cls");

    student st;
    ifstream file("Student_info.txt",ios::binary|ios::in);

    cout<<"\n\t"<<left<<setw(5)<<"ID"<<left<<setw(30)<<"Name"<<left<<setw(5)<<"CGPA"<<endl;
    while(file.read((char*)&st,sizeof(st)))
    {
        st.read_info();
    }
    cout<<endl;
    file.close();
    system("pause");
}
void search_()
{
    system("cls");

    student st;
    int id;

    ifstream file("Student_info.txt",ios::binary|ios::in);

    cout<<"\n\tEnter ID: ";
    cin>>id;

    while(file.read((char*)&st,sizeof(student)))
    {
        if(st.returnID()==id)
        {
            st.search_info();
            cout<<endl;
            file.close();
            return ;
        }
    }
    system("cls");
    cout<<"\n\n\t!!!NOT FOUND!!!\n\n";
    system("pause");
}
void update()
{
    system("cls");
    int id;
    student st;
    cout<<"\n\tEnter ID: ";
    cin>>id;
    cin.ignore();
    fstream file("Student_info.txt",ios::binary|ios::in|ios::out);
    while(file.read((char*)&st,sizeof(student)))
    {
        if(st.returnID()==id)
        {
            st.update_info();
            int pos=(-1)*(sizeof(student));
            file.seekp(pos,ios::cur);
            file.write((char*)&st,sizeof(student));
        }
    }
    file.close();
}
void Delete()
{
    system("cls");
    int id;
    student st;
    cout<<"\n\tEnter ID to delete: ";
    cin>>id;
    fstream file,temp;
    file.open("Student_info.txt",ios::binary|ios::in);
    temp.open("temp.txt",ios::binary|ios::app);
    while(file.read((char*)&st,sizeof(student)))
    {
        if(id!=st.returnID())
            temp.write((char*)&st,sizeof(student));
    }
    file.close();
    temp.close();
    remove("Student_info.txt");
    rename("temp.txt","Student_info.txt");

    cout<<"\n\tInfo Deleted...\n";
    system("pause");
}
void format()
{
    fstream file("Student_info.txt",ios::binary|ios::out);
    file.close();
    system("cls");
    cout<<"\n\n\t!!!File Formated!!!\n\n";
    system("pause");
}
int main()
{
    int op;
    while(1)
    {
        system("cls");
        cout<<"\n";
        cout<<"\t1.write.\n";
        cout<<"\t2.Read.\n";
        cout<<"\t3.Search.\n";
        cout<<"\t4.Update.\n";
        cout<<"\t5.Delete.\n";
        cout<<"\t6.EXIT.\n";
        cout<<"\t7.Format.\n";
        cout<<"\n\tEnter option: ";
        cin>>op;
        if(op==1)
        {
            write();
        }
        if(op==2)
        {
            read();
        }
        if(op==3)
        {
            search_();
        }
        if(op==4)
        {
            update();
        }
        if(op==5)
        {
            Delete();
        }
        if(op==6)
        {
            exit(0);
        }
        if(op==7)
        {
            format();
        }
    }
}
