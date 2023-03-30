//
//  main.cpp
//  Product4
//
//  Created by Jungmin Kim on 2022/10/12.
//

#include <iostream>
#include <cmath>
#include <cctype>
//int main() {
//    int c = 9;
//    std::cout << isdigit('9') << std::endl;
//}
//#include <iostream>
//#include <ctime>
//#include <cstdlib>
//int main() {
//    srand((unsigned int)time(0));
//    for (int i = 0; i < 10; i ++) {
//            std::cout << rand()%10 << std::endl; // 0에서 9까지 난수
//    }

//}
//
//#include <iostream>
//#include <cstdlib>
//#include <ctime>
//
//int main() {
//    srand(static_cast<unsigned>(time(0))); //시드가 계속 바뀜 - > 더 완벽한 난수
//    for (int i = 0; i < 10; ++i)
//        std::cout << rand() << std::endl;
//}

//#include <iostream>
//#include <iomanip>
//#include <cmath>
//double square_root(double x) {
//    double diff;
//    double root = 1.0;
//    do  {
//        root = (root + x/root) / 2.0;
//        diff = root * root - x;
//
//    }
//    while (diff > 0.0001 || diff < - 0.0001);
//    return root;
//}
//
//int main() {
//    for (double d = 1.0; d <= 10.0; d += 0.5)
//        std::cout << std::setw(7) << square_root(d) << " : " << sqrt(d) << '\n';
//}

//114p Using Functions
int gcd(int n1, int n2) {
    int g;
    for (int i = 1; i <= n1; ++i)

        if (n1 % i == 0 && n2 % i == 0)
            g = i; //최종의 g값이 제일 큰 공약수
    return g;
}

int main() {
    int n1, n2;
    std::cin >> n1 >> n2;

    std::cout << gcd(n1,n2) << std::endl;
}
