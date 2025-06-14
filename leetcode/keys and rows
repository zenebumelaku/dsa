class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n, false);  
        stack<int> s;

        s.push(0);             
        visited[0] = true;

        while (!s.empty()) {
            int node = s.top();
            s.pop();

            for (int key : rooms[node]) {
                if (!visited[key]) {
                    visited[key] = true;
                    s.push(key);
                }
            }
        }

        for (bool v : visited) {
            if (!v) return false;  
        }

        return true;
    }
};
