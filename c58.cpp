//WAP that copies content of one file to another file.
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout;
    ifstream fin;
    fin.open("D:\\Harina Khati\\cpp2024\\file1.txt");
    if (!fin) {
        cout << "Error opening source file!" << endl;
        return 1;
    }
    fout.open("D:\\Harina Khati\\cpp2024\\file.txt");
    if (!fout) {
        cout << "Error opening destination file!" << endl;
        return 1;
    }

    char ch;
    while (fin.get(ch))
	{  
        fout.put(ch);      
    }
    fin.close();
    fout.close();

    cout << "File copied successfully!" << endl;
    return 0;
}

