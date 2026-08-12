class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};

int left = 0, right = s.size() - 1;
while (left < right) {
    if (!vowels.count(s[left])) {
        left++;
        continue;
    }
    if (!vowels.count(s[right])) {
        right--;
        continue;
    }
    swap(s[left], s[right]);
    left++;
    right--;
}
return s;
    }
};