#include <iostream>
#include <fstream>
using namespace std;

int main ()
{
    //create and open a text file
    ofstream Myfile("exampleFile.txt");

    if (Myfile.is_open())
    {
        Myfile << "this is a line. \n";
        Myfile << "this is another line \n";
        Myfile.close();
    }
    else
    {
        cout << "unable to open file ";
    }
}