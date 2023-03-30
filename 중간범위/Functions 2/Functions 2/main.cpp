//
//  main.cpp
//  Functions 2
//
//  Created by Jungmin Kim on 2022/10/19.
//

//131p 피보나치
//#include <iostream>
//
//int f(int n) {
//    if (n <= 1) return n; //n값에 음수는 안된다는 가정 하에
//    return f(n-1) +f(n-2); //두 개가 콜됨.
//}
//int main() {
//    for (int i = 0; i< 30;++i)
//        std::cout << f(i) << std::endl;
//}

//133p Potinters
//&: address operator
//#include <iostream>
//int main() {
////    int x = 10;
//    int *p = reinterpret_cast<int *>(3);
////    std::cout << &x << " " << &p << std::endl;
//    std::cout << p << std::endl;
//}
//#include <iostream>
//int main() {
//    int *p = nullptr; //nullptr
//    if(p==nullptr)
//        std::cout << "정민";
//}

//134p Pointers
//#include <iostream>
//int main() {
//    int x;
//    x = 4;
//    int *p;
//    p = &x;
//
//    std::cout << &x << std::endl;
//    std::cout << p << std::endl;
//
//    x = 10;
////    *p = 5;
//
//    std::cout << x << std::endl;
//    std::cout << *p << std::endl;
//}

//p136 Reference Variable
//#include <iostream>
//int main() {
//    int x = 10, y =20;
//    int &r = x;
//    r = y; //x에다가 y를 대입
//    std::cout << x << " " << y;
//}

//p138 Pass by reference
//#include <iostream>
//void swap(int a, int b) {
//    int temp = a;
//    a=b;
//    b=temp;
//    std::cout << a <<"," << b << std::endl;
//}
//
//int main() {
//    int a =0, b=1;
//    std::cout << a <<"," << b << std::endl;
//    swap(a,b);
//    std::cout << a <<"," << b << std::endl;
//}

//#include <iostream>
//void swap(int &a, int &b) { //레퍼런스는 실체를 만들지 않음 -> 함수가 콜 될 때( 아규먼트 전달될 때) 별명지정 -> 아규먼트가 즉 실체를 받는 게 되어버림 -> 같이 움직임
//    int temp = a;
//    a=b;
//    b=temp;
//    std::cout << a <<"," << b << std::endl;
//}
//
//int main() {
//    int a =0, b=1;
//    std::cout << a <<"," << b << std::endl;
//    swap(a,b);
//    std::cout << a <<"," << b << std::endl;
//}

//#include <iostream>
//void swap(int *a, int *b) { //포인터는 실체를 만들고 -> 주소가 저장됨 -> 주소를 넘겨줘야 함 (메인에 있는 a(b)에 대한 주소)
//    int temp = *a; //a는 메인에 있는 a의 주소 -> 실체를 가리키기 위해 인디렉션 오퍼레이터 -> *a는 메인의 a임
//    *a=*b; //실체를 바꿈
//    *b=temp;
//}
//
//int main() {
//    int a =0, b=1;
//    std::cout << a <<"," << b << std::endl;
//    swap(&a,&b);
//    std::cout << a <<"," << b << std::endl;
//}

//#include <iostream>
//int main(){
//    int *p;
//    int x;
//    x = 4;
//    p = &x;
//
//    std::cout <<  &x << std::endl;
//    std::cout << p << std::endl;
//
//    std::cout << x << std::endl;
//    std::cout << *p << std::endl; //p가 가리키는 실체(밸류 아님)
//
//    *p = 7; // p가 가리키는 실체 -> x. x = 7;과 같은 것
//    std::cout << x << std::endl;
//    std::cout << *p << std::endl;
//
//    int x = 5;
//    int *p = &x;
//    std::cout << *p ;

//}

//#include <iostream>
//int main() {
//    int x = 5;
//    int y = x;
//    int& r = x;
//    std::cout << "x = " << x << '\n';
//    std::cout << "y = " << y << '\n';
//    std::cout << "r = " << r << '\n';
//    x = 7;
//    std::cout << "x = " << x << '\n';
//    std::cout << "y = " << y << '\n';
//    std::cout << "r = " << r << '\n';
//    y = 8;
//    std::cout << "x = " << x << '\n';
//    std::cout << "y = " << y << '\n';
//    std::cout << "r = " << r << '\n';
//
//}

//#include <iostream>
//void swap(int *a, int *b) {
//// Pass by reference via pointers // Pass by address
//  int temp = *a;
//  *a = *b;
//  *b = temp;
//}
//int main() {
//int var1 = 5, var2 = 19;
//std::cout << "var1 = " << var1 << ", var2 = " << var2 << '\n'; swap(&var1, &var2);
//std::cout << "var1 = " << var1 << ", var2 = " << var2 << '\n';
//}

//p.139 Pass by Reference 너무너무 중요함
//#include <iostream>
//void Fn1(int *a, int* b){
//    int t = *a;
//    *a = *b;
//    *b = t;
//    std::cout << *a << *b << std::endl;
//}
//void Fn2(int *a, int* b){
//    int* t = a; //t를 주소 받을 수 있게끔 해주고 주소로 처리를 함
//    a = b;
//    b = t;
//    std::cout << *a << *b << std::endl; //마지막에 역참조연산자로 실체 호출
//}
//void Fn3(int &a, int& b){
//    int t = a; //t를 주소 받을 수 있게끔 해주고 주소로 처리를 함
//    a = b;
//    b = t;
//    std::cout << a << b << std::endl; //마지막에 역참조연산자로 실체 호출
//}
//int main(){
//    int a = 0;
//    int b = 1;
//    std::cout << a << b << std::endl;
////    Fn1(&a,&b); //실체 바뀜
////    Fn2(&a,&b); //실체 안바뀜
//    Fn3(a,b); //실체 바뀜
////    Fn2(a,b); //이건 안됨
//    std::cout << a << b << std::endl;
//
//
//}

//p.140

//#include <iostream>
//int add(int x, int y) {
//    return x+y;
//}
//int multiply(int x, int y) {
//    return x * y;
//}
//int evaluate(int (*f) (int,int), int x, int y) {
//    return f(x,y);
//}
//
//int main() {
//    std::cout << add(2,3) << '\n';
//    std::cout << evaluate(&add, 2, 3) << '\n';
//    std::cout << evaluate(&multiply, 2, 3) << '\n';
//}

#include <iostream>
int add(int x, int y) {
    return x+y;
}

int main() {
    int (*func) (int, int);
    func = &add; //함수는 특이하게 &(주소)로 안 보내줘도 됨
    std::cout << func(7,2) << '\n';
}
