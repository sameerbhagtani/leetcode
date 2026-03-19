class Solution {
public:
    bool equalFrequency(string word) {
        unordered_map<char, int> freq;
        for (char c : word) {
            freq[c]++;
        }

        unordered_map<int, int> count;
        for (const auto& [key, value] : freq) {
            count[value]++;
        }

        if (count.size() == 1) {
            auto it = count.begin();

            // either all chars appear once ("abc") or there's only one char type ("aaaa")
            return it->first == 1 || it->second == 1;
        }

        if (count.size() == 2) {
            auto it1 = count.begin();
            auto it2 = next(it1);

            int f1 = it1->first, c1 = it1->second;
            int f2 = it2->first, c2 = it2->second;

            // ensure f1 < f2
            if (f1 > f2) {
                swap(f1, f2);
                swap(c1, c2);
            }

            // one char has freq 1, others have freq f2 ("abbcc")
            if (f1 == 1 && c1 == 1)
                return true;

            // one char has freq f1 + 1, others have freq f1 ("aabbccc")
            if (f2 == f1 + 1 && c2 == 1)
                return true;
        }

        return false;
    }
};