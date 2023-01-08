class Solution {
public:
    int getdistance(vector<int> &a, vector<int> &b){
        return (b[0] - a[0]) * (b[0] - a[0]) + (b[1] - a[1]) * (b[1] - a[1]) ;
    }
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        set<int> s{getdistance(p1,p2), getdistance(p1,p3), getdistance(p1,p4), 
        getdistance(p2,p3), getdistance(p2,p4), getdistance(p3,p4)};

        return (s.size() == 2 && !s.count(0)) ;
        
    }
};



