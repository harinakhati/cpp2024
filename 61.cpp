#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;
    char ch;
    file.open("D:\\Utshah C++\\file1.txt", ios::in);
    if (file.fail()) {
        cout << "File could not be opened." << endl;
        return 1;
    }
    cout << "File opened successfully." << endl;
    cout << "Reading from file..." << endl;
    while (file.get(ch)) 
	{
        cout << ch;
    }
    file.close();
    return 0;
}

