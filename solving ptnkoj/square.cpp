#include <iostream>
#include <vector>

class answer {
public:
    void solute() {
        int numberOfPoints;
    std::cin >> numberOfPoints;
    std::vector<long> coords;
    for (int i = 0; i < numberOfPoints * 2; i++) {
        long k;
        std::cin >> k;
        coords.push_back(k);
    }
    
    long minX = coords[0], minY = coords[1];
    long maxX = coords[0], maxY = coords[1];
    
    for (int i = 0; i < numberOfPoints * 2; i++) {
        if (i & 1) {
            if (coords[i] < minY) minY = coords[i];
            if (coords[i] > maxY) maxY = coords[i];
        }
        else {
            if (coords[i] < minX) minX = coords[i];
            if (coords[i] > maxX) maxX = coords[i];
        }
    }
    
    long eH = maxY - minY;
    long eW = maxX - minX;
        
    if (eH > eW) std::cout << eH * eH;
    else std::cout << eW * eW;
    }
};

int main() {
    answer ab;
    ab.solute();
}
