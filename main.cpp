#include <iostream>
#include <string>

using namespace std;

string testFunc(string test) {
  string tempString = "";
  string word = "";
  bool search = false;
  int count = 0;
  for (int i = 0; i < test.length(); i++) {
    if (test[i] != ' ' && test[i] != ',' && test[i] != '.') {

      word += test[i];
    } else {
      // cout << word<< "\n";
      if (word == "star") {
        // cout << "start";
        search = true;
      }

      if (search) {
        if (word == "twinkle" || word == "Twinkle") {
          if (count == 1) {
            // cout << "ERASE";
            // cout << "index: " << i << "\n";
            word = "";
          }
          count += 1;
        }
      }

      tempString += word;

      if (test[i] == ',') {
        tempString += ',';
      } else if (test[i] == '.') {
        tempString += '.';
      } else {
        tempString += " ";
      }
      word = "";
    }
  }
  return tempString;
}

int main() {
  string input;

  cout << "Enter a string: ";

  getline(cin, input);

  cout << testFunc(input) << endl;

  return 0;
}
//
// twinkle twinkle little star twinkle twinkle

// https://Matthewtershi:@github.com/Matthewtershi/gitTutorial.git

//  git remote add origin https://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@github.com/Matthewtershi/gitTutorial.git