//
//  main.cpp
//  Rvalue References
//
//  Created by Jungmin Kim on 2022/11/30.
//

//#include <iostream>
//class A {
//public:
//    int x;
//
//    A(int x):x(x) {}
//    A operator+(const A& a) {
//        return {x + a.x};
//    }
////    friend std::ostream& operator<< (std::ostream& os, const A& a) ;
////    friend std::ostream& operator<< (std::ostream& os, A& a) ; //이건 안됨
////    friend std::ostream& operator<< (std::ostream& os, A a) ;
//    friend std::ostream& operator<< (std::ostream& os, A&& a) ;
//};
//std::ostream& operator<< (std::ostream& os, A&& a) { //Rvalue refer
//    os << a.x;
//    return os;
//}
//
//
//int main(int argc, const char * argv[]) {
//    A a1(10), a2(5);
//    std::cout << a1+a2;
//}


//#include <iostream>
//#include <string>
//class A {
//public:
//    std::string x;
//    A(A &&a): x(std::move(a.x)) {}
//    A(std::string s) : x(s) {}
//};
//std::ostream& operator<< (std::ostream& os, A&& a) { //Rvalue refer
//    os << a.x;
//    return os;
//}
//
//
//int main(int argc, const char * argv[]) {
//    A a1("ddd");
//    std::cout << a1.x <<std::endl; //ddd
//    A a2(std::move(a1));
//    std::cout << a1.x <<std::endl; //사라져버림 -> move로 넘겨줌
//    std::cout << a2.x << std::endl; //ddd
//}

//Smart Pointers

