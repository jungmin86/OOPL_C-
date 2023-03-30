//
//  main.cpp
//  Arrays
//
//  Created by Jungmin Kim on 2022/11/07.
//

//#include <iostream>
//
//int main(int argc, const char * argv[]) {
////    int x[3];
////    int x[];
////    x[0] = 0;
////    x[9] = 9;
////    for (int i = 0; i < 3 ; i ++) {
////        std::cin >> x[i];
//
////    }
//    for (int i = 0; i < 3; ++i) {
//        std::cout << x[i] << ' ';
//    }
////    int x[3] = {1,2,3};
//}

//#include <iostream>
//int main() {
//    int x[] = {1,2,3};
//
//    int y = 10;
//    std::cout << sizeof(char) << std::endl; // 1바이트
//    std::cout << sizeof(int) << std::endl;// 메모리상 4바이트
//    std::cout << sizeof(y) << std::endl; // int -> 4 바이트
//    std::cout << sizeof(x) / sizeof(int) << std::endl; // 배열 -> 4바이트 곱하기 3개 -> 12바이트
//}
//#include <iostream>
//void print(int a[], int n) {
//    for (int i = 0; i < n; i++)
//      std::cout << a[i] << " ";
//   std::cout << '\n';
//}
//int sum(int a[], int size) {
//    int s = 0;
//    for( int i = 0; i < size; ++i)
//        s += a[i];
//    return s;
//}
//int main() {
//    int list[] = { 2, 4, 6, 8 };
//    print(list, sizeof(list)/sizeof(int)); // sizeof(list)/sizeof(int)
//    std::cout << sum(list, 4) << '\n';
//    for (int i = 0; i < 4; i++)
//        list[i] = 0;
//   print(list, sizeof(list)/sizeof(int));
//}


//p.156
//#include <iostream>
////void Sq(int x[3], int size) {
////void Sq(int *x, int size) { // 이렇게 써도 똑같음 -> size가 의미가 없음
//void Sq(int x[], int size) { // 이렇게 써도 똑같음 -> 배열의 []안에 크기가 의미가 없음 -> 어차피 첫 요소의 주소
//    std::cout << &x << std::endl; // 1번째 출력과 다름 -> x가 다른 실체임
//    //
//    std::cout << x << std::endl; //첫 번째 주소 -> x(포인터)의 주소 (X), x(포인터)에 저장돼있는 주소
//    for (int i =0; i < size; ++i)
//        x[i] *= x[i];
//}
//int main() {
//    int x[] = {4,2,3};
//    std::cout << &x << std::endl; //포인터 변수에 저장돼있는 값하고 포인터의 주소(x의 주소)하고 같을 수 있나?
//    // -> 배열인 경우에!!!! x는 포인터가 아니라 배열임 -> 배열의 이름은 첫 번째 요소의 주소임
//    // 인트형 어레이에 대한 시작 주소 -> 첫 번째 엘리먼트 주소와 같을 수. 있음
//    std::cout << x << std::endl; //첫 번째 주소 -> x(포인터)의 주소 (X), x(포인터)에 저장돼있는 주소
//    // 첫번째 엘리먼트의 주소(인트형 타입)
//    Sq(x,3);
//    for (int i = 0 ; i < sizeof(x)/ sizeof(int); ++i) { //원래 같았으면 1 2 3이 출력돼야 함. -> 근데 1 4 9
//        std::cout << &x[i] << ' '; // 배열은 첫번째 주소를 가지고 있음 (포인터 개념)
//    }
//}

/*
 교수님 질문 있습니다!
 int x[]={1,2,3};
 int *p= x; (1의 주소) 는 가능한데 int *p =&x;(어레이 x의 주소)는 에러뜨는 이유가 궁금합니다.
 
 -> p는 int형 포인터, &x는 int형 어레이에 대한 주소
 */
