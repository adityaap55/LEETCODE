class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> words(cbegin(wordList), cend(wordList));
        if (!words.count(endWord)) {
            return 0;
        }
        int ladder = 2;
        unordered_set<string> left = {beginWord}, right = {endWord};
        while (!empty(left)) {
            for (const auto& word : left) {
                words.erase(word);
            }
            unordered_set<string> new_left;
            for (const auto& word : left) {
                auto new_word = word;
                for (int i = 0; i < size(new_word); ++i) {
                    char prev = new_word[i];
                    for (int j = 0; j < 26; ++j) {
                        new_word[i] = 'a' + j;
                        if (!words.count(new_word)) {
                            continue;
                        }
                        if (right.count(new_word)) {
                            return ladder;
                        }
                        new_left.emplace(new_word);
                    }
                    new_word[i] = prev;
                }
            }
            left = move(new_left);
            ++ladder;
            if (size(left) > size(right)) {
                swap(left, right);
            }
        }
        return 0;
    }
};
