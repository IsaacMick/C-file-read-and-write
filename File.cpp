#include "File.h"
#include <iostream>
#include <fstream>

//List of functions
File::File()
{

}

void File::writeFile(string fileName, string data)
{
    ofstream outFile;
    outFile.open(fileName);
    if(outFile.is_open())
    {
        outFile << data;
        outFile << '\n';
    }
    else
    {
        printNext("Could not write to file");
    }
    outFile.close();
}

string File::readFile(string fileName)
{
    string line;
    ifstream inFile;
    string data;
    inFile.open(fileName);

    //Grabs the info from the file and stores it in a string.
    if(inFile.is_open())
    {
        while (getline(inFile, line))
        {
            data.append(line + '\n');
        }

        //removes the very last end character, so there is no extra white space.
        data.pop_back();
    }

    //If the file does not exist.
    else
    {
        printNext("File not found. Press 0 then <Enter> to exit. Type the name of the file and <Enter> to try again.");
        string decision;
        cin >> decision;
        if (decision == "0"){
            inFile.close();
            exit(0);
        }

        else
        {
            inFile.close();
            File::readFile(decision);
        }
    }

    inFile.close();
    return data;
}

void File::printNext(string theString)
{
    cout << theString << endl;
}
