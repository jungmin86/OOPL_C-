//
//  main.cpp
//  nakseo
//
//  Created by Jungmin Kim on 2022/12/18.
//

// Arrays
//#include <iostream>
//void print(int a[], int n) { //어레이는 항상 사이즈가 따라다닌다.
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
//    int x[3] = {1,2,3};
//    std::cout << &x << std::endl; //포인터 변수에 저장돼있는 값하고 포인터의 주소(x의 주소)하고 같을 수 있나?
//    // -> 배열인 경우에!!!! x는 포인터가 아니라 배열임 -> 배열의 이름은 첫 번째 요소의 주소임
//    // 인트형 어레이에 대한 시작 주소 -> 첫 번째 엘리먼트 주소와 같을 수. 있음
//    std::cout << x << std::endl; //첫 번째 주소 -> x(포인터)의 주소 (X), x(포인터)에 저장돼있는 주소
//    // 첫번째 엘리먼트의 주소(인트형 타입)
//    Sq(x,3);
//    for (int i = 0 ; i < 3; ++i) { //원래 같았으면 1 2 3이 출력돼야 함. -> 근데 1 4 9
//        std::cout << &x[i] << ' '; // 배열은 첫번째 주소를 가지고 있음 (포인터 개념)
//    }
//}

/*
 교수님 질문 있습니다!
 int x[]={1,2,3};
 int *p= x; (1의 주소) 는 가능한데 int *p =&x;(어레이 x의 주소)는 에러뜨는 이유가 궁금합니다.
 
 -> p는 int형 포인터, &x는 int형 어레이에 대한 주소
 */

//두 함수의 곱의 미분 (람다)
//#include <iostream>
//#include <functional>
//std::function<double(double)> Der
//(std::function<double(double)>f1, std::function<double(double)> f2, double h) {
//    return [f1,f2,h] (double x) {
//        return (f1(x)* ((f2(x+h) - f2(x))/h)) + (f2(x)* ((f1(x+h) - f1(x))/h));
//    };
//}
//#include <iostream>
//#include <functional>
//std::function<double(double)> Differential (std::function<double(double)> f1, std::function<double(double)> f2, double h) {
//    return [f1,f2, h] (double x) { return ((f1(x+h) - f1(x))/ h) * f2(x) + ((f2(x+h) - f2(x))/ h) * f1(x);};
//}
//
//
//double f3(double x) {
//    return x*x + 2*x + 2;
//}
//double f4(double x) {
//    return 3*x*x*x + 2*x + 3;
//}
//
//
//int main() {
//    double h = 0.00000001;
//    auto d = Differential(f3, f4, h); //Der에서 어떤 함수와 어떤 h를 쓸 것인지 정의
//    std::cout << d(1.); //실현할 때에는 파라미터 x 입력
//}
#include <iostream>
#include <cmath>
#include <vector>
//#include <algorithm>
#include <functional>
class CPoint {
public:
    int X, Y;
public:
    CPoint():X(0), Y(0) {}
    CPoint(int xi, int yi): X(xi), Y(yi) {}
    int getX() const { return X;}
    int getY() const { return Y;}
    
    CPoint operator+(const CPoint& p1) {
        int xx = X + p1.X;
        int yy =Y + p1.Y;
        return {xx, yy};
    }
    CPoint operator+=(const CPoint& p2) {
        this->X += p2.X;
        this->Y += p2.Y;
        return {X, Y};
    }
    friend class CLine;
};
class CLine : public CPoint {
    CPoint pt1, pt2;
public:
    CLine(CPoint p1, CPoint p2): pt1(p1), pt2(p2) {}
    CLine(int x, int y, int xx, int yy): pt1(x,y), pt2(xx,yy) {}
    
    CPoint getPt1() const { return pt1; }
    CPoint getPt2() const { return pt2; }
    
    friend std::ostream& operator<< (std::ostream& os, const CLine& l);
};

class CRect {
    CPoint pt1, pt2;
public:
    CRect() {}
    CRect(int x, int y, int xx, int yy): pt1(x,y), pt2(xx,yy) {}
    
