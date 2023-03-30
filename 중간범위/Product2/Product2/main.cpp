//
//  main.cpp
//  Product2
//
//  Created by Jungmin Kim on 2022/10/01.
//

//#include <iostream>
//
//int main() {
//    int a,b,flag;
//    std::cout << "정수 a,b를 입력해주세요." << std::endl;
//    std::cin >> a >> b; // a,b 입력받기
//    std::cout << "flag를 입력해주세요" << std::endl;
//    std::cin >> flag; // flag 입력받기
//
//    if (flag == 0b00000000) { // flag가 0인 경우
//        std::cout << "a,b의 합: " << (a+b) <<'\n'; // a와 b의 합
//    }
//    else if (flag == 0b00000001) { // flag가 1인 경우
//        std::cout << "a,b의 평균: " << (float)(a+b)/2 <<'\n'; //(float)를 통해 평균을 실수로 출력
//    }
//    else if (flag == 0b00000010){ // flag가 2인 경우
//        if (a > b)
//            std::cout << "큰 값: " <<a << '\n'; // a가 크면 a를 출력
//        else
//            std::cout << "큰 값: " << b << '\n'; // b가 크면 b를 출력(a와 b가 같으면 무엇을 출력해도 같은 결과)
//    }
//    else if (flag == 0b00000011){ //flag가 3인 경우
//        if (a > b)
//            std::cout << "작은 값: " << b << '\n'; // a가 크면 b를 출력
//        else
//            std::cout << "작은 값: " << a << '\n'; // b가 크면 a를 출력(a와 b가 같으면 무엇을 출력해도 같은 결과)
//    }
//}



//#include <iostream>
//
//int main() {
//    int a,b,flag;
//    std::cout << "정수 a,b를 입력해주세요." << std::endl;
//    std::cin >> a >> b; // a,b 입력받기
//    std::cout << "flag를 입력해주세요." << std::endl;
//    std::cin >> flag; // flag 입력받기
//
//    if (flag == 0b00000000) { // flag가 0인 경우
//        std::cout << "a,b의 합: " << (a+b) <<'\n'; // a와 b의 합
//    }
//    else if (flag == 0b00000001) { // flag가 1인 경우
//        std::cout << "a,b의 평균: " << (float)(a+b)/2 <<'\n'; //(float)를 통해 평균을 실수로 출력
//    }
//    else if (flag == 0b00000010){ // flag가 2인 경우
//        (a > b)?
//            std::cout << "큰 값: " << a << '\n': // a가 크면 a를 출력
//            std::cout << "큰 값: " << b << '\n'; // b가 크면 b를 출력(a와 b가 같으면 무엇을 출력해도 같은 결과)
//    }
//    else if (flag == 0b00000011){
//        (a > b)?
//            std::cout << "작은 값: " << b << '\n': // a가 크면 b를 출력
//            std::cout << "작은 값: " << a << '\n'; // b가 크면 a를 출력(a와 b가 같으면 무엇을 출력해도 같은 결과)
//    }
//}



//#include <iostream>
//int main() {
//    int a,b,flag;
//    std::cout << "정수 a,b를 입력해주세요." << std::endl;
//    std::cin >> a >> b; // a,b 입력받기
//    std::cout << "flag를 입력해주세요." << std::endl;
//    std::cin >> flag; // flag 입력받기
//
//    switch (flag) {
//        case 0b00000000:
//            std::cout << "a,b의 합: " << (a+b) <<'\n'; // a와 b의 합
//            break;
//        case 0b00000001:
//            std::cout << "a,b의 평균: " << (float)(a+b)/2 <<'\n'; //(float)를 통해 평균을 실수로 출력
//            break;
//        case 0b00000010:
//            if (a > b)
//                std::cout << "큰 값: " << a << '\n'; // a가 크면 a를 출력
//            else
//                std::cout << "큰 값: " << b << '\n'; // b가 크면 b를 출력(a와 b가 같으면 무엇을 출력해도 같은 결과)
//            break;
//        case 0b00000011:
//            if (a > b)
//                std::cout << "작은 값: " << b << '\n'; // a가 크면 a를 출력
//            else
//                std::cout << "작은 값: " << a << '\n'; // b가 크면 b를 출력(a와 b가 같으면 무엇을 출력해도 같은 결과)
//            break;
//    }
//}
 
