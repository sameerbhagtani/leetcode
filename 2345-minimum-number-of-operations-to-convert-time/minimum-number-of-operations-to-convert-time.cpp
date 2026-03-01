class Solution {
public:
    int convertTime(string current, string correct) {
        int diff = getMinutes(correct) - getMinutes(current);
        int operations = 0;

        operations += diff / 60;
        diff %= 60;

        operations += diff / 15;
        diff %= 15;

        operations += diff / 5;
        diff %= 5;

        operations += diff;

        return operations;
    }

    int getMinutes(const string& time) {
        int hours = stoi(time.substr(0, 2));
        int minutes = stoi(time.substr(3, 2));

        return hours * 60 + minutes;
    }
};