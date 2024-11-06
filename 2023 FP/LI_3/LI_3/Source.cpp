//��������������� �������� �����������, ������� ��� ��������������� (�.�. "��������" � �������� �������). 


#include <iostream>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	string text;
	cout << "Enter your text here: " << endl;
	getline(cin, text); 

    istringstream stringText(text); 
    vector <string> words; 

    // ������� ����� �� �����
    string word;
    while (stringText >> word) { 
        words.push_back(word); 
    }

    // ������������� ������ �����
    for (string& word : words) { 
        reverse(word.begin(), word.end()); 
    }

    // ������� ��������������� �����
    for (const string& word : words) { 
        cout << word << " ";
    }

    cout << endl;

	return 0;
}