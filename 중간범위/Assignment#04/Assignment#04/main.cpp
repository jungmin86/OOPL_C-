//
//  main.cpp
//  Assignment#04
//
//  Created by Jungmin Kim on 2022/10/21.
//

//#include <iostream>
//#include <cmath>
//#include <cstdlib>
//#include <cctype>

//int main(int argc, const char * argv[]) {
////    std::cout << sqrt(4.5, 3.1) << '\n';
////    std::cout << srand(55) << '\n';
////    srand(55);
////    std::cout << tolower('A') << '\n';
////    std::cout << sqrt() << '\n';
////    std::cout << static_cast<char>(toupper('E')) << '\n';
////    std::cout << static_cast<char>(toupper('e')) << '\n';
////    std::cout << static_cast<char>(toupper("e")) << '\n';
//
//
//}

//#2

//int proc(int x) {
//   return x + 2;
//}
//int proc(int n) {
//   return 2*n + 1;
//}
//int main() {
//   int x = proc(5);
//}

//#3
//
//int proc(int x) {
//   return 2*x*x;
//}
//int main() {
//   std::cout << proc(5, 4) << '\n';
//}

//#5

//#include <iostream>
//int proc(int x, int y) {
//   return x+y;
//}
//int main() {
//   std::cout << proc(5, 4) << '\n';
//}

//#4
//#include <iostream>
//void proc(int x) {
//   x = 2*x*x;
//}
//int main() {
//   std::cout << proc(2) << '\n';
////    proc(2);
//}

//#6
//#include <iostream>
//void proc(int *x) {
//   *x = 2*(*x)*(*x);
//}
//int main() {
//   int num = 10;
//   proc(&num);
//   std::cout << num << '\n';
//}

//#7
//#include <iostream>
//int proc(int x) {
//   return 2*x*x;
//}
//int main() {
//   int x = 10;
////    proc(x);
//   std::cout << proc(x) << '\n';
//}


//void add(int *num){
//    (*num)++;
//}
//
//int main(void){
//    int val = 10;
//    int *p = &val; // p는 val의 주소
//
//    //both calls are same
////    add(&val);
//    add(p);
//    std::cout << val << std::endl;
//}

//#8
//#include <iostream>
//#include <cmath>
//
//double average(double x, double y) {
//    return (x+y)/2;
//}
//
//double geometricMean(double x, double y) {
//    return pow(x*y, 1/2.0);
//}
//
//double harmonicMean(double x, double y) {
//    return (2*x*y)/(x+y);
//}
//
//int main() {
//    double d1,d2;
//    std::cout << "실수 2개를 입력해주세요." << std::endl;
//    std::cin >> d1 >> d2;
//
//    std::cout << "산술평균: " << average(d1, d2) << std::endl;
//    std::cout << "기하평균: " << geometricMean(d1, d2) << std::endl;
//    std::cout << "조화평균: " << harmonicMean(d1,d2) << std::endl;
//}

//#9
//#include <iostream>
//int Fibonacci(int n) {
//    int before_one = 1;
//    int before_two = 0;
//    int result;
//    std::cout << "n: index, ";
//    for (int i = 0; i <= n; i++) {
//        if (i == n){
//            std::cout << i << std::endl;
//            continue;
//        }
//        std::cout << i << ", ";
//    }
//    std::cout << "return: Fibonacci, ";
//    for (int i = 0; i <= n; i++) {
//        if (i < 2)
//            std::cout << i << ", ";
//        else {
//            result = before_one + before_two;
//            if (i == n){
//                std::cout << result << std::endl;
//                continue;
//            }
//            std::cout << result << ", ";
//            before_two = before_one;
//            before_one = result;
//        }
//
//        }
//    return result;
//}
//
//int main() {
//    Fibonacci(10);
//}

//#10
//#include <iostream>
//
//int Factorial(int a) {
//    if ( a <= 1)
//        return 1;
//    else
//        return a*Factorial(a-1);
//}
//int Permutation(int n, int r) {
////    return Factorial(n)/Factorial(n-r);
//
//}
//int main() {
//    std::cout << Factorial(5) << std::endl;
//    std::cout << Permutation(5, 4);
//}

//recursion 안 쓴 버젖ㄴ
//#include <iostream>
//
//int Permutation(int n, int r) {
//    int n_factorial = 1;
//    int divisor_factorial = 1; //n-r의 팩토리얼
//    for (int i = n; i > 0; i--){
//        n_factorial = i * n_factorial;
//    }
//    for (int j = (n-r); j > 0; j--) {
//        divisor_factorial = j * divisor_factorial;
//    }
//    return n_factorial / divisor_factorial;
//}
//int main() {
//    std::cout << Permutation(10, 3) << std::endl;
//}

//#11

#include <iostream>
#include <cmath>
int main() {
    double a, b, c;
    std::cout << "실수 a, b, c를 차례대로 입력해주세요." << std::endl;
    std::cin >> a >> b >> c;
    if ((a == 0) && (b == 0))
        std::cout << "입력오류(not a valid equation)" << std::endl;
    else if ((a == 0) && (b != 0))
        std::cout << "x = " << -c/b << std::endl;
    else if (pow(b,2)-4*a*c < 0)
        std::cout << "실근 없음(not a real solution)" << std::endl;
    else if (pow(b,2)-4*a*c >= 0)
        if (pow(b,2)-4*a*c == 0 )
            std::cout << "x = " << (-b + sqrt(pow(b,2)-4*a*c)) / (2*a)  << std::endl;
        else {
            std::cout << "x = " << (-b + sqrt(pow(b,2)-4*a*c)) / (2*a) << ", 혹은 " << (-b - sqrt(pow(b,2)-4*a*c))/(2*a) << std::endl;
        }
}