    CPoint getPt1() const { return pt1; }
    CPoint getPt2() const { return pt2; }
    CPoint Center() const {
        int x = (pt1.getX() + pt2.getX()) / 2.;
        int y = (pt1.getY() + pt2.getY()) / 2.;
        return {x,y};
    }
    CRect Union(const CRect& r) {
        this-> pt1.X = (pt1.X < r.pt1.X) ? pt1.X : r.pt1.X;
        this-> pt1.Y = (pt1.Y < r.pt1.Y) ? pt1.Y : r.pt1.Y;
        this-> pt2.X = (pt2.X > r.pt2.X) ? pt2.X : r.pt2.X;
        this-> pt2.Y = (pt2.Y > r.pt2.Y) ? pt2.Y : r.pt2.Y;
        return *this;
    }
    CRect Intersect(const CRect& r) {
        this-> pt1.X = (pt1.X > r.pt1.X) ? pt1.X : r.pt1.X;
        this-> pt1.Y = (pt1.Y > r.pt1.Y) ? pt1.Y : r.pt1.Y;
        this-> pt2.X = (pt2.X < r.pt2.X) ? pt2.X : r.pt2.X;
        this-> pt2.Y = (pt2.Y < r.pt2.Y) ? pt2.Y : r.pt2.Y;
        return *this;
    }
    int Width() {
        int w = (pt1.X > pt2.X)? pt1.X - pt2.X: pt2.X - pt1.X;
        return w;
    }
    int Height() {
        int h = (pt1.Y > pt2.Y)? pt1.Y - pt2.Y: pt2.Y - pt1.Y;
        return h;
    }
    bool IsRect() {
        if ((pt1.X <= pt2.X) && (pt1.Y <= pt2.Y)) return true;
        return false;
    }
};

std::ostream& operator<<(std::ostream& os, const CPoint& pt) {
    os << "(" << pt.getX() << ", " << pt.getY() << ")";
    return os;
}
std::ostream& operator<< (std::ostream& os, const CLine& l) { //이게 지린다 -> 이미 위에 돼있으니까!
    os << l.getPt1() << " - " << l.getPt2();
    return os;
}
std::ostream& operator<< (std::ostream& os, const CRect& r) { //이게 지린다 -> 이미 위에 돼있으니까!
    os << r.getPt1() << " #" << r.getPt2();
    return os;
}
//2.
template <class T>
class CVector3D {
    std::vector<T> vec;
public:
    CVector3D(): vec(3) {}
    CVector3D(T x, T y, T z) {
        vec.push_back(x); vec.push_back(y); vec.push_back(z);
    }
    std::vector<T> getVec() const { return vec; }
    
    T& operator[](int i) const{
        return vec[i];
    }
    T& operator[](int i) {
        return vec[i];
    }
    static T abs( CVector3D<T> v) {
        double sum = 0;
        for (int i = 0; i < v.getVec().size(); i++) {
            sum += pow(v[i],2);
        }
        return sqrt(sum);
    }
    CVector3D<T> Normalize() {
        for (int i = 0; i < this->vec.size(); i++) {
            this->vec[i] /= abs(*this);
        }
        return *this;
        }
    T Dot(CVector3D<T> v) {
        T sum = 0;
        for (int i =0; i < v.vec.size(); i++)
            sum += this->vec[i] * v[i];
        return sum;
    }
    CVector3D<T> Cross(CVector3D<T> v) {
        T x = vec[1]*v[2] - vec[2]*v[1];
        T y = vec[2] * v[0] - vec[0] * v[2];
        T z = vec[0] * v[1] - vec[1] * v[0];
        return {x,y,z};
    }
    
    CVector3D<T> operator-() {
        for (int i = 0; i < vec.size() ; i++)
            vec[i] = -vec[i];
        return *this;
    }
    
};
template <class T>
std::ostream& operator<< (std::ostream& os, const CVector3D<T> v) { //클래스 템플릿을 파라미터로 받는 곳에서는 const 붙이면 안됨 //레퍼런스도 !!
    os << "<";
    for (int i = 0; i < v.getVec().size(); i++) {
        if (i == v.getVec().size()-1) {
            os << v[i]; break;
        }   os << v[i] << ", ";
    } os << ">";
    return os;
}
template <class T>
CVector3D<T> operator+( CVector3D<T> v1,  CVector3D<T> v2) {
    T x = v1[0] + v2[0];
    T y = v1[1] + v2[1];
    T z = v1[2] + v2[2];
    return {x,y,z};
}
template <class T>
CVector3D<T> operator-( CVector3D<T> v1,  CVector3D<T> v2) {
    T x = v1[0] - v2[0];
    T y = v1[1] - v2[1];
    T z = v1[2] - v2[2];
    return {x,y,z};
}
template <class T>
CVector3D<T> operator+=( CVector3D<T>& v1,  CVector3D<T> v2) {
    v1[0] += v2[0];
    v1[1] += v2[1];
    v1[2] += v2[2];
    return v1;
}
template <class T>
CVector3D<T> operator*(int n, CVector3D<T> v1) {
    v1[0] *= n;
    v1[1] *= n;
    v1[2] *= n;
    return v1;
}

