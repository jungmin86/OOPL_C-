//
//  main.cpp
//  Assignment#07
//
//  Created by Jungmin Kim on 2022/12/03.
//

////1.
#include <iostream>
#include <cmath>

class Shape {
public:
    static double PI; //static 변수 선언
    Shape() {} //Default Constructor
    void get_area() const {}; //면적을 계산하고 출력하는 순수 가상 함수
};
double Shape::PI = acos(-1); //static 변수 정의(class 밖에서)

class TwoDimensional: public Shape {
public:
    virtual void get_perimeter() const = 0; //둘레를 계산하고 출력하는 순수 가상 함수
};

class ThreeDimensional : public Shape {
public:
    virtual void get_volume() const = 0; //부피를 계산하고 출력하는 순수 가상 함수
};

class Triangle : public TwoDimensional{
    double a,b,c; // 세 변
    double p = (a+b+c)/ 2.0;
public:
    Triangle(double aa, double bb, double cc): a(aa), b(bb), c(cc) {}
    void get_perimeter() const override{
        double result = 2 * (b + a + c);
        std::cout << "삼각형 둘레: " << result <<'\n';
    }
    void get_area() const {
        double result = sqrt(p * (p-a) * (p-b) * (p-c)); //헤론공식
        std::cout << "삼각형 넓이: " << result <<'\n';
    }
};

class Rectangle : public TwoDimensional {
    double width, height;
public:
    Rectangle(double w, double h): width(w), height(h) {}
    void get_perimeter() const{
        double result = 2 * (width + height);
        std::cout << "사각형 둘레: " << result << '\n';
    }
    void get_area() const {
        double result =  width * height;
        std::cout << "사각형 넓이: " << result <<'\n';
    }
};

class Circle : public TwoDimensional {
    double radius;
public:
    Circle(double r): radius(r) {}
    void get_perimeter() const{
        double result = 2 * Shape::PI * radius;

        std::cout << "원 둘레: " << result << '\n';
    }
    void get_area() const {
        double result = Shape::PI * pow(radius,2);
        std::cout << "원 넓이: " << result <<'\n';
    }
};

class Cube: public ThreeDimensional {
    double width, depth, height;
public:
    Cube(double w, double d, double h): width(w), depth(d), height(h) {}
    void get_area() const{ //넓이
        double result = 2 * ((width * depth) + (width * height) + (depth * height));
        std::cout << "정육면체 겉넓이: " <<result << '\n';
    }
    void get_volume() const{
        double result = width * depth * height;
        std::cout << "정육면체 부피: " << result <<'\n';
    }
};

class Sphere: public ThreeDimensional { //구
    double radius;
public:
    Sphere(double r): radius(r) {}
    void get_area() const{ //겉널이
        double result = 4 * Shape::PI * pow(radius,2);

        std::cout << "구 겉넓이: " <<result << '\n';
    }
    void get_volume() const{ //부피
        double result = 4.0 / 3.0 * Shape::PI * pow(radius,3);

        std::cout << "구 부피: " << result <<'\n';
    }
};

int main() {
    Triangle t(3,5,4);
    Rectangle r(2,3);
    Circle c(4);
    Cube cc(2,2,3);
    Sphere s(5);

    t.get_area();
    t.get_perimeter();
    r.get_area();
    r.get_perimeter();
    c.get_area();
    c.get_perimeter();
    cc.get_area();
    cc.get_volume();
    s.get_area();
    s.get_volume();
}

//2.
//#include <iostream>
//class Base {
//    int x;
//public:
//    Base(int xx) : x(xx) {} //x좌표 생성자
//    virtual void print() const{
//        std::cout << x << '\n'; //x값 출력
//    }
//    int get_x() const {return x;} //private 멤버를 가져오는 메소드 -> 오퍼레이터 오버로딩을 위함
//};
//class Derived: public Base {
//    int y;
//public:
//    Derived(int xx, int yy) : Base(xx), y(yy) {} //x에 관해서는 Base의 생성자를 상속받음
//    void print() const {
////        std::cout << get_x() << ", " << y << '\n'; //x를 가져오는 데 있어서는 메소드를 활용
//        Base::print(); std::cout << ", " << y << '\n';
//    }
//    int get_y() const {return y;} //private 멤버를 가져오는 메소드 -> 오퍼레이터 오버로딩을 위함
//};
//bool operator<(const Derived& d1, const Derived& d2) { // 오퍼레이터 오버로딩
//    return ((d1.get_x() + d1.get_y()) < (d2.get_x() + d2.get_y()));
//}
//
//
// //All data members of Base and Derived classes must be declared
//// as private access types
//int main() {
//    Base *p1 = new Derived(10, 20);        // (x, y)
//    Base *p2 = new Base(5);            // (x)
//    p1->print();            // prints 10, 20
//    p1->Base::print();        // prints 10
//    p2->print();             // prints 5
//    Derived *p3 = dynamic_cast<Derived *>(p1); //downcast?
////    Derived *p3 = (p1); //이러면 오류남
//    if (p3 != nullptr) p3->print();            // prints 10, 20
//
//    const Base b1 = *p2;
//    b1.print();                // prints 5
//
//    Derived d1(1, 3), d2(2, 4);
//    Derived d3 = (d1 < d2) ? d1 : d2;    // operator <: (d1.x+d1.y) < (d2.x+d2.y)
//    d3.print();                // prints 1, 3
//}


