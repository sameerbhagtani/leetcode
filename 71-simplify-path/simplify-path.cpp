class Solution {
public:
    string simplifyPath(string path) {
        vector<string> simplifiedPath;

        stringstream ss(path);
        string part;

        while (getline(ss, part, '/')) {
            if (part == "" || part == ".") {
                continue;
            }

            if (part == "..") {
                if (!simplifiedPath.empty())
                    simplifiedPath.pop_back();

                continue;
            }

            simplifiedPath.push_back(part);
        }

        string ans = "/";

        for (int i = 0; i < simplifiedPath.size(); i++) {
            if (i > 0)
                ans += "/";
            ans += simplifiedPath[i];
        }

        return ans;
    }
};