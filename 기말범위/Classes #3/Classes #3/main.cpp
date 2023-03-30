//
//  main.cpp
//  Classes #3
//
//  Created by Jungmin Kim on 2022/11/23.
//
//248.
//#include <iostream>
//#include <fstream>
//void print(std::ostream& os, int n) {
//  os << n << '\n';
//}
//int main() {
//    print(std::cout, 35);
//  std::ofstream fout("temp.txt");
//if (fout.good()) { print(fout, 97); fout.close();
//} }

//#include <iostream>
//
//class B {
//public:
//  void f() {
//     std::cout << "In function 'f'\n";
//} };
//class D: public B { public:
//  void g() {
//     std::cout << "In function 'g'\n";
//      }
//    void f() {
//        std::cout << "D의 f 함수\n"; //오버라이딩?
//    }
//};
//int main() {
//    B myB;
//    D myD;
//    myB.f();
////    myB.g(); //오류
//    myD.f();//D에 f()를 오버라이딩한 경우는 D에 있는 f()
//    myD.B::f();//D에 f()를 오버라이딩한 경우에 B에 있는 f()
//    myD.g();
//}
//
//#include <iostream>
//class Base {
//  int num1;
//public:
//    Base(int n) : num1(n) {} // 생성자
//    void print() const { std::cout << num1 << " base\n";} //print
//    int Num1() const { return num1; } //get
//};
//class Derived : public Base {
//  int num2;
//public:
//    Derived(int n1, int n2) : Base(n1), num2(n2) {} //생성자(num1은 private이라서 위의 생성자를 불러야 함)
//    void print() const { std::cout << Num1() << ','<< num2 << "derived\n"; } // overriding(자료형, 파라미터, 등 다 똑같은데 함수 동작만 다름) -> num1은 private
//};
//int main(){
//    Base b(2); //2
//    Derived d(3, 5);
//    b.print();
//    d.print();
//    d.Base::print();
//    b = d; //파생 -> 기본 할당 가능(내용 깎으면 됨)
//    b.print(); //3 (num1에 3이 할당)
//// d = b; //d가 더 큰 범위이기 때문에 b로느 채워줄 수가 없음 (기본 -> 파생 할당 불가능) num2를 채울 수 없ㅇ므
//}

//#include <iostream>
//
//using namespace std;
//
//class parent {
//public :
//    void print1() {
//        cout << "parent print1" << "\n";
//    }
//    virtual void print2() {
//        cout << "parent print2" << "\n";
//    }
//    virtual void print3() {
//        cout << "parent print3" << "\n";
//    }
//};
//
//class child : public parent {
//public :
//    void print2() {
//        cout << "child print2" << "\n";
//    }
//    void print3(int x) { //오버라이딩 아님-> 오버로딩 -> virtual 관계없어서 Base클래스 포인터를 통해서
//        cout << "child print3" << "\n";
//    }
//};
//
//int main() {
//    parent* p;
//    child c;
////    p = &c; //정적
//    p = new child; //동적
//
//    p->print1(); //parent
//    p->print2(); //virtual 따라서 런타임에 자식클래스에 접근
//    p->print3();
////    p->print3(2);//오류-> 오버라이딩ㅇ은 파라미터 같아야 함 기본클래스에 없으니 어쩔 수 없음
//    c.print3(2); //이건 됨
//    delete p;
//
//}


//#include <iostream>
//class Base {
//public:
//     virtual void f() const{ //virtual 지우면 다 Base로 나옴
//         // dynamic dispatch → polymorphism
//        std::cout << "base\n";
//} };
//class Derived : public Base {
//public:
//    void f() const override{
//        // override: virtual overriding // final: final virtual overriding -> 파이널은 더 이상 오버라이딩 못하게 만드느 것
//        std::cout << "derived\n";
//  }
//};
//int main() {
//    Base b;
//    Derived d;
//    Base& br = b;
//    Base& dr = d; //Base 인스턴스를 만드는 게 아니라, Base를 별명으로 받을 변수 -> 담고 있는 건 Base, Derived 둘 다 가능
//    Base br1 = b; // 둘 다 base로 출력
//    Base dr1 = d; // 둘 다 base로 출력 -> Base의 인스턴스가 만들어졌으니까 당연히 Base f() 콜 (포인터나 레퍼런스 안쓰면 불가능)
//    br.f(); //base
//    dr.f(); //derived
//    br1.f(); //base
//    dr1.f(); //base
////    Base* bp = &b; //Base 인스턴스를 만드는 게 아니라 주소를 받는것 -> 담고 있는 건 Base, Derived 둘 다 가능
////    Base* dp = &d;
//    Base* bp = new Base;
//    Base* dp = new Derived;
//    bp->f(); //base
//    dp->f(); //derived
//    delete bp;
//    delete dp;
//    br.Base::f();// prints "base"
//    dr.Base::f();// prints "base"
//
//}


