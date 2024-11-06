//Отредактировать заданное предложение, заменяя его инвертированным (т.е. "читаемым" в обратном порядке). 


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

    // Разбить текст на слова
    string word;
    while (stringText >> word) { 
        words.push_back(word); 
    }

    // Инвертировать каждое слово
    for (string& word : words) { 
        reverse(word.begin(), word.end()); 
    }

    // Вывести инвертированный текст
    for (const string& word : words) { 
        cout << word << " ";
    }

    cout << endl;

	return 0;
}