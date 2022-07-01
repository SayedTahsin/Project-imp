File:
1.Text File  : keeps data as character.
2.Binary File: keeps data as binary.

1. create a Stream object(fstream/ofstream/ifstream).
2. open the file or create.
3. read(ios::in)/write(ios::out).
4. close the file.


create a stream object:
    ofstream file; ///File Write
    ifstream file; ///File Read
    fstream file; ///File Read/Write

file open: streamobject.open("filename",filemode);
    using constructor:
        ofstream file("Output.txt"); ///Text file by default ///if there is no file then file will be created or the existing file will be overwritten.
        ifstream file("Input.txt"); ///Text file by default
        ofstream file("IO.txt"); ///Text file by default
    using open():
        ofstream file;
        file.open("Output.txt");///Text file by default ///if there is no file then file will be created or the existing file will be overwritten.
        file.open("Output.txt",ios::app)///if the file already exist then data of that file will not be overwritten and data we write will be appended.

file close:
    file.close();


file mode:
    ios::out        ->write mode and place the file pointer at beginning of file. if file already exists it will override.
                        if the file not exists it will create a new one.
    ios::in         ->read mode
    ios::app        ->write mode and place file pointer at the end of file if the file not exists it will create a new one.
    ios::ate        ->write/read mode and palce file pointer at the end of file.
    ios::trunc      ->if the file is opended for outpur operation and the file is already exists
                        then its previous data will be replaced bt new data.
    ios::nocreate   ->if the file not exist this file mode will ensure that no file is  created and open fails.
    ios::noreplace  ->if file does not exist a new file gets created but if the file already exists the open fails.
    ios::binary     ->opens a file in binary mode.


Writting in a file:
    put()                   ->used for writting a single character in file.
                              file.put('a');
    insertion operator(<<)  ->used for writting string.
                              file<<"Sayed Tahsin.";

Reading from a file:
    get() ->used to read single character or string in a file.
            file.get();
            or
            char arr[10];
            file.get(arr,10);//read 10 char
    Extraction operator(>>)->used for read sequence from file.
            char arr[20];
            file>>arr;
    getline()-> it reads characters from input stream and puts them in the array pointed to by the biffer untill either num characters have been read ,or character specified by delim encountered.
                if not mentioned the default value of de;im is newline character.
                char[20];
                file.getline(arr,20);
                or
                file.getline(arr,30,EOF);

