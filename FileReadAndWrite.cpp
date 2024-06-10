#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
    char data [100];

    //open a text file in write mode.
    ofstream outfile;
    outfile.open ("afile.txt");

    cout << "writting to the file " << endl;
    cout << "enter your name: ";
    cin.getline(data, 100);

    //write inputted data into the text file.
    outfile << data << endl;

    cout << "enter your age: ";
    cin >> data;
    cin.ignore();

    // again write inputted data into the text file
    outfile << data << endl;

    //close the opened file.
    outfile.close();

    //open file in read mode.
    ifstream infile;
    infile.open("afile.txt") ;

    cout << "Reading from a file ";
    infile >> data;

    //write the data on screen
    cout << data << endl;

    // again read the data from the file and display it
    infile >> data;
    cout << data << endl;

    // close the opened file.
    infile.close ();

    return 0;

}