//
//  main.cpp
//  assignment3
//
//  Created by Jungmin Kim on 2022/10/14.
//

//과제3 1번
//#include <iostream>
//int main() {
//    for (int i = 1; i <= 8; i++) { // for 반복문 이용
//        std::cout << 2 * i << '\n'; // 2의 배수이므로 2 * i를 출력
//    }
//}
//
//과제3 2번
//#include <iostream>
//int main() {
//    int a = 0;
//    while (a < 20) {
//        int b = 0;
//        while (b < 10) {
//            if ((a + b) % 2 == 0)
//                std::cout << "*";
//            b++;
//        }
//        std::cout << '\n';
//        a++;
//    }
//}

//과제3 3번
//#include <iostream>
//int main() {
//    int x = 100, y;
//    while (x > 0) {
//        std::cin >> y;
//        if (y == 25) {
//            x--;
//            continue;
//        }
//        std::cin >> x;
//        std::cout << "x = " << x << '\n';
//    }
//}
//
//#include <iostream>
//int main() {
//    int x = 100, y;
//    while (x > 0) {
//        std::cin >> y;
//        switch(y) {
//            case(25):
//
//                x--; //이전에 x에 1이 할당되었다면 y가 25일 때 프로그램이 종료됨
//                break;// y가 25일 때 while (x > 0) 으로 돌아감
//            default:// y가 25가 아닐 때
//                std::cin >> x;
//                std::cout << "x = " << x << '\n';
//        }
//    }
//}

//과제3 4번
//#include <iostream>
//#include <algorithm>
//int main() {
//    double s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20, sum, mean, max_s, min_s; //변수 선언
//    std::cout << "실수 20개를 입력해주세요." << '\n';
//    std::cin >> s1 >> s2 >> s3 >> s4 >> s5 >> s6 >> s7 >> s8 >> s9 >> s10 >> s11 >> s12 >> s13 >> s14 >> s15 >> s16 >> s17 >> s18 >> s19 >> s20; //실수 20개 입력 받기
//    sum = s1 + s2 + s3 + s4 + s5 + s6 + s7 + s8 + s9 + s10 + s11 + s12 + s13 + s14 + s15 + s16 + s17 + s18 + s19 + s20;//실수 20개의 합
//    mean = sum / 20; //평균: 실수의 합 / 실수의 개수
//    std::cout << "합: " << sum << '\n';
//    std::cout << "평균: " << mean << '\n';
//    std::cout << "최댓값: " << std::max({s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20}) << '\n'; //algorithm 라이브러리에 있는 최대값 함수
//    std::cout << "최솟값: " << std::min({s1,s2,s3,s4,s5,s6,s7,s8,s9,s10,s11,s12,s13,s14,s15,s16,s17,s18,s19,s20}) << '\n'; //algorithm 라이브러리에 있는 최소값 함수
//
//}
//과제3 5번
//#include <iostream>
//int main() {
//    int a = 0;
//    while (a < 100);
//        std::cout << a++;
//        std::cout << '\n';
//
//}

//과제3 6번
//#include <iostream>
//int main() {
//    for (int i = 1; i <= 7; i++) { //i는 층 수
//        for (int k = 1; k <= i; k++) //i에 해당하는 만큼 별을 만들어야 함
//            std::cout << "*"; //반복문을 통해 옆으로 *을 i만큼 출력
//        std::cout << '\n';
//    }
//    for (int i = 6; i >= 1; i--) { //i는 층 수(역으로 내려감)
//        for (int k = 1; k <= i; k++) //i에 해당하는 만큼 별을 만들어야 함
//            std::cout << "*"; //반복문을 통해 옆으로 *을 i만큼 출력
//        std::cout << '\n';
//    }
//}