std::function<double(double)> Composition (std::function<double(double)> f1, std::function<double(double)> f2) {
    return [f1,f2] (double x) { return f1(f2(x));};
}



double f1(double x) {
    return 3 * x * x + 2 * x + 5;
}

double f2(double x) {
    return sin(x);
}

//int main() {
//    std::cout << "*** 1 ***" << std::endl;
//
//    CPoint p0, p1(10, 20), p2(100, 200);
//    std::cout << p1 << "," << p2 << std::endl; //(10, 20), (100, 200)
//    p0 += p1 + p2;
//    std::cout << p0 << std::endl; // (110, 220)
//
//    CLine l1(p1, p2), l2(p1.X, p1.Y, p2.X, p2.Y);
//    std::cout << l1 << "," << l2 << std::endl; // (10, 20) - (100, 200), (10, 20) - (100, 200)
////
//    CRect r0;
//    const CRect r1(0, 0, 500, 300), r2(200, 100, 700, 400), r3(550, 350, 750, 400);
//    std::cout << r1 << std::endl;            // (0, 0)#(500, 300)
//    std::cout << r1.Center() << std::endl;    // (250, 150)
////
//    r0 = r1;
//    r0.Union(r2);
//    std::cout << r0 << std::endl;            // (0, 0)#(700, 400)
////
//    r0 = r1;
//    r0.Intersect(r2);
//    std::cout << r0 << ", Width: " << r0.Width() << ", Height: " << r0.Height() << std::endl; // (200, 100)#(500, 300), Width: 300, Height : 200
////
//    r0 = r1;
//    r0.Intersect(r3);
//    std::cout << r0 << std::boolalpha << r0.IsRect() << std::endl;    // false
//
//
//    std::cout << "\n*** 2 ***" << std::endl;
//
//    CVector3D<double> v0, v1(0.5, 7.2, -3.5), v2(-3.4, 6.5, 9.3);
//
//    std::cout << v1 << ", abs: " << CVector3D<double>::abs(v1) << std::endl;    // <0.5, 7.2, -3.5>, abs: 8.02122
//    v0 = v1;
//    v0.Normalize();                            // ≈©±‚∞° 1
//    std::cout << v0 << std::endl;            // < 0.0623346, 0.897619, -0.436343 >
//    std::cout << v1.Dot(v2) << std::endl;    // 12.55
//    v0 = v1.Cross(v2);                        // x = v1.y*v2.z - v1.z*v2.y;        y = v1.z * v2.x - v1.x * v2.z;        z = v1.x * v2.y - v1.y * v2.x;
//    std::cout << v0 << std::endl;            // < 89.71, 7.25, 27.73 >
//    std::cout << -v0 << std::endl;            // <-89.71, -7.25, -27.73>
//    std::cout << v1 + v2 << std::endl;        // <-2.9, 13.7, 5.8>
//    std::cout << v1 - v2 << std::endl;        // <3.9, 0.7, -12.8>
////
//    v0 = CVector3D<double>();
//    v0 += v1 + v2;
//    std::cout << v0 << std::endl;            // <-2.9, 13.7, 5.8>
//    std::cout << 5 * v0 << std::endl;        // <-14.5, 68.5, 29>
//////
////
//    std::cout << "\n*** 3 ***" << std::endl;
//    std::function<double(double)> g = Composition(f1, f2); // g = f1(f2)
//    std::cout << g(0) << std::endl;                // 5
//    std::cout << g(acos(-1.) / 2.) << std::endl;    // 10
//    std::cout << g(acos(-1.)) << std::endl;        // 5
//    std::cout << g(acos(-1) * 3 / 2) << std::endl;    // 6
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

//#include <iostream>
//#include <vector>
//int main() {
//    std::vector<int> vec { 10, 20, 30, 40, 50};
//    std::vector<int>::iterator iter = std::begin(vec); //vec.begin()과 같음
//    std::cout << *iter <<'\n';
//
//    iter++;
//    std::cout << *iter <<'\n';
//
//    *iter = 100;
//    for (auto x : vec)
//        std::cout << x << ' ';
//}

