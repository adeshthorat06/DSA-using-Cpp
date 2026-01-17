#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        long long maxDiagonal = 0;
        int maxArea = 0;

        for (auto &rect : dimensions) {
            int l = rect[0];
            int w = rect[1];

            long long diagonal = 1LL * l * l + 1LL * w * w;
            int area = l * w;

            if (diagonal > maxDiagonal) {
                maxDiagonal = diagonal;
                maxArea = area;
            } 
            else if (diagonal == maxDiagonal) {
                maxArea = max(maxArea, area);
            }
        }
        return maxArea;
    }
};

int main(){


    Solution obj;

    // Example input
    vector<vector<int>> dimensions = {{9, 3}, {8, 6}, {4,5}, {16,2}, {42,4}, {23,3}};

    int result = obj.areaOfMaxDiagonal(dimensions);

    cout << "Maximum area of rectangle with longest diagonal: "
         << result << endl;

    return 0;
}

