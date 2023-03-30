//
//  main.cpp
//  Product1
//
//  Created by Jungmin Kim on 2022/09/27.
//


//#include <iostream>
//int main() {
//    double width, height, area, round; // 변수 선언
//    std::cout << "직사각형의 폭을 입력해주세요.\n";
//    std::cin >> width; // 폭 입력받기
//    std::cout << "직사각형의 높이를 입력해주세요.\n";
//    std::cin >> height; // 높이 입력받기
//    area = width * height; // 면적 공식
//    round = 2 * (height + width); // 둘레 공식
//    std::cout << "직사각형의 면적은 " << area << "입니다.\n"; // 출력
//    std::cout << "직사각형의 둘레는 " << round << "입니다.\n"; // 출력
//}

//#include <iostream>
//int main() {
//    int input;
//
//    std::cin >> input;
//
//    if (input >= 0) {
//
//        if(input < 2)
//            std::cout << "zero, one\n";
//    }
//    else
//        std::cout << "negative\n";
//
//}

//p.55
//#include <iostream>
//int main() {
//    int x = 5;
////    if(x = 10)
////       std::cout << "print" << std::endl;
////    if(x =! 10)
////    std::cout << "print" << std::endl;
//    if (x == 1 || 2 || 3) // x에 관계없이 트루
//        std::cout << x << std::endl;
//    if(x == 1 || x==2|| x==3) //False
//        std::cout << x << std::endl;
//}

//#include <iostream>
//int main() {
//    int i, sum;
//
//    i = 1;
//    sum = 0;
//    while(i <= 100) {
//        sum += i;
//        i++;
//    }
//
//    std::cout << sum << std::endl;
//}

//#include <iostream>
//int main() {
//    int input, sum = 0;
//    std::cout << "Enter numbers to sum. type 'q' to end the list.";
//    while(std::cin >> input)
//        sum += input;
//
//    std::cout << "Sum = " << sum <<'\n';
//
//}
//
//#include <limits>
//std::cin.clear();

//p.42
//#include <iostream>
//int main() {
//  double degreesF, degreesC;
//  // Prompt user for temperature to convert
//std::cout << "Enter the temperature in degrees F: ";
//  // Read in the user's input
//  std::cin >> degreesF;
//  // Perform the conversion
//  degreesC = (float) 5/ (float)9*(degreesF - 32);
//  // Report the result
//std::cout << degreesC << '\n'; }

//p.45
//#include <iostream>
//#include <iomanip>
//int main() {
//double d1 = 2000.5;
//double d2 = 2000.0;
//std::cout << std::setprecision(16) << (d1 - d2) << '\n'; // 0.5
//double d3 = 2000.58;
//double d4 = 2000.0;
//std::cout << std::setprecision(16) << (d3 - d4) << '\n';
//    // 0.5799999999999272 -> 0.58이 아님
//}

//#include <iostream>
//int main() {
//double one = 1.0, one_fifth = 1.0/5.0,
//zero = one - one_fifth - one_fifth - one_fifth - one_fifth
//- one_fifth;
//std::cout << "one = " << one << ", one_fifth = " << one_fifth
//<< ", zero = " << zero << '\n';
//} // one = 1, one_fifth = 0.2, zero = 5.55112e-17

//ㅔ.52
//#include <iostream>
//int main() {
//bool a = true;
//std::cout << a << '\n'; a = false;
//std::cout << a << '\n'; a = 0;
//std::cout << a << '\n'; a = -10; // warning
//std::cout << a << '\n';
//}

