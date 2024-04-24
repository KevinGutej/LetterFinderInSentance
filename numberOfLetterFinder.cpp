#include <iostream>
#include <string>

using namespace std;

int countOccurrences(const string& sentence, char letter) {
    int count = 0;
    for (char ch : sentence) {
        if (tolower(ch) == tolower(letter)) {
            count++;
        }
    }
    return count;
}

int main() {
    string sentence;
    char letter;
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    cout << "Enter a letter to count its occurrences: ";
    cin >> letter;
    int occurrences = countOccurrences(sentence, letter);
    cout << "The letter '" << letter << "' appears in the sentence " << occurrences << " time(s)." << endl;
    
    return 0;
}
