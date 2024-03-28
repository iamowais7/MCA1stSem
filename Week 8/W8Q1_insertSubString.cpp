#include <iostream>
#include <string>

using namespace std;

// Function to insert a substring into a main string at a given position
string insertSubstring(string mainStr, string subStr, int position) {
    return mainStr.insert(position, subStr);
}

// Function to delete n characters from a given position in a string
string deleteCharacters(string str, int position, int n) {
    return str.erase(position, n);
}

int main() {
    string mainString, subString;
    int insertPosition, deletePosition, numCharsToDelete;

    // Input main string and substring
    cout << "Enter the main string: ";
    getline(cin, mainString);
    cout << "Enter the substring to insert: ";
    getline(cin, subString);

    // Input position to insert substring
    cout << "Enter the position to insert the substring: ";
    cin >> insertPosition;

    // Inserting substring into main string
    string resultStringAfterInsertion = insertSubstring(mainString, subString, insertPosition);
    cout << "Result after inserting substring: " << resultStringAfterInsertion << endl;

    // Input position and number of characters to delete
    cout << "Enter the position to start deletion: ";
    cin >> deletePosition;
    cout << "Enter the number of characters to delete: ";
    cin >> numCharsToDelete;

    // Deleting characters from main string
    string resultStringAfterDeletion = deleteCharacters(resultStringAfterInsertion, deletePosition, numCharsToDelete);
    cout << "Result after deleting characters: " << resultStringAfterDeletion << endl;

    return 0;
}

