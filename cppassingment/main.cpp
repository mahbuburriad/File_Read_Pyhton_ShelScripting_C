#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(void)
{
    string search;
    int offset;
    string line;

    ifstream Myfile;
    Myfile.open("GUTINDEX.ALL");
    cout << "Type the book name or author name you want to search: " << endl;
    getline(cin, search);

    if (Myfile.is_open())
    {
        while (!Myfile.eof())
        {
            getline(Myfile,line);
            if((offset = line.find(search, 0)) != string::npos)
            {
            cout << "The book/authors book has been founded\n" << search << endl;

            }

        }
    Myfile.close();

    }
    else
    {
        cout<< "could not open file"<<endl;
        return 0;

    }

}
