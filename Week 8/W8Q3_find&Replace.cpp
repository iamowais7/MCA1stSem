#include <iostream>
#include <string>

using namespace std;

int main() {
    string sentence, findStr, replaceStr;

    // Input the sentence
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    // Input the string to find and the string to replace it with
    cout << "Enter the string to find: ";
    cin >> findStr;
    cout << "Enter the string to replace it with: ";
    cin >> replaceStr;

    // Find and replace the string in the sentence
    size_t pos = sentence.find(findStr);
    while (pos != string::npos) {
        sentence.replace(pos, findStr.length(), replaceStr);
        pos = sentence.find(findStr, pos + replaceStr.length());
    }

    // Output the modified sentence
    cout << "Modified sentence: " << sentence << endl;

    return 0;
}

