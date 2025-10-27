#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main() {
	string str;
	do {
		cout << "Enter Text: ";
		getline(cin, str);

		if (str != "Q" && str != "q") {
			cout << "There are " << countWords(str) << " word(s)" << endl;
		}
		
	} while (str != "Q" && str != "q");
}
int countWords(string str) {
	int wordCount = 1;
	int spaceCount = 0;

	for (int i = 0; i < size(str); i++) {
		if (str[i] == ' ' && spaceCount == 0) {
			spaceCount = spaceCount + 1;
			wordCount = wordCount + 1;
			if (spaceCount > 1) {
				wordCount = wordCount - 1;

			}
			
		}
		else if (str[i] != ' ') {
			spaceCount = 0;
		}
		
	}

	return wordCount;
}