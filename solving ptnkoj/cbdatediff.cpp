#include <iostream>

class date {
public:
    int day;
    int month;
    int year;
    
    int k = 0;
    
    bool isLeap() {
        if (year % 4 == 0) {
            if (year % 400 == 0) return false;
            else return true;
        }
        return false;
    }
    
    void dateIterate(int d, int m) {
        int dim[] = { -1, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        int dimL[] = { -1, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
        while (!(month == m and day == d)) {
            k++;
            day++;
            if ((isLeap() and day > dimL[month]) or (isLeap() == false and day > dim[month])) {
                day = 1;
                month++;
                if (month == 13) {
                    month = 1;
                    year++;
                }
            }
        }
    }
};

int dateDiff(int sd, int sm, int sy, int ed, int em) {
    date D;
    D = {sd, sm, sy};
    D.dateIterate(ed, em);
    return D.k;
}

int main() {
    int bd, bm, by, cd, cm, cy;
    std::cin >> bd >> bm >> by >> cd >> cm >> cy;
    std::cout << dateDiff(cd, cm, cy, bd, bm);
}