//
//#include <iostream>
//void Print(int *p, int s) { // (int p[], int s)
//    for (int i = 0; i < s; i++)
//        std::cout << p[i] << ",";
//
//    std::cout << std::endl;
//}
//
//void Print(int (*p)[3], int s) { //(int p[][3], int s)
//    for (int y = 0; y < s; ++y) {
//        for ( int x = 0; x < 3; ++x)
//            std::cout << p[y][x] << ".";
//        std::cout << std::endl;
//
//    }
//   }
////
//int main() {
//    int x[3] = {1,2,3};
//    Print(x,3);
//
//    int *p = x;
////    int *p2 = &x; //안됨 -> p2는 int의 주소를 받을 수 있는데, &x는 int형 array에 대한 주소
//    int (*p3)[3] = &x; //pointer to array(int [3])
////    int *p4[3] = &x; //p4 -> int형 포인터에 대한 어레이임 (어레이인데 엘리먼트가 인트형 포인터인 것)
//    // array of pointer (int *)
//    int y[2][3] = {1,2,3,4,5,6}; //{사이즈가 3인 int형 어레이가 2개 있는 것}
//    //array of array(int [3])
//    // == {{1,2,3}, {4,5,6}}
//
//    for (int i = 0; i < 2; ++i)
//        Print(y[i], 3); //무쳤네
//
//    Print(y[0],3);
//
//    Print(y, 2);
////    Print(p3, 3);
//
//    int (*p5)[3] = y; //&y[0][0]의 주소? &y[0]의 주소? -> 2번. &{1,2,3}
//    //사이즈가 3인 1차원 어레이의 주소를 저장할 수 있는 p5.
//    //y는 첫 번째(1)의 주소가 아니라 &{1,2,3} -> 한 마디로 int의 주소가 아니라 int[3] 어레이의 주소
//    for (int i =0; i < sizeof(p5)/sizeof(int); i ++)
//        std::cout << p5[i] << " ";
//}


//#include <iostream>
//
//void Sq(int *x, int size) { // 이렇게 써도 똑같음 -> size가 의미가 없음
////    std::cout << *x << std::endl; //첫 번째 요소의 주소가 가리키는 대상(실체)
//    *x = 10;
//    int *p = x;
//    for (int i =0; i < size; ++i) {
//        x[i] *= x[i];
//        std::cout << *(x+i) << std::endl;
//        std::cout << *(p) << std::endl;
//        std::cout << x + i << std::endl; // x는 주소니까 주소가 출력됨
//        std::cout << p++ << std::endl; // x는 주소니까 주소가 출력됨
//    //수학적으로는 1씩 증가해야 함 -> 근데 아니다? -> 4씩 커짐..  -> int형 데이터가 4바이트!!!!!!!!
//    //포인터 더하기 정수(실수) -> 실질적으로 주소에 그 데이터를 저장할 수 있는 타입 크기만큼 배수로 증가
//    //i가 0 -> 첫번째 요소의 시작 주소, 1 -> 두번째 요소의 시작 주소, 3 -> 세번째 요소의 시작 주소
//
//    //i가 0 -> 첫번째 요소, 1 -> 두번째 요소, 3 -> 세번째 요소
//    }
//}
//int main() {
//    int x[3] = {1,2,3};
//
//    Sq(x,3);
//    for (int i = 0 ; i < 3; ++i) {
//        std::cout << x[i] << ' '; // 배열은 첫번째 주소를 가지고 있음 (포인터 개념)
//        std::cout << *(x+i) << ' '; //위와 같은 결과
//    }
//}

//#include <iostream>
//int main() {
//    int x[3] = {1,2,3};
//    int *p = x; //&x[0]
//
//    for (int i = 0; i < 3; i++) {
////        std::cout << p++ << std::endl; //요소를 차례로 가리킴
//        std::cout << *(p+i) << std::endl;
//        std::cout << *(x+i) << std::endl; //이거는 첫번째 요소만
//        std::cout << "-----" << std::endl;
////        std::cout << (*p)++ << std::endl; //p가 증가하는 게 아니라 간접연산자 취한 게 증가됨
////        1, 2, 3 -> 왜 안되지?
//    }
//}

//p.161
//#include <iostream>
//
//void Print(int *s, int *e) {
//    for (int *p = s/*(첫번째주소)*/; p < e; p++) {
//        *p *= *p; //실체도 바뀜 -> 주소로 받아서 실체를 끌고 온 거니까
//        std::cout << *p << std::endl;
//    }
//}
//int main() {
//    int x[3] = {1, 10, 20};
//
//    Print(x, x+sizeof(x)/sizeof(int));
//    for (int i = 0; i < 3 ; i++ ) {
//        std::cout << x[i] << std::endl; //실체도 바뀜
//    }
//}

//#include <iostream>
//void iterative_print(const int *a, int n) {
//  for (int i = 0; i < n; i++)
//     std::cout << a[i] << ' ';
//}
//void recursive_print(const int *a, int n) {
//if (n > 0) {
//std::cout << *a << ' '; recursive_print(a + 1, n - 1); //다음 주소 + 개수 하나 감소
//    }
//}
//int main() {
//    int list[] = { 23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10 };
//    iterative_print(list, 11);
//    recursive_print(list, 11);
//}

