#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class MinDistanceKeyboard {
private:
    pair<int, int> coordinate(char s) { 
        return {(s - 'A') / 6, (s - 'A') % 6}; 
    }

    int getDistance(char a, char b) {
        if (a == '0' || b == '0') {
            return 0;
        }

        pair<int, int> posA = coordinate(a);
        pair<int, int> posB = coordinate(b);

        return abs(posA.first - posB.first) + abs(posA.second - posB.second);
    }

    int helper(string& word, int index, char prevf1, char prevf2, int distance) {
        if (index == word.size()) {
            return distance;
        }

        int d1 = helper(word, index + 1, word[index], prevf2, distance + getDistance(prevf1, word[index]));
        int d2 = helper(word, index + 1, prevf1, word[index], distance + getDistance(prevf2, word[index]));

        return min(d1, d2);
    }
public:
    int getMinDistance(string& word) {
        return helper(word, 0, '0', '0', 0);
    }


};

int main() {
    int count = 0;
    
    MinDistanceKeyboard minDistanceKeyboard;
    string word = "HAPPY";

    cout << minDistanceKeyboard.getMinDistance(word) << endl;

    return 0;
}