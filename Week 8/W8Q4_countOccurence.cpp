#include <iostream>
#include <string>

using namespace std;

int main() {
    string line, word;

    // Input the line of text
    cout << "Enter a line of text: ";
    getline(cin, line);

    // Input the word to count
    cout << "Enter the word to count: ";
    cin >> word;

    // Count occurrences of the word in the line of text
    int count = 0;
    size_t pos = line.find(word);
    while (pos != string::npos) {
        count++;
        pos = line.find(word, pos + word.length());
    }

    // Output the count of occurrences
    cout << "The word '" << word << "' occurs " << count << " times in the given line of text." << endl;

    return 0;
}

