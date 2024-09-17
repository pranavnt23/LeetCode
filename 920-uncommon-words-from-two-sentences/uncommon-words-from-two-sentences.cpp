class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        vector<string> w1, w2, uncommon;
        vector<string> common1, common2;
        bool flag;

        stringstream ss1(s1), ss2(s2);
        string word1, word2;

        // Split the first sentence into words and count occurrences
        while (ss1 >> word1) {
            w1.push_back(word1);
        }

        // Split the second sentence into words and count occurrences
        while (ss2 >> word2) {
            w2.push_back(word2);
        }

        // Find uncommon words in w1
        for (int i = 0; i < w1.size(); i++) {
            flag = false;
            for (int j = 0; j < w2.size(); j++) {
                if (w1[i] == w2[j]) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                bool alreadyAdded = false;
                for (const string& word : uncommon) {
                    if (word == w1[i]) {
                        alreadyAdded = true;
                        break;
                    }
                }
                if (!alreadyAdded) {
                    // Check if word1 is repeated in w1
                    bool isRepeated = false;
                    for (int k = 0; k < w1.size(); k++) {
                        if (w1[i] == w1[k] && i != k) {
                            isRepeated = true;
                            break;
                        }
                    }
                    if (!isRepeated) {
                        uncommon.push_back(w1[i]);
                    }
                }
            }
        }

        // Find uncommon words in w2
        for (int i = 0; i < w2.size(); i++) {
            flag = false;
            for (int j = 0; j < w1.size(); j++) {
                if (w2[i] == w1[j]) {
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                bool alreadyAdded = false;
                for (const string& word : uncommon) {
                    if (word == w2[i]) {
                        alreadyAdded = true;
                        break;
                    }
                }
                if (!alreadyAdded) {
                    // Check if word2 is repeated in w2
                    bool isRepeated = false;
                    for (int k = 0; k < w2.size(); k++) {
                        if (w2[i] == w2[k] && i != k) {
                            isRepeated = true;
                            break;
                        }
                    }
                    if (!isRepeated) {
                        uncommon.push_back(w2[i]);
                    }
                }
            }
        }

        return uncommon;
    }
};