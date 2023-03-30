//
//  main.cpp
//  Product3
//
//  Created by Jungmin Kim on 2022/10/10.
//
//
//#include <iostream>
//
//int main(int argc, const char * argv[]) {
//    int in_value ;
//
//    std::cin >> in_value;
//    if(in_value < 0 || in_value > 10) //한번만 추가입력 받음
//        std::cin >> in_value;
//}

//#include <iostream>
//
//int main(int argc, const char * argv[]) {
//    int in_value ;
//
//    std::cin >> in_value;
//    while(in_value < 0 || in_value > 10) //한번만 추가입력 받음
//        std::cin >> in_value;
//    std::cout << in_value << '\n'; // while 조건에 false가 되는 값
//}
//
//#include <iostream>
//int main() {
//    int input, sum = 0;
//    while (std::cin >> input) //컨트롤 디 해야 끝남
//        sum += input;
//    std::cout << sum <<std::endl;
//}

//#include <iostream>
//#include <iomanip>
//#include <locale>
//
//int main() {
//    int power = 1;
//    std::cout.imbue(std::locale(""));
//
//    while (power <= 100000000){
//        std::cout << std::setw(13) << power << '\n';
//        power *= 10;
//    }
//
//}

//#include <iostream>
//int main() {
//    int size;
//    std::cin >> size;
//    int row = 1;
//    while (row <= size) {
//        int column = 1;
//        while(column <= size) {
//            int product = row * column;
//            std::cout << product << " ";
//            column++;
//        }
//        row ++;
//        std::cout << '\n';
//    }
//}

//#include <iostream>
//int main() {
//    int n = 1;
//    const int MAX = 20;
//while(n <= MAX) {
//    int factor = 1;
//    std::cout << n << ":  ";
//    while(factor <= n) {
//        if(n % factor == 0) {
//            std::cout << factor << " ";
//        }
//        factor++;
//    }
//    std::cout << '\n';
//    n++;
//    }
//}

//#include <iostream>
//int main() {
//    int n = 1;
//    const int MAX = 20;
//    while(n <= MAX) {
//        int factor = 1;
//        std::cout << n << ":  ";
//        while(factor <= n) { //여기 있어야 함ㅍ -> n++이 되어야 다음 것도 하는데 그렇지 않으면 n이 factor로 안나눠지는 쑨간 실행할 게 없어지고 무한루프가 돌게 된다. -> 빠져나갈 실행문 존재 X
//            if(n % factor == 0)
//                std::cout << factor << " ";
//                factor++;
//            }
//        std::cout << '\n';
//        n++;
//    }
//}

//#include <iostream>
//int main() {
//    int max_value;
//    std::cout << "Display primes up to what value?";
//    std::cin >> max_value;
//
//    int value = 2;
//
//    while(value <= max_value) {
//        bool is_prime = true;
//        int trial_factor = 2;
//
//        while (trial_factor < value) {
//            if(value % trial_factor == 0) {
//                is_prime = false;
//                break;
//            }
//            trial_factor++;
//        }
//        if(is_prime) std::cout << value << " ";
//        value++;
//    }
//
//}

//#include <iostream>
//int main() {
//    int max_value;
//    std::cout << "Display primes up to what value?";
//    std::cin >> max_value;
//
//    int value = 2;
//
//    while(value <= max_value) {
//        int trial_factor = 2;
//
//        while (trial_factor < value) {
//            if(value % trial_factor == 0) {
//
//                break;
//            }
//            trial_factor++;
//        }
//        if(value==trial_factor) std::cout << value << " ";
//        value++;
//    }
//
//}

//#include <iostream>
//int main() {
//    int in;
//    while (in < 0 || in > 10)
//        std::cin >> in;
//    std::cout << "dd" << std::endl;
//}

//p.86
//#include <iostream>
//int main() {
//  int height;
//  std::cout << "Enter height of tree: ";
//  std::cin >> height;
//  int row = 0;
//  while (row < height) {
//      int count = 0;
//      while (count < height - row) {
//        std::cout << " ";
//          count++;
//      }
//      count = 0;
//      while (count < 2*row + 1) {
//        std::cout << "*";
//          count++;
//      }
//     std::cout << '\n';
//      row++;
//  }
//}

//#include <iostream>
//
//int main() {
//    int max_value;
//
//    std::cin >> max_value ;
//    for (int value = 2 ; value <= max_value ; ++value ) {
//        bool is_prime = true;
//        for( int i = 2; i < value ; ++i) {
//            if(value%i == 0) { //
//                is_prime = false;
//                break; // 안 넣어도 됨 -> 예문의 is_prime &&과는 다름
//            }
//        }
//
//        if(is_prime)
//            std::cout << value << " ";
//    }
//}

//#include <iostream>
//
//int main() {
//    int max_value;
//
//    std::cin >> max_value ;
//    for (int value = 2 ; value <= max_value ; ++value ) {
//        bool is_prime = true;
//        for( int trial_factor = 2; /*is_prime &&*/ trial_factor < value ; trial_factor++) {
//            is_prime = (value % trial_factor != 0)? is_prime:false;
//
//        }
//
//        if(is_prime)
//            std::cout << value << " ";
//    }
//    }

//
//#include <iostream> //is_prime 안쓰는 경우
//
//int main() {
//    int max_value;
//
//    std::cin >> max_value ;
//    for (int value = 2 ; value <= max_value ; ++value ) {
//        int i;
//
//        for(i = 2; i < value ; i++) {
//            if(value%i == 0) { //
//                break; // 안 넣어도 됨 -> 예문의 is_prime &&과는 다름
//            }
//        }
//
//        if(i == value)
//            std::cout << value << " ";
//    }
//}
//
//#include <iostream> // 콤마 연산자
//int main() {
//    int x,y,z, m;
//
//    z = (x = 10, y = 20); //콤마 연산자의 결과값ㅇ은 뒤에 것 -> 20이 z에 대입됨
//    m = x =10, y = 20;
//
//    std::cout << x << y << z << m;
//
//}

//#include <iostream> // 콤마 연산자
//int main() {
//    int i, j, x;
//    x = 10;
//    for(i = 0, j = 10; j--, i < x  ; i++ ) // for문의 조건문 자리에는 콤마연산자 최대한 X
//        std::cout << i << "," << j << std::endl;
//
//    for(i = 0, j = 10; j < 5, i < x  ; i++, j-- ) // i < x를 통해 반복여부 판단 (콤마는 뒤에 걸 결과로 가짐)
//        std::cout << i << "," << j << std::endl;
//
//}

//#include <iostream> //실질적 사례, 누적 합, 누적 곱 등
//int main() {
//    int i;
//    int sum = 0;
//    int min;
//    bool bfirst = true; // 좋은 로직설정방법
//
////    for ( i = 10; i < 101 ; ++i)
////        sum += i;
//    while (std::cin >> i) {
//        if(bfirst) min = i; //처음에만 작용하고 bfirst가 false가 됨
//        else if (i < min) min = i;
//
//        bfirst = false;
//    }
//
////    std::cout << sum << std::endl;
//    std::cout << min << std::endl;
//}

//#include <iostream> //실질적 사례, 누적 합, 누적 곱 등
//int main() {
//    int i;
//    int min = 256; //min이 256 출력되면 아무것도 입력안했다는 뜻..
//
//    while (std::cin >> i) { //0-255사이의 수를 입력받는다면?
//        if (i < min) min = i;
//
//    }
//
////    std::cout << sum << std::endl;
//    std::cout << min << std::endl;
//}
