//
//  main.cpp
//  Questions
//
//  Created by Jungmin Kim on 2022/12/05.
//

//dynamic cast?

#include <iostream>
#include <string>

struct A {
    int x;
    virtual void X() {std::cout << "X";} //이게 있어야 캐스팅 가능 -> Polymorphism이 가능하려면 virtual function 하나 이상 갖고 있어야 함
};
struct B : public A {
    int y;
    void X() override {std::cout << "Y";}
};
void print(A* a) { a->X();}
int main() {
    A a;
    B bb;
    print(&a);
    print(&bb);
    A *a1 = new A;
    A* a2 = new B; //컴파일 시간에 결정되는 건 A 인스턴스(x만 접근 가능)
//    B* b1 = new A; //이건 안됨
//    B* b = a2; //컴파일 시간에는 a2는 A인스턴스만 접근함 -> 오류, a2는 B를 가리키고 있긴 함(컴파일 시간엔 안됨)
    a2-> X();
    B* b = dynamic_cast<B*>(a2); //error 안뜸
    b-> X();
    if(b == nullptr)  std::cout << "error1";
    B* b1 = dynamic_cast<B*>(a1); //error(nullptr) -> a1은 B와 관련 없어서 불가능
    if(b1 == nullptr)  std::cout << "error2";
}



//함수의 반환형식을 레퍼런스로 써야 하는 경우? -> 레퍼런스 변수에 할당하는 경우 (레퍼런스 안적어주면 안됨)

//ostream 오버로딩 -> 파라미터, 리턴타입 레퍼런스
//로컬 배리어블은 사라지니까 레퍼런스 안함
//#include <iostream>
//int& F(int& x) { //F 함수는 메인함수 xx에 대한 별명 -> 변수로 함수를 받아야 함
////리턴타입 int만 쓰면 오류, 리턴은 카피의 개념 -> 로컬 배리어블 -> 리턴되고 나서 쓸 수 없음
//    ++x;
//    return x; //결국 x랑 y랑 같아짐
//    //return ++x; //++x는 진정한 x랑 다름(카피의 개념)
//}
//int main() {
//    int xx = 10;
//    int& y = F(xx); //y는 F, 즉 xx에 대한 레퍼런스(별명)
//    y++; //y는 11로 들어와서 +1 됨 -> xx도 같이 움직임
//    std::cout << xx << '\n'; //12이 나온다 덜덜덜덜덜
//}

//friend 지정하면 논멤버펑션인 것(외부 펑션인데 자기 클래스의 private에 접근할 수 있을 것)
