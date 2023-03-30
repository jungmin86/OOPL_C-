//
//  main.cpp
//  Function
//
//  Created by Jungmin Kim on 2022/10/17.
//

//#include <iostream>
//#include <cmath>
//
//bool isPrime(int n) {
//    double r = n, root = sqrt(r);
//
//    for (int trial_factor = 2; trial_factor <= root; trial_factor++) {
//        if(n % trial_factor == 0) {
//            return false;
//        }
//
//    }
//    return true;
//}
//
//int main() {
//    std::cout << isPrime(13) << std::endl;
//}


//#include <iostream>
//// Definition of the prompt function
//int prompt(int n) {
//int result;
//std::cout << "Please enter an integer value: #" << n << ": ";
//std::cin >> result;
//return result;
//}
//int main() {
//int value1, value2, sum;
//std::cout << "This program adds together two integers.\n";
//value1 = prompt(1);
//value2 = prompt(2);
//sum = value1 + value2;
//std::cout << value1 << " + " << value2 << " = " << sum << '\n';
//}


//#include <iostream>
//#include <iomanip>
//
//int count() {
//    static int cnt = 0; //자동으로 0으로 초기화 -> static은 local처럼 반환 후 초기화되지 않고 값을 유지
//    return ++cnt;
//}
//int main() {
//    for (int i = 0; i < 10; i++)
//        std::cout << count() << ' ';
//
//    std::cout << '\n';
//}


////main2와 연결
// #include <iostream>
////extern int x;
//void Print(); //d외부나 뒤에 있는 함수 쓸 때 선언만 해주기 ~
//int main() {
//    Print();
//}

//stackoverflow

//#include <iostream>
//
//void f() {
//    int x[1000] = {0};
//    std::cout << x;
//    f(); // 스코프가 한 번 끝나야 메모리 공간이 비워지는데 얘떄메 계속 쌓임 (스택오버플로우)
//}
//
//int main() {
//    f();
//   //for(;;) {
//        //int x[1000] = { 0 };
//        //std::cout << 1;
//    //}
//    //    std::cout << 1;
//}

//#include <iostream>
//void countdown(int n=10) {
//while (n >= 0) // Count down from n to zero
// std::cout << n-- << '\n';
//}
//int main() {
//countdown(5);
//std::cout << "----------" << '\n'; countdown();
//}



//
//#include <iostream>
//void f(int n) {
////    if (n/10 > 0) f(n/10); // 1,2,3
//    std::cout << n % 10 << std::endl;
//    if (n/10 > 0) f(n/10); //3,2,1
//}
//int main() {
//    f(123);
//}
//
//#include <iostream>
//#include <cmath>
//
//using std::cout; using std::endl;
//
//const double pi = std::acos(-1);
//
//int main() {
//
//    std::cout << std::sin(pi);
//}

//#include <iostream>
//#include <cctype>
//int main() {
//    for (char lower = 'a'; lower <= 'z';lower++){
//        char upper = toupper(lower);
//    }
//    char ch = 'a';
//    int ss = islower(ch);
//    std::cout<< ss << std::endl;
//}

//#include <iostream>
//#include <ctime>
//int main() {
//    char letter;
//    std::cout << "Enter a character" << std::endl;
//    clock_t seconds = clock();
//    std::cin >> letter;
//    clock_t other = clock();
//    std::cout << static_cast<double>(other - seconds)/CLOCKS_PER_SEC << " seconds\n";
//
//}

//#include <iostream>
//#include <iomanip>
//#include <cmath>
//double square_root(double x) {
//    double diff; double root = 1.0; do {
//         root = (root + x/root) / 2.0;
//    //std::cout << "root is " << root << '\n';
//    diff = root * root - x;
//    } while (diff > 0.0001 || diff < -0.0001);
//    return root;
//    }
//int main() {
//    for (double d = 1.0; d <= 10.0; d += 0.5)
//    std::cout << std::setw(7) << square_root(d) << " : " << sqrt(d)
//    << '\n'; }

//P114 최대공약수

//#include <iostream>
//int gcd(int num1, int num2) // int gcd(int num1, num2) -> 함수 파라미터 선언할 떈 타입 각각으로 지정
//{
//    int min = (num1 < num2) ? num1 : num2; // 아규먼트 중 더 작은 수
//    int largestFactor = 1; //최대공약수라는 뜻
//    for (int i = 2; i <= min; i++) // 두개 중에 작은 수까지 반복
//    if (num1 % i == 0 && num2 % i == 0)
//    largestFactor = i; // Found larger factor -> 최대공약수
//    return largestFactor;
//
//}
//int main() {
//    int x;
//    std::cout << gcd(36, 24) << std::endl; // 12
//    x = gcd(x-2, 24);
//    std::cout << x << std::endl;
//    x = gcd(x -2 , gcd(10, 8));
//    std::cout << x << std::endl;
//}

// x = gcd(x - 2, 24);
// x = gcd(x - 2, gcd(10, 8));
// Greatest common divisor // Euclidean algorithm

//#include <iostream>
//int main() {
//    int twice(int); //선언만 해줌
//    std::cout << twice(5) << '\n';
//}
//int twice(int n) {
//    return 2 * n;
//}

//#include <iostream>
////#include <cmath>
//int main() {
//    srand(time(0));
//    std::cout<< rand() ;
//    std::cout<< rand() ;
//    std::cout<< rand() ;
//    std::cout<< rand() ;
//    std::cout<< rand() ;
//    std::cout<< rand() ;
//
//}

//#include <iostream>
////#include "main3.hpp" //헤더파일로 사용
//bool is_prime(int); // 선언해서 사용
//int main() {
//    std::cout << is_prime(10);
//}
