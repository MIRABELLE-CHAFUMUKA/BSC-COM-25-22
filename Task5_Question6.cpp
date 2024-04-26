#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int countVowels(const string& str) {
    int count = 0;
    for (char c : str) {
        c = tolower(c); 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            count++;
        }
    }
    return count;
}
// Function to count number of words in the Statement
int countWords(const string& str) {
    int count = 0;
    string word = "";
    for (char c : str) {
        if (c == ' ') {
            count++;
            word = "";
        } else {
            word += c;
        }
    }
    if (!word.empty()) {
        count++; 
    }
    return count;
}
// Function to write  the statement backwards
string reverse(const string& str) {
    string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}
// Function to capitalize second letter of each word in the statement
string capitalizeSecondLetter(const string& str) {
    string result = "";
    string word = "";
    for (char c : str) {
        if (c == ' ') {
            if (!word.empty()) {
                result += word.substr(0,1) + char (toupper(word[1])) + word.substr(2) + " ";
                word = "";
            }
        } else {
            word += c;
        }
    }
    return result;
}

int main() {
// creatrion .txt file and displaying of expected output
    ofstream File("question6.txt");
    ifstream file("question6.txt");
    if (file.is_open()) {
        File << "This is the Advanced Computer Programming Module" << endl;
        string fileData((istreambuf_iterator<char>(file)), istreambuf_iterator<char>());
        
        file.close();

        int vowelCount = countVowels(fileData);
        int wordCount = countWords(fileData);
        string reversed = reverse(fileData);
        string capitalized = capitalizeSecondLetter(fileData);

        cout << "Number of vowels: " << vowelCount << endl;
        cout << "Number of words: " << wordCount << endl;
        cout << "Reversed statement: " << reversed << endl;
        cout << "Statement with second letter capitalized: " << capitalized << endl;
    } else {
        cout << "Unable to open file." << endl;
    }

    return 0;
}