//#include <iostream>
//class B {
//public:
//    virtual void print() { std::cout << "Base" <<'\n' ;} //virtual 붙이면 Print(&d)가 Derived 출력
//};
//void Print(B* b) { b-> print();} //virtual 하면 B*에 대해서만 만들어놓으면 D도 사용 가능
//void Print(B& b) { b.print();} //virtual 하면 B*에 대해서만 만들어놓으면 D도 사용 가능
//
//class D : public B {
//public:
//    void print() { std::cout << "Derived"<< '\n';}
//};
////void Print(D* d) {d-> print(); std::cout <<"dkddmk"<< '\n';}//virtual ㅇ없을거면 이렇게 정의 + virtual이랑 겹치면 이게 먼저 출력됨
//
//int main() {
//    B b;
//    D d;
//    Print(&b);//베이스 -> Base 클래스 포인터에 할당
//    Print(&d);//디라이브드
//    Print(b);//베이스 -> Base 클래스 포인터에 할당
//    Print(d);//디라이브드
//}

////
//#include <iostream>
//class B {
//public:
//    virtual void print() { std::cout << "BB" << '\n';}
//    virtual ~B() { std::cout << "Base" ;} //virtual 붙이면 Print(&d)가 Derived 출력
//};
//
//class D : public B {
//public:
//    void print() { std::cout << "DD" << '\n';}
//    ~D() { std::cout << "Derived";}
//};
//
//int main() {
//    B* b = new D; //파생클래스 객체 만듦(소멸자를 위해 동적할당)
//    b->print(); //DD
//    delete b; //virtual -> 파생클래스 -> 기본클래스
//    //virtual 없으면 기본클래스 소멸자만 나오고 끝
//}

//#include <iostream>
//class NoVTable {
//    int data;
//public:
//    void set(int d) { data = d; }
//    int get() { return data; }
//};
//
//class HasVTable {
//  int data;
//public:
//    virtual void set(int d) { data = d; }
//    virtual int get() { return data; }
////    virtual int set() {return data;} //이거 있다고 달라지는 건 없네
//};
//int main() {
//    NoVTable no_vtable; HasVTable has_vtable;
//    no_vtable.set(10);
//    has_vtable.set(10);
//    std::cout << "no_vtable size = " << sizeof no_vtable << '\n'; //int의 메모리사이즈 4
//    std::cout << "has_vtable size = " << sizeof has_vtable << '\n'; //x가 4바이트, 포인터가 8바이트(64비트) -> vtable_ptr도 멤버로 가지고 있기 때음
//    //    //근데 왜 12바이트가 아니지? -> 컴파일러가 씨쁠쁠인 경우 데이터 관리 편안하게 하기 위해 데이터 멤버의 사이즈에 맞게 나눠서 저장(딱딱 붙여서 ㄴㄴ)
//    //    //데이터 관리의 편안함
//}

//#include <iostream>
//class A {
//    int x;
//public:
//    int get() {return x;} //non virtual
//};
//#pragma pack(push,1) //이걸 적으면 b의 사이즈가 16이 아닌 12가 됨
////1바이트씩 지정해서 밀겠다.
//class B {
//    int x;
//public:
//    virtual int get() { return x; } //virtual
//};
//#pragma pack(pop) //원상복구하겠다.
//int main() {
//    A a;
//    B b;
//    std::cout << sizeof(a) << std::endl; //sizeof 오퍼레이터 -> 인스턴스가 가지는 메모리 사이즈(펑션 제외) ->int의 메모리 사이즈 4바이트
//    std::cout << sizeof(b) << std::endl; //x가 4바이트, 포인터가 8바이트(64비트) -> vtable_ptr도 멤버로 가지고 있기 때문 (매우 중요)
//    //근데 왜 12바이트가 아니지? -> 컴파일러가 씨쁠쁠인 경우 데이터 관리 편안하게 하기 위해 데이터 멤버의 사이즈에 맞게 나눠서 저장(딱딱 붙여서 ㄴㄴ)
//    //데이터 관리의 편안함
//}
//
//#include <iostream>
//class B {
//public:
//    virtual  void P() {std::cout << "Based";}
//    virtual ~B() {std::cout <<"B삭제 "<<'\n';}
//};
//class D : public B {
//public:
//    void P() { std::cout << "Derived\n"; }
//    void P2() { std::cout << "Derived2\n" ;}
//    ~D() {std::cout << "D 삭제" << '\n';}
//};
//int main() {
//    B* b = new D;
//    D* d;
//    D* jungmin = dynamic_cast<D *>(b);
//    if (b != nullptr)
//    b-> P(); //Derived
////   if(d) d->P2(); //Derived2
//    jungmin->P2(); //Derived2
//    delete b; //D삭제 -> B삭제
////    delete jungmin;
//}
//