//#include <iostream>
//#include <string>
//int main() {
//    std::string s = "a,b,c";
//    std::cout << s.substr(0,2);
//}

//#include <iostream>
//class A {
//    int x ;
//    int& r; //레퍼런스는 이니셜라이제이션 리스트에서 초기화 반드시 해줘야 함
//public: // 생성자, 소멸자는 public -> 외부에서 만들어야 하니까
////    A() { //밑에 A a1;을 가능하게 함
////        x = 0;
////    }
////    A() : x(0) {} // 생성자의 경우 이렇게 쓰는 거 가능 ㅋㅋㅋㅋㅋ
////    A() : x(0) {r = x} //레퍼런스 지정이 아니라 대입연산자 -> 인스턴스 생성과 동시에 초기화가 아님
//    A() : x(0), r(x) {}
//
////    A(int xx) { //생성자
////        x = xx;
////    }
////    A(int xx) : x(xx) {} //
//    A(int xx) : x(xx), r(x) {}
//
//    void Print() {
//        std::cout << x << std::endl;
//        std::cout << r << std::endl;
//    }
//};
//int main() {
////    int& x; //별명이 지정되는 것 -> 레퍼런스는 생성과 동시에 =을 통해서 초기화해야함
//
//    A a1; //생성자 정의 안한 상태로 빌드 됨 -> 자동으로 파라미터가 없는 아무동작도 하지않는 default constructor가 만들어짐
//    // 생성자를 하나라도 정의하는 순간 디폴트 컨스트럭터 안만들어짐 -> 오류가 뜸
//
//    A a2(10); //인스턴스 멤버 x는 10
//
//    a1.Print();
//    a2.Print();
//}

//static int gcd(int num1, int num2) {
//    if (num2 == 0) return num1;
//    else return gcd(num2, num1 % num2); //나머지 연산자(정수에서만 사용 가능)
//}
//int main() {
//    std::cout << gcd(15,9);
//}

