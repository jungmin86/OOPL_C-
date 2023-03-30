//
//  main.cpp
//  Sequence 02
//
//  Created by Jungmin Kim on 2022/11/09.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

void P(int *p, int s) {
    for (int i = 0; i < s; i++) {
        std::cout << p[i] << ",";
    }
    std::cout << std::endl;
}

void S(int *p, int s) {
    for (int k = 0; k < s-1; ++k) {
        for (int i = s-1; i > k; --i) {
            if (p[i] < p[i-1]) {
                int t = p[i];
                p[i] = p[i-1];
                p[i-1] = t;
            }
        }
    }
    
}

int main(int argc, const char * argv[]) {
    int a[10];
    srand((unsigned)time(0));
    for (int i = 0; i < 10; i++) {
        a[i] = rand() % 100;
    }
    P(a,10);
    S(a,10);
    P(a,10);
}