//#include <iostream>
//
//int main() {
//    int mid_score, quiz_score, final_score, avg_score; // 변수 선언 -> mid_score: 중간고사 점수, quiz_score: 퀴즈 점수, final_score: 기말고사 점수, avg_score: 평균 점수
//    std::cout << "중간고사 점수, 퀴즈 점수, 기말고사 점수를 차례대로 입력하시오.(100점 만점 기준)" << '\n';
//    std::cin >> mid_score >> quiz_score >> final_score; // 점수 차례로 입력받기
//
//    avg_score = (mid_score + quiz_score + final_score) / 3; // 평균 점수 정의
//
//    if(avg_score >= 90) // 평균 점수가 90점 이상인 경우
//        std::cout << 'A' << std::endl; // A 출력
//    else if(avg_score >= 80) // 평균 점수가 80점 이상 90점 미만인 경우
//        std::cout << 'B' << std::endl; // B 출력
//    else if(avg_score >= 70) // 평균 점수가 70점 이상 80점 미만인 경우
//        std::cout << 'C' << std::endl; // C 출력
//    else if(avg_score >= 60) // 평균 점수가 60점 이상 70점 미만인 경우
//        std::cout << 'D' << std::endl; // D 출력
//    else if(avg_score < 60) // 평균 점수가 60점 미만인 경우
//        std::cout << 'F' << std::endl; // F 출력
//
//}

//#include <iostream>
//
//int main() {
//    int a,b,flag;
//    std::cout << "정수 a,b를 입력해주세요." << std::endl;
//    std::cin >> a >> b; // a,b 입력받기
//    std::cout << "flag를 입력해주세요." << std::endl;
//    std::cin >> flag; // flag 입력받기
//
//    (flag == 0b00000000)? std::cout << "a,b의 합: " << (a+b) <<'\n': // flag가 0인 경우
//    (flag == 0b00000001)? std::cout << "a,b의 평균: " << (float)(a+b)/2 <<'\n': // flag가 0이 아니면서 1인 경우
//    (flag == 0b00000010)? ((a > b)? // flag가 0이 아니고 1이 아니면서 2인 경우 큰 값을 판단하기 위한 조건연산자
//                  std::cout << "큰 값: " << a << '\n': // a가 크면 a를 출력
//                  std::cout << "큰 값: " << b << '\n'): // b가 크면 b를 출력
//    (flag == 0b00000011)? ((a > b)? // flag가 0이 아니고 1도 아니고 2도 아니고 3인 경우 작은 값을 판단하기 위한 조건연산자
//                  std::cout << "작은 값: " << b << '\n': // a가 크면 b를 출력
//                  std::cout << "작은 값: " << a << '\n'): //b가 크면 a를 출력
//    std::cout << "0~3의 범위에 있는 정수를 flag로 입력해주세요."; // flag가 잘못 입력됐을 경우 에러메시지
//}

// 검수

//#include <iostream>
//int main() {
//    int a,b,flag;
//    std::cout << "정수 a,b를 입력해주세요." << std::endl;
//    std::cin >> a >> b; // a,b 입력받기
//    std::cout << "flag를 입력해주세요." << std::endl;
//    std::cin >> flag; // flag 입력받기
//
//    switch (flag) {
//        case 0b00000000: // flag가 0인 경우
//            std::cout << "a,b의 합: " << (a+b) <<'\n'; // a와 b의 합
//            break;
//        case 0b00000001: // flag가 1인 경우
//            std::cout << "a,b의 평균: " << (float)(a+b)/2 <<'\n'; //(float)를 통해 평균을 실수로 출력
//            break;
//        case 0b00000010: // flag가 2인 경우
//            if (a > b)
//                std::cout << "큰 값: " << a << '\n'; // a가 크면 a를 출력
//            else
//                std::cout << "큰 값: " << b << '\n'; // b가 크면 b를 출력(a와 b가 같으면 무엇을 출력해도 같은 결과)
//            break;
//        case 0b00000011: // flag가 3인 경우
//            if (a > b)
//                std::cout << "작은 값: " << b << '\n'; // a가 크면 a를 출력
//            else
//                std::cout << "작은 값: " << a << '\n'; // b가 크면 b를 출력(a와 b가 같으면 무엇을 출력해도 같은 결과)
//            break;
//    }
//}

