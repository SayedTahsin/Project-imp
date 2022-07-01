File pointer:
    getPointer -> indicate the position of the next input(read)
    putPointer -> indicate the position of the next output(write)

finding position:
    tellg()-> return the current position of getPointer
    tellp()-> return the current position of putPointer

change position:
    seekg(bytes,offset)->  to move the getPointer backward/forward with reference to offset
    seekp(bytes,offset)->  to move the putPointer backward/forward with reference to offset

    offset:
        ios::beg ->beginning of file(default offset)
        ios::cur ->current position
        ios::end ->end of file

Writting A binary file:
    struct person{
        char name[50];
        int age;
    };
    int main(){
    person me={"Tahsin",21};
    ofstream file("junk.txt",ios::binary|ios::out);
    file.write((char*)&me,sizeof(me));
    file.close();
    }
Reading A binary file:
    int main(){

    person out;
    ifstream file2("junk.txt",ios::binary|ios::in);
    file2.read((char*)&out,sizeof(person));
    cout<<out.name<<' '<<out.age<<endl;
    file2.close();

    }
