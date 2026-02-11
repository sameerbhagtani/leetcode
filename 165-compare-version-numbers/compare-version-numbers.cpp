class Solution {
public:
    int compareVersion(string version1, string version2) {
        stringstream stream1(version1);
        stringstream stream2(version2);

        string t1, t2;

        while (stream1 || stream2) {
            int n1 = getline(stream1, t1, '.') ? stoi(t1) : 0;
            int n2 = getline(stream2, t2, '.') ? stoi(t2) : 0;

            if (n1 < n2)
                return -1;
            else if (n1 > n2)
                return 1;
        }

        return 0;
    }
};