//2. 교수님 해설
//#include <iostream>
//class Base {
//protected:
//    int x;
//public:
//    Base(int x) : x(x) {}
//    int getX() {
//        return x;
//    }
//    virtual void print() const {
//        std::cout << x;
//    }
//};
//class Derived : public Base {
//    int y;
//public:
//    Derived(int x,int y): Base(x), y(y) {}
//    void print() const override {
//        Base::print(); //위에꺼 상속받아오면 편하잖아
//        std::cout << "," << y << std::endl;
//    }
//    bool operator<(const Derived& a){ //멤버메소드 -> 비멤버펑션이면 this 객체가 ㅓ첫번째 파라미터가 됨 -> const 펑션도 오버로딩이 됨
//        return (x +  y) < (a.x + a.y);
//    }
//};
//
//
//
//int main() {
//    Base *p1 = new Derived(10, 20);        // (x, y)
//    Base *p2 = new Base(5);            // (x)
//    p1->print();            // prints 10, 20
//    p1->Base::print();        // prints 10
//    p2->print();             // prints 5
//    Derived *p3 = dynamic_cast<Derived *>(p1); //다이내믹 캐스팅
//    if (p3 != nullptr) p3->print();  //중요          // prints 10, 20
//
//    const Base b1 = *p2;
//    b1.print();                // prints 5
//
//    Derived d1(1, 3), d2(2, 4);
//    Derived d3 = (d1 < d2) ? d1 : d2;    // operator <: (d1.x+d1.y) < (d2.x+d2.y)
//    d3.print();
//}




//3.
//#include <iostream>
//#include <vector>
//
//class Base {
//    int size;
//    std::vector<int> v;
//public:
//    Base(int xx): size(xx), v(size) {} //xx를 통해 벡터의 사이즈 지정
//    virtual void print() const{ //virtual 안써도 가능
//        std::cout << size << '\n'; //size 출력
//    }
//    void setN(int i, int num) {
//        if (i >= v.size()) return;
//        v[i] = num; //i에 해당하는 인덱스에 num을 입력해줌 (size는 미리 정해져있으니 0에서 num으로 값이 수정됨)
//    }
//    virtual void printData() const{
//        for (int i = 0; i < v.size(); i++) {
//            std::cout << v[i] << " "; //벡터의 인덱스를 0부터 순회하며 하나씩 출력
//        }
//        std::cout << '\n';
//    }
//    std::vector<int>& get_v() { //vector의 실체를 반환해줘야 Derived 클래스에서 v를 수정 가능
//        return v;
//    }
//};
//
//class Derived : public Base {
//public:
//    Derived(int xx): Base(xx) {} //size가 xx인 벡터 생성
//    void insert(int num) { //Base 클래스의 v를 실체로 받아와서 num을 엘리먼트로 추가해준다. (size += 1)
//        get_v().push_back(num);
//    }
//};
//
//
//int main() {
//    Base b1(2), b2(10);
//
//    b1.print();        // 2
//    b2.print();        // 10
//    for (int i = 0; i < 5; i++) {
//        b1.setN(i, (i+1) * 20);
//        b2.setN(i, (i+1) * 10);
//    }
//    b1.printData();  // 20 40
//    b2.printData();  // 10 20 30 40 50 0 0 0 0 0
//
//    Derived d(5);
//    d.print();        // 5
//    d.printData();        // 0 0 0 0 0
//    for (int i = 0; i < 10; i++) {
//        d.setN(i, (i + 1) * 3);
//    }
//    d.printData();    // 3 6 9 12 15
//    d.insert(99);    // "Base" class does not have "insert" method. 어레이는 사이즈가 컴파일타임에 정해지기 때문에 다이내믹 얼로케이션 활용해야 함? new ;
//    d.printData();    // 3 6 9 12 15 99
//}
//
//
//
//

//3. 교수님 해설
//#include <iostream>
//#include <vector>
//class Base {
//protected:
//    int size;
//    std::vector<int> data;
//public:
//    Base(int s): data(s), size(s) {}
//    void print() const {
//        std::cout << size << std::endl;
//    }
//    void printData() const{
//        for (auto x: data) std::cout << x << " ";
//        std::cout << std::endl;
//    }
//    void setN(int index, int value) { //멤버 수정할 거니까 const 안됨
//        if(index >= size) return;
//        data[index] = value;
//    }
//};
//
//class Derived: public Base {
//public:
//    Derived(int x): Base(x) {}
//    void insert(int n) {
//        data.push_back(n);
//    }
//};
//int main() {
//    Base b1(2), b2(10);
//
//    b1.print();        // 2
//    b2.print();        // 10
//    for (int i = 0; i < 5; i++) {
//        b1.setN(i, (i+1) * 20);
//        b2.setN(i, (i+1) * 10);
//    }
//    b1.printData();  // 20 40
//    b2.printData();  // 10 20 30 40 50 0 0 0 0 0
//
//    Derived d(5);
//    d.print();        // 5
//    d.printData();        // 0 0 0 0 0
//    for (int i = 0; i < 10; i++) {
//        d.setN(i, (i + 1) * 3);
//    }
//    d.printData();    // 3 6 9 12 15
//    d.insert(99);    // "Base" class does not have "insert" method.
//    d.printData();    // 3 6 9 12 15 99
//
//}
