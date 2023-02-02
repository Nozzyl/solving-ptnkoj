#include <iostream>
#include <vector>
using std::vector, std::string;

int main() {
    int rows, columns;
    std::cin >> rows >> columns;
    vector<vector<int>> out;
    for (int i = 0; i < rows; i++) {
        vector <int> j(columns, 0);
        out.push_back(j);
    }
    
    int num = 1;
    int max_num = rows * columns;
    int min_r = 0;
    int min_c = 0;
    int max_r = rows - 1;
    int max_c = columns - 1;
    int cur_r = 0;
    int cur_c = 0;
    
    int dir = 0;
    
    while (num <= max_num) {
        if (out[cur_r].at(cur_c) == 0) {
            out[cur_r].at(cur_c) = num;
            num++;
        }
        
        switch (dir) {
            case 0:
                if (cur_c < max_c) cur_c++;
                else {
                    cur_r++;
                    min_r++;
                    dir++;
                }
                break;
            case 1:
                if (cur_r < max_r) cur_r++;
                else {
                    cur_c--;
                    max_c--;
                    dir++;
                }
                break;
            case 2:
                if (cur_c > min_c) cur_c--;
                else {
                    cur_r--;
                    max_r--;
                    dir++;
                }
                break;
            case 3:
                if (cur_r > min_r) cur_r--;
                else {
                    cur_c++;
                    min_c++;
                    dir = 0;
                }
                break;
        }
    }
    
    
    for (vector<int> vec: out) {
        for (int i: vec) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    }
}