//#include <iostream>
//int main() {
//    int arr[] = {10, 20, 30, 40, 50};
//    int *p = arr;
//    std::cout << *p << '\n'; // 10
//    std::cout << p[0] << '\n'; // 10
//    std::cout << *(p+1) << '\n'; // 20
//    std::cout << *p << '\n'; // 10
//    p++; // Advances p to the next element
//    std::cout << *p << '\n'; // 20
//    p += 2; // Advance p two places
//    std::cout << *p << '\n'; // 40
//    std::cout << p[0] << '\n'; // 40
//    std::cout << p[1] << '\n'; // 50
//    p--;
//    std::cout << *p << '\n';
//
//}

//p.164
//#include <iostream>
//const int MAX_NUMBER_OF_ENTRIES = 1000000;
//double numbers[MAX_NUMBER_OF_ENTRIES]; //double형 어레이
//int main() {
//    int size;
//    std::cin >> size;
//    if (size > 0) {
//     for (int i = 0; i < size; i++)
//        std::cin >> numbers[i];
//        for (int i = 0; i < size; i++)
//            std::cout << numbers[i] << '\n';
//    }
//}

//#include <iostream>
//int main() {
//  double *numbers; //배열
//  int size = 3;
//  if (size > 0) {
//      numbers = new double[size];
//      for (int i = 0; i < size; i++)
//        std::cin >> numbers[i];
//// numbers = new double;
//      for (int i = 0; i < size; i++) std::cout << numbers[i] << '\n';
//      delete [] numbers; // delete numbers;
//      for (int i = 0; i < size; i++) std::cout << numbers[i] << '\n';
//  }
//}
//
//#include <iostream>
//int main() {
////    int a[10], b[10];
////   for (int i = 0; i < 10; i++)
////   a[i] = i;
//////    b = a; //array를 array로 할당은 안됨
////    for (int i = 0; i < 10; i++) std::cout << b[i]<< " ";
//
////    int a[10], *b;
////    for (int i = 0; i < 10; i++)
////    a[i] = i;
////    b = a; //alising, 같은 실체임 (다른 이름)
////    b[0] = 10;
////    for (int i = 0; i < 10; i++) std::cout << a[i]<< " "; //a도 같이 바뀜
////
//    int a[10], *b;
//    b = new int[10];
//    for (int i = 0; i < 10; i++)
//        b[i] = a[i]; //a의 첫번째 주소를 받는 게 아니라 각자 copy하는 것
//    for (int i = 0; i < 10; i++) std::cout << a[i]<< " ";
//}

//#include <iostream>
//void print(int **pp, int r, int c){
//    for ( int y = 0; y < r; ++y) {
//        for (int x = 0; x < c; ++x)
//            std::cout << pp[y][x] << ",";
//    std::cout << std::endl;
//    }
//
//}
//int main() {
//    int* p1 = new int[3];
//
//
//    int** pp = new int* [2]; //한 겹씩 까야 함
//    for (int i = 0; i < 2; ++i)
//        pp[i] = new int[3];
//
//    //pp[2][3] pp라는 이름은 int형 어레이에 대한 포인터.
//    print(pp, 2, 3);
//
//    for (int i = 0; i <2 ; ++i){
//        delete [] pp[i];
//    }
////    delete pp;
//    delete[] p1;
//}

//p.164 Dynamic Arrays(variable allocation)

//#include <iostream>
//int main() {
////    int a1[3] = {1,2,3,4}; //이건 에러
//    int a2[3] = { 1 }; // 앞에서부터 초기화 -> 나머지는 다 0으로 초기화( 가비지 데이터 X)
//    int a3[3];
//    int m[4][2] = {{1}, {21,22}, {31,32}};
//
//
//    std::cout << a3[1] << std::endl; // 가비지 데이터
//    std::cout << a2[1] << std::endl; // 0
//    for ( int y = 0; y < 4; ++y) {
//        for (int x = 0; x < 2; ++x)
//            std::cout << m[y][x] << ","; //1,0,21,22,31,32,0,0,
//    }
//}