//#include <iostream>
//class B {
//public:
//     virtual void print() { std::cout << "Base" << ' ' ;} //virtual 붙이면 Print(&d)가 Derived 출력
//};
//void Print(B* b) { b-> print(); std::cout <<"Pointer ";} //virtual 하면 B*에 대해서만 만들어놓으면 D도 사용 가능
//void Print(B& b) { b.print(); std::cout << "Refer ";} //virtual 하면 B*에 대해서만 만들어놓으면 D도 사용 가능
//
//class D : public B {
//public:
//    void print() { std::cout << "Derived"<< ' ';}
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
//#include <iostream>
//#include <string>
//
//struct A {
//    int x;
//    virtual void X() {std::cout << "X";} //이게 있어야 캐스팅 가능 -> Polymorphism이 가능하려면 virtual function 하나 이상 갖고 있어야 함
//};
//struct B : public A {
//    int y;
//};
//int main() {
//    A *a1 = new A;
//    A* a2 = new B; //컴파일 시간에 결정되는 건 A 인스턴스(x만 접근 가능)
////    B* b1 = new A; //이건 안됨
////    B* b = a2; //컴파일 시간에는 a2는 A인스턴스만 접근함 -> 오류, a2는 B를 가리키고 있긴 함(컴파일 시간엔 안됨)
//    B* b = dynamic_cast<B*>(a2); //error 안뜸
//    b-> X(); //X출력
//    if(b == nullptr)  std::cout << "error";
//    B* b1 = dynamic_cast<B*>(a1); //error(nullptr) -> 애초에 B와 연관이 업음
//    if(b1 == nullptr)  std::cout << "error"; //error 출력
//}
//#include <iostream>
//#include <queue>
//
//
//struct Student {
//    int id;
//    int math, eng;
//    Student(int num, int m, int e) : id(num), math(m), eng(e) {}    // 생성자 정의
//
//    // 그냥 점수에 상관 없이 학번기준 학번이 작은것이 Top 을 유지 한다
////    bool operator<(const Student& s) const {
////        return this->math > s.math; //이 뜻은 큰 놈이 뒤로 가야 함 -> 즉, 작은 놈부터 앞으로 간다. //수학성적 기준
////    }
//};
//struct Cmp {
//    bool operator() (Student s1, Student s2) {return s1.id > s2.id;} //작은 값부터
//};
//
//
//int main() {
//    std::priority_queue<Student, std::vector<Student>, Cmp> pq;
//
//    pq.push(Student(3, 100, 50));
//    pq.push(Student(1, 60, 50));
//    pq.push(Student(2, 80, 50));
//    pq.push(Student(4, 90, 50));
//    pq.push(Student(5, 70, 40));
//
//// 수학점수를 기준으로 작은 것이 먼저 출력이 된다 그 이유는 구조체 내부의 연산자 오버로딩에 있다
//    while (!pq.empty()) {
//        Student ts = pq.top(); pq.pop();
//        std::cout << "(학번, 수학 , 영어 ) : " << ts.id << ' ' << ts.math << ' ' << ts.eng << '\n';
//    }
//}
//#include<iostream>
//#include<algorithm>
//#include<array>
//using namespace std;
//
//bool compare(int a, int b) { return a > b; }
//
//int main(void) {
//    std::array<int, 10> arr1 = { 5, 4, 2, 1, 100, 32, 2, 4, 6, 9 };
//    std::array<int, 10> arr2 = { 5, 4, 2, 1, 100, 32, 2, 4, 6, 9 };
//    std::array<int, 10> arr3 = { 5, 4, 2, 1, 100, 32, 2, 4, 6, 9 };
//
//    // sort 함수
//    sort(arr1.begin(), arr1.end()); // 아무것도 안적으면  자연스레 오름차순 (디폴트)
//    cout << "std::sort(arr1, arr1 + 10)" << endl;
//    for (int val : arr1)
//    {
//        cout << val << " ";
//    }
//    cout << endl << endl;
//
//
//    // sort 함수와 일반 함수 이용
//    cout << "std::sort(arr, arr + 10, compare) : " << endl;
//    sort(arr2.begin(), arr2.end(), compare); //함수 넣어줄 수도 있다
//    for (int val : arr2)
//    {
//        cout << val << " ";
//    }
//    cout << endl << endl;
//
//
//    // sort 함수와 람다 함수 이용
//    cout << "std::sort(arr, arr + 10, [](int a, int b) {return a > b; })" << endl;
//    sort(arr3.begin(), arr3.end(), [](int a, int b) {return a > b; });
//    for (int val : arr3)
//    {
//        cout << val << " ";
//    }
//
//    return 0;
//}
//#include <iostream>
//#include <vector>
////#include <algorithm>
//int main() {
//    std::cout << [](int x, int y) -> int {return x + y; } (3, 2) //할당을 안하니까 리턴 타입을 선언해줄 곳이 없다 그래서 화살표로 하는 듯
//     << std::endl;
//    auto F1 = [](auto a, auto b, auto c)  {return a + b + c; };
//    std::cout << F1(10, 20, 30) << std::endl;
//
//    std::vector<int> v = { 1, 2, 3, 4, 5 };
//    std::for_each(v.begin(), v.end(),
////    [](int& element) { std::cout << element << std::endl; }); //레퍼런스 넣는다고 뭐가 다르다는 거지?
//                [](int& element) {element *= element;}); //이렇게 해도 안바뀐다 -> []는 외부에서 가져오는 변수 -> 함수 로컬 배리어블이 아님
//
//    std::for_each(v.begin(), v.end(), [](int element) {std::cout << element << " ";});
//
//}

#include <iostream>

using namespace std;

class parent {
public :
    void print1() {
        cout << "parent print1" << "\n";
    }
    virtual void print2() {
        cout << "parent print2" << "\n";
    }
    virtual void print3() {
        cout << "parent print3" << "\n";
    }
};

class child : public parent {
public :
    void print2() {
        cout << "child print2" << "\n";
    }
    void print3(int x) { //오버라이딩 아님-> 오버로딩 -> virtual 관계없어서 Base클래스 포인터를 통해서
        cout << "child print3" << "\n";
    }
};

int main() {
//    parent* p;
    child c;
//    p = &c; //정적
    parent* p = new child; //동적, 결국엔 기본클래스 포인터임
    
    p->print1(); //parent
    p->print2(); //virtual 따라서 런타임에 자식클래스에 접근
    p->print3();
//    p->print3(2);//오류-> 오버라이딩ㅇ은 파라미터 같아야 함
    c.print3(2); //이건 됨
    delete p;

}
