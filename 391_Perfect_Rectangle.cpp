class Solution {
public:
    bool isRectangleCover(vector<vector<int>>& rectangles) {

        map<pair<int, int>, int> count;

        for(vector<int> &rect : rectangles){

            count[{rect[0], rect[1]}]++;

            count[{rect[0], rect[3]}]--;

            count[{rect[2], rect[1]}]--;

            count[{rect[2], rect[3]}]++;

        }

        int corners = 0;

        for(auto &cnt : count){

            corners += abs(cnt.second);

        }

        return corners == 4;

    }
        

};
