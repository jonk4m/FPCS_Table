// TestingTesting.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <string>
#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
    if (argc < 2)
    {
        std::cout << "Incorrect Number of Input Arguments.    Entered: ";
        std::cout << (argc - 1);
        std::cout << " Required: 1\n";
        std::cout << "\nExiting the Program Now...";
        exit(1);
    }


    string borderString("\n################################################################\n");
    cout << borderString;
    string strMytestString("Welcome to the Alpha Version of the FPCS development software for Testing Purposes Only\n");
    cout << strMytestString;
    string suthor("Author: Jonathan Kinnard of MacB ; 2020\n\n");
    cout << suthor;

    static const char* applicationName = argv[0];
    static const char* fileName = argv[1];
    static const char* parameter2 = argv[2];
    static const char* parameter3 = argv[3];

    std::cout << "Parsing in data from File: ";
    std::cout << fileName;
    std::cout << " \n";
    ifstream inFile;
    inFile.open(fileName);
    if (!inFile) {
        cout << "Unable to open file, Example file name looks like: \n";
        cout << "Exiting the program...";
        cout << borderString;
        exit(1); // terminate with error
    }

    string myText;
    int cnt = 0;
    while (getline(inFile, myText)) {
        std::cout << "\nData from line ";
        std::cout << cnt;
        cnt++;
        std::cout << "\n";
        cout << myText;
    }
    std::cout << "\n";

    inFile.close();


    std::cout << "Outputing to File";
    ofstream myofile("exampleOutput.csv");
    if (myofile.is_open()) {
        myofile << "outputting this\n";
        myofile << "outputting that,and that,and that too\n";
        myofile.close();
    }
    else cout << "Unable to open output file";

    std::cout << borderString;

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