//#include <iostream>
//int main() {
//    int i = 1; //i는 몇 층인지 알 수 있는 변수
//
//    while(i < 14) {
//        for (int j = 1; j <= i; j++) {
//            for(int k=1;k<=j;k++)
//                std::cout << "*";
//            std::cout << '\n';
//            i++; //한 층 내려가기 전에 i를 1씩 증가시켜줌
//            if ( i > 7 ) break; }
//        for (int j = 6; j >= (14-i) ; j--) {
//            for(int k=1;k<=j;k++)
//                std::cout << "*";
//            std::cout << '\n';
//            i++;
//            if ( i > 13 ) break; //i가 13을 초과하면 for문 빠져나감
//            // 두 번의 for문을 거치고 나면 i가 14가 되기 때문에 while문이 종료된다.
//        }
//    }
//}
#include <iostream>

int main() {
    double i, num, factorial, add_num, result; // 변수 선언

    result = 1; //e의 첫번째 수
    num = 1; //팩토리얼을 구하기 위한 변수 초기화
    while (true) {
        factorial = 1;
        for ( i = 1; i <= num; i++ ) {
            factorial *= i;
        }

        add_num = 1 / factorial; //팩토리얼이 반복할 때마다 초기화되기 때문에 add_num은 별도의 초기화가 필요 없음
        result += add_num; //e에 계속적으로 더해주는 반복
        num++; //다음 팩토리얼을 구하기 위한 증가

        if (add_num < 0.00001) //더해주는 항의 값이 0.00001보다 작은 경우
            break; //result에 미리 더해주고 후에 break를 하면 더해주는 항의 값이 처음으로 0.00001보다 작아지는 경우까지 덧셈이 된다.
    }
    std::cout << result << '\n';
}

//#include <iostream>
//int main() {
//    for (int i = 3; i<31; i++) { //6부터 2의 배수 출력하기 위한 조건
//        if (i == 30) {
//            std::cout << 2 * i << std::endl; //마지막 60 뒤에는 콤마가 찍히지 않기 때문에 따로 조건문 사용
//            continue; // i가 30일 때에는 밑의 코드 실행 X
//        }
//        std::cout << (2 * i) << ", "; //2의 배수 출력
//    }
//
//}

//#include <iostream>
//int main() {
//    for (int i = 0; i< 34; i++) { //1부터 67까지 홀수를 뽑기 위한 반복 조건
//        if (i < 3) continue; // i가 0, 1, 2일 땐 출력 생략
//        else if(i == 33) {
//            std::cout << 2 * i + 1 << std::endl; //마지막 67 뒤에는 콤마가 찍히지 않기 때문에 따로 조건문 사용
//            continue; // i가 33일 때에는 밑의 코드 실행 X
//        }
//        std::cout << 2 * i + 1 << ", "; //조건에 맞는 홀수 출력
//    }
//}
//
//
//#include <iostream>
//int main() {
//    int sum = 0;
//    for (int i = 1; i <= 15; i++) // 1부터 15까지 반복 (1씩 증가하며)
//        sum += i; //sum에 반복되는 i를 반복할 때마다 더해줌
//    std::cout << sum << std::endl; //for문이 끝난 후에 최종 result
//}

//#include <iostream>
//int main() {
//    for (int i = 0; i < 50; i++) { //50개 출력을 위한 50번 반복
//        if(i == 49)
//        {
//            std::cout << 3 * i + 1 << std::endl; //수열의 마지막 항의 경우 콤마가 아닌
//            continue;
//
//        }
//            std::cout << 3 * i + 1 << ", "; //3으로 나누었을 때 나머지가 1인 정수를 출력
//    }
//}
//
//#include <iostream>
//int main() {
//    for (int i = 0; i< 34; i++) { //1부터 67까지 홀수를 뽑기 위한 반복 조건
//        if (i < 3) continue; // i가 0, 1, 2일 땐 출력 생략
//        else if(i == 33) {
//            std::cout << 2 * i + 1 << std::endl; //마지막 67 뒤에는 콤마가 찍히지 않기 때문에 따로 조건문 사용
//            continue; // i가 33일 때에는 밑의 코드 실행 X
//        }
//        else
//            std::cout << 2 * i + 1 << ", "; //조건에 맞는 홀수 출력
//    }
//}
