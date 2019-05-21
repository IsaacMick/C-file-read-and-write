#include <iostream>
#include "File.cpp"
#include "File.h"

using namespace std;

//List of all function calls
void printNext(string);

int main()
{
    //Creates a file
    File file;
    string readFileName;
    string writeFileName;

    cout << ("Name of read file: ");
    cin >> readFileName;

    //Collects the file data from the file read. More info found in File.cpp
    string data = file.readFile(readFileName);

    cout << ("Name of file to write: ");
    cin >> writeFileName;
    //Writes the file data to a new file "writeFileName".
    file.writeFile(writeFileName, data);

    printNext("File successfully copied");

    return 0;
}

void printNext(string theString)
{
    cout << theString << endl;
}