//중요하다!!
//#include <iostream>
//void p1(int (*p)[3]) { //사이즈가 3인 int형 어레이의 주소를 받을 것
//    for (int i = 0; i<2; i++) {
//        for (int j = 0; j < 3; j++)
//            std::cout << p[i][j] << " ";
//    }
//    std::cout << std::endl;
//    }
//void p2(int p[][3]) { //사이즈가 3인 int형 어레이의 주소를 받을 것
//    for (int i = 0; i<2; i++) {
//        for (int j = 0; j < 3; j++)
//            std::cout << p[i][j] << " ";
//    }
//    std::cout << std::endl;
//}
//void p3(int p[2][3]) { //사이즈가 3인 int형 어레이의 주소를 받을 것
//    for (int i = 0; i<2; i++) {
//        for (int j = 0; j < 3; j++)
//            std::cout << p[i][j] << " ";
//    }
//    std::cout << std::endl;
//}
//
//typedef int INT;
//
//typedef int M1[2][3];
//void p4(M1 p) {
//    for (int i = 0; i<2; i++) {
//        for (int j = 0; j < 3; j++)
//            std::cout << p[i][j] << " ";
//    }
//    std::cout << std::endl;
//} //M1이 타입이라는 소리인데...?
//
//
//using M2 = int[2][3]; //이런방버도 가능~~
//void p5(M2 p) {
//    for (int i = 0; i<2; i++) {
//        for (int j = 0; j < 3; j++)
//            std::cout << p[i][j] << " ";
//    }
//    std::cout << std::endl;
//}
//
//int main() {
//    INT x[2][3] = {{1,2,3}, {6,7,8}};
//    p1(x);
//    p2(x);
//    p3(x);
//    p4(x);
//    p5(x);
//
//}

//#include <iostream>
//#include <string>
//int main() {
//    std::string s1 = "abc";
//
//    std::cout << s1 << std::endl; //abc
//    s1 = "ddd"; //가능 -> String과 Cstring의 차이
//    std::cout << s1 << std::endl; //ddd
//    char s2[100] = "abcdef"; //100이지만 실제로 저장은 6개? -> C -> 문자열 끝을 알리기 위해 아스키코드 0번을 입력
//    std::cout << s2 << std::endl;
////    s2 = "aaa"; //불가능
//    s2[3] = 0; //이거 앞에까지만 문자열이라는 뜻
//    std::cout << s2 << std::endl; //a0cdef중 a까지만 출력
////    s2 ="aaa"; //불가능
//    int bb[][2] = {{1,5},{3,4}};
//    std::cout << *(bb[0]) << std::endl; //벡터랑 다르게 되는구만
//    std::cout << *(bb[0]+1) << std::endl; //5
//
//}

//#include <iostream>
//#include <string>
//#include <cstdio>
//int main(int c, char *a[]) {
//    std::cout << a[0] << std::endl;
//    if (c > 1)
//        std::cout << a[1] << std::endl;
//    char name[20] = "Jungmin\0 Kim";
//    std::cout << name << std::endl; //Jungmin
//
//    char *word = "Howdy!";
//    std::cout << word << '\n';
//   char kim[256];
//   std::cin >> kim;
//    std::cout << kim << std::endl;
//    char Ho[30];
//   fgets(Ho, sizeof(Ho), stdin);
//    std::cout << Ho << '\n';
////    delimiter, '\0'
////    <cstring>
//    char s[100] = "jungmin";
//    char t[150] = "kim";
//    int strlen(const char *s);
//   char *strcpy(char *s, const char *t);
//   int strcmp(const char *s, const char *t);
//}

//172
//#include <iostream>
//#include <vector>
//#include <array>
//int main() {
//  std::vector<int> v(10); //size 바뀔 수 있음
//  std::cout << v[0] << std::endl; //0 초기화
//  std::array<int, 10> a; //size 바뀔 수 없음
//  std::cout << a[0] << std::endl; // 배열 -> 가비지
//    int arr[10];
//    std::cout << arr[0] << std::endl; // 배열 0 -> 가비지
//    int x = int();
//    std::cout << x << std::endl; // 0 초기화
//}

#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec = {10, 20, 30};
    std::cout << *vec.begin() << std::endl; //begin, end는 이터레이터 -> * -> 실체
    std::cout << *(vec.end()-1) << std::endl;
    int *cursor = &vec[0]; //벡터 첫번째 요소 주소
    int *end = &vec[0] + vec.size(); //벡터 마지막 요소 다음 주소
    while (cursor != end) {
        *cursor *= *cursor; //실체를 다룸
      std::cout << *cursor << ' '; //실체를 출력
    cursor++; }
}
////
