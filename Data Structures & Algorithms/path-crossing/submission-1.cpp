class Solution {
public:
    bool isPathCrossing(string path) {
        unordered_set<string> visited;

        int x = 0;
        int y = 0;

        visited.insert("0,0");

        for (char direction : path) {
            if (direction == 'N') {
                y++;
            } else if (direction == 'S') {
                y--;
            } else if (direction == 'E') {
                x++;
            } else {
                x--;
            }

            string position = to_string(x) + "," + to_string(y);

            if (visited.count(position)) {
                return true;
            }

            visited.insert(position);
        }

        return false;
    }
};