#ifndef FILE_H
#define FILE_H
#include <string>

using namespace std;
class File
{
    string fileName;
    public:
        File();
        void writeFile(string, string);
        string readFile(string);

    protected:

    private:
        void printNext(string);
};

#endif // FILE_H