//p.76
//#include <iostream>
//int main() {
//    int input = 0, sum = 0; // Ensure the loop is entered  // Initialize sum
//    // Request input from the user
//    std::cout << "Enter numbers to sum, negative number ends list:";
//
//    while (input >= 0) {
//        std::cin >> input;
//        if (input >= 0)
//            sum += input;
//    }
//    std::cout << "Sum = " << sum << '\n'; // Display the sum
//}

//#include <iostream>
//#include <limits>
//int main() {
//int input, sum = 0;
//std::cout << "Enter numbers to sum, type 'q' to end the list:";
//    while (std::cin >> input) // ^Z(Windows), ^D(Unix)
//        sum += input;
//  std::cout << "Sum = " << sum << '\n';
//    std::cin.clear(); // Clear the error state of the stream
//    // Empty the keyboard buffer
//    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//}

//ㅔ.79
//#include <iostream>
//#include <iomanip>
//#include <locale>
//// Print the powers of 10 from 1 to 1,000,000,000
//int main() {
//    int power = 1;
//    std::cout.imbue(std::locale("")); //디폴트 로케일은 사용자 로케일이 아니라 classic/neutral 로케일입니다. 클래식 로케일은 ANSI C 관례를 따르며 C로 표현합니다. 이러한 클래식 로케일 C는 미국식 영어에 대한 로케일과 거의 같지만 약간 차이가 있습니다.
//
////    예를 들면 숫자에 구두점을 붙이지 않습니다.
//    while (power <= 1000000000) {
//// Right justify each number in a field 10 wide
//        std::cout << std::setw(13) << power << '\n';
//        power *= 10; }
//}
// std::cout.imbue(std::locale("")); // global locale
// std::cout.imbue(std::locale("german")); // imbue locale




//#include <iostream>
//int main() {
//    int x = 5;
//    if ((x >= 0) and (x < 10))
//        std::cout << x <<'\n';
//
//}

// ㅔ.80

//#include <iostream>
//int main() {
//  int size; // The number of rows and columns in the table
//  std::cout << "Please enter the table size: ";
//  std::cin >> size;
//  // Print a size x size multiplication table
//int row = 1;
//while (row <= size) { // Table has size rows.
//     int column = 1;         // Reset column for each row.
//     while (column <= size){ // Table has size columns.
//         int product = row*column; // Compute product
//         std::cout << product << " "; // Display product
//         column++; // Next element
//}
//    std::cout << '\n'; // Move cursor to next row
//    row++; // Next row
//} }

//#include <iostream>
//int main() {
//   int count = 1; // Initialize counter
//top:
//   if (count > 5)
//      goto end;
//std::cout << count << '\n'; count++;
//goto top;
//end:
//; // Target is an empty statement -> 문장이 하나라도 있어야 함
//}

//#include <iostream>
//int main() {
//    char key;
//    std::cin >> key;
//
//    switch(key) {
//        case 'p':
//        case 'P':
//            std::cout << "You choose \"P\"\n";
//            break;
//        default:
//            std::cout << "박고겡" << std::endl;
//    }
//}
//#include <iostream>
//#include <iomanip>
//int main() {
//    int power = 1;
//
//    std::cout.imbue(std::locale(""));
//
//
//    while (power <= 1000000000) {
//        std::cout << std::setw(13) << power << '\n';
//        power *= 10;
//    }
//}

//#include <iostream>
//int main () {
//    int size;
//    std::cout << "Please enter the table size:  ";
//    std::cin >> size;
//
//    int row = 0;
//    while (row < size) {
//        int column = 0;
//        while (column < size) {
//            int product = row*column;
//            std::cout << row << ',' << column << " ";
//            column++;
//        }
//        std::cout << '\n';
//        row++;
//    }
//
//}

// 약수 구하기
//#include <iostream>
//int main() {
//    int n = 1;
//    const int MAX = 20;
//    while(n <= MAX) {
//        int factor = 1;
//        std::cout << n << ":  ";
//        while(factor <= n) {
//            if(n % factor == 0)
//                std::cout << factor << " ";
//                factor++;
//            }
//        std::cout << '\n';
//        n++;
//    }
//}

#include <iostream>
int main() {
    int max_value;
    std::cout << "Display primes up to what value?";
    std::cin >> max_value;

    int value = 2;

    while(value <= max_value) {
//        bool is_prime = true;
        int trial_factor = 2;

        while (trial_factor < value) {
            if(value % trial_factor == 0) {

                break;
            }
            trial_factor++;
        }
        if(value==trial_factor) std::cout << value << " ";
        value++;
    }

}
