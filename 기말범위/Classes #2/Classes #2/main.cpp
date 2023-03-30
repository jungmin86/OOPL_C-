//
//  main.cpp
//  Classes #2
//
//  Created by Jungmin Kim on 2022/11/16.
//

//#include <iostream>
////
//class R {
//public:
//    int n, d;
//public: // 생성자, 소멸자는 public -> 외부에서 만들어야 하니까
//
//    R() : n(0), d(1) {}
//
//    R(int n) : n(n), d(1) {}
//    R(int n, int d)  {this->n = n; this->d = d;} //n이 둘 다 파라미터 n으로 해석 -> 오류
////    R(int n, int d) : n(n), d(d) {}
//    void Print() const { //const는 써주는 게 좋음
//        //Print 펑션 안에서는 operator * 펑션은 사용할 수 없음 -> const 펑션 안에서는 const 펑션만 사용 가능
//        //const 타입의 인스턴스는 const 함수만 call할수 있음
//        X(); //const는 가능
////        Y(); //non const는 콜할 수 없음
//        std::cout << "Const" << n << "/" << d << std::endl;
////        X(); //non const라서 안됨 -> const 펑션은 non const 콜 못함
//    }
//    void Print() { //const non const 오버로딩 가능 -> non const는 이거 쓰고 const 인스턴스는 위에꺼 콜
//        Y();
//        X(); //const, non const 상관없이 호출
//        std::cout << n << "/" << d << std::endl;
//    }
//    static int gcd(int num1, int num2) // int gcd(int num1, num2) -> 함수 파라미터 선언할 떈 타입 각각으로 지정
//            {
//                int min = (num1 < num2) ? num1 : num2; // 아규먼트 중 더 작은 수
//                int largestFactor = 1; //최대공약수라는 뜻
//                for (int i = 2; i <= min; i++) // 두개 중에 작은 수까지 반복
//                if (num1 % i == 0 && num2 % i == 0)
//                largestFactor = i; // Found larger factor -> 최대공약수
//                return largestFactor;
//
//            }
//    void X()  const{}
//    void Y()  {}
//    R operator *(R r1) const { return {n * r1.n, d * r1.d}; } //멤버펑션이 되면 인스턴스를 통해 메소드 구현 -> 파라미터 하나만 있으면 됨 -> 파라미터를 줄일 수 있음
//};
////
////R Div(R r1, R r2) { return {r1.n * r2.d, r1.d * r2.n};} //Non멤버 펑션
//R operator /(R r1, R r2) {
//    return {r1.n * r2.d , r1.d * r2.n};
//
//}
//int main() {
//
//    R r1, r2(5), r3(2,1), r4(1,2), r5, r6;
//    r1.Print();
//    r2.Print();
//    r3.Print();
//    r4.Print();
//
////    r5 = r3.Mul(r4); r5.Print();
//    r5 = r3 * r4; r5.Print(); //operator * 미쳤누
////    r6 = Div(r3, r4); r6.Print();
//    r6 = r3 / r4; r6.Print();
//
//    const R r7(3,5); r7.Print(); //const로 만들었으면 Print 함수에도 const가 붙어야 가능
//    //const 지우면 에러 -> r7 때문에 에러가 뜸 -> const 타입의 인스턴스는 const 함수만 콜할 수 있음
//    //const 함수는 const 인스턴스나 non const 인스턴스 모두 가능
//}


//#include <iostream>
//
//class R {
//public:
//    int n, d;
//public: // 생성자, 소멸자는 public -> 외부에서 만들어야 하니까
//
//    R() : n(0), d(1) {}
//
//    R(int n) : n(n), d(1) {}
////    R(int n, int d) : {n = n, d = d}; //n이 둘 다 파라미터 n으로 해석 -> 오류
////    R(int n, int d) : n(n), d(d) {}
//    R(int n, int d) : n(n) {this -> d = d;}
////    void Print() const { std::cout << n << std::endl; }
////    void Print() { std::cout << n << std::endl; }
//    void Print() const { std::cout << this -> n << "ㅇㅇ" << std::endl; } //그냥 n 출력한 것이랑 같은 결과
//    void Print();
//};
//void R::Print() { std::cout << this -> n << std::endl; } //non const
//
////R Div(R r1, R r2) { return {r1.n * r2.d, r1.d * r2.n};} //Non멤버 펑션
//R operator /(R r1, R r2) { return {r1.n * r2.d, r1.d * r2.n};}
//int main() {
//
//    R r1, r2(5), r3(2,1), r4(1,2), r5, r6;
//    const R r7; r7.Print();
//    r1.Print(); r2.Print(); r3.Print();
//    std::cout << &r1 << '\n' << &r2 << '\n' << &r3;
//}



//#include <iostream>
//class P {
//public:
//    int x,y;
//    P(int x, int y) : x(x), y(y) {}
//
////    bool operator==(const P& p) const{ //const이니까 메소드도 const여야 함
////        return (this->x == p.x && this->y == p.y);
////    }
//};
//
//bool operator==(const P& p1, const P& p) { //non멤버 펑션은 const 못붙임
//    return (p1.x == p.x && p1.y == p.y);
//}
//int main() {
//    const P p1(1,2), p2(1,2); //const이니까 메소드도 const여야 함
//    std::cout << (p1==p2);
////    std::cout << (p1==(p2));
//}

//#include <iostream>
//class P {
//public:
//    int x,y;
//    P(int x, int y) : x(x), y(y) {}
//
//    bool operator==(const P& p) const{ //const이니까 메소드도 const여야 함
//        return (this->x == p.x && this->y == p.y);
//    }
//    P operator-() const{ //const 상수를 다루기 위함 -> 단항연산자라서(부호) 파라미터가 없음
//        return {-x,-y};
//    }
//};
//
////bool operator==(const P& p1, const P& p) {
////    return (p1.x == p.x && p1.y == p.y);
////}
//int main() {
//    const P p1(1,2), p2(-1,-2); //const이니까 메소드도 const여야 함
//    std::cout << (p1== -p2); //원래 마이너스는 피연산자 1개짜리 부호만 바꿔주는 단항연산자
//        //but  x도 바뀌고 y도 바뀌어야 함
//}

//
//#include <iostream>
//class Point {
//public:
//    double x;
//    double y;
//    Point(double xx, double yy) : x(xx), y(yy) {}
//    double get_x() const {
//        return this -> x;
//    }
//    double get_y() const {
//        return this -> y;
//    }
//    Point operator+(const Point& p2) {
//        double xxx = this->x + p2.x;
//        double yyy = this->y + p2.y;
//        return {xxx, yyy}; }
//};
////Point operator+(const Point& p1, const Point& p2) {
////    double xxx = p1.x + p2.x;
////    double yyy = p1.y + p2.y;
////    return {xxx, yyy}; }
//std::ostream& operator<<(std::ostream& os, const Point& pt) { os << '(' << pt.get_x() << ',' << pt.get_y() << ')'; return os;
//} // 파라미터로 들어오는 pt가 const니까 인스턴스 펑션은 const만 부를 수 있음
//int main() {
//    Point p1(1,1), p2(2,2);
//    std::cout << (p1+p2);
//}


//#include <iostream>
//class Point {
//public:
//  double x;
//  double y;
//    Point(double xx, double yy): x(xx), y(yy) {}
//Point operator+(const Point& ) const; //선언은 타입만 해줘도 됨 (const로 선언했으면)
//
//};
//Point Point::operator+(const Point& p) const{ //const로 정의
//double xxx = x + p.x;
//double yyy = y + p.y;
//  return {xxx,yyy};
//}
//std::ostream& operator<<(std::ostream& os, const Point& pt) { os << '(' << pt.x << ',' << pt.y << ')'; return os;}
//
//int main() {
//    Point pt1(1,1);
//    const Point pt2(2,3);
//    std::cout << (pt1.operator+(pt2)); //pt2는 const여도, 아니어도 상관없음 (const 파라미터는 둘 다 받을 수 있다?)
//}

//#include <iostream>
//class P {
//public:
//    static int cnt; //변수는 선언만 해주고
//    int x,y; //인스턴스 멤버
//    P(int x, int y) : x(x), y(y) {cnt++;}
//    static  void PrintCnt() { //인스턴스와 관계없는 펑션 -> 함수는 그냥 정의 가능
//        std::cout << cnt <<'\n';
////        std::cout << x; //인스턴스와 관계 있는 멤버는 static function에 사용 불가능
//    }
//    void Print() const{
//        std::cout << cnt <<'\n'; //static 멤버는 인스턴스와 관계 없으니 맘껏 사용 가능
//        std::cout << x <<"," <<y << '\n';
//    }
//
////    bool operator==(const P& p) const{ //const이니까 메소드도 const여야 함
////        return (this->x == p.x && this->y == p.y);
////    }
//    P operator-() const{ //const 상수를 다루기 위함
//        return {-x,-y};
//    }
//};
//int P::cnt = 0; //전역범위에서 정의
//
//int main() {
//    const P p1(1,2), p2(-1,-2); //const이니까 메소드도 const여야 함
//    std::cout << p1.x <<',';
//    std::cout << P::cnt << '\n'; // 인스턴스 만들어질 때마다 1씩 증가 (p1, p2 )
////    std::cout << P::x;
//    P::PrintCnt(); // cnt는 스태틱 멤버
//    p1.Print();
//}
//
//#include <iostream>
//class P {
//    int x,y; //인스턴스 멤버
//public:
//    P(int x, int y) : x(x), y(y) {}
//
//friend void Print(const P& p);
//};
//void Print(const P& p){ //인스턴스 멤ㅁ버 아님
//    std::cout << p.x << " " << p.y << std::endl; //접근. 가능
//}
//int main() {
//    P p1(1,2), p2(-1,-2);
//    Print(p2); //non const 펑션(애초에 멤버 펑션이 아니면 const를 지정 못함)에 파라미터로 들어가는 인스턴스는 꼭 const 아니어도 됨
//}

//#include <iostream> // Static members are instance independent.
//#include <cmath>
//class Point {
//    double x; double y;
//public:
//
//    Point(double xx, double yy): x(xx), y(yy) {}
//    static double pi;
////    static double Distance(double x1, double y1, double x2, double y2);
//    static double Distance(double x1, double y1, double x2, double y2) { //static 함수는 정의도 안에서 가능
//    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)); }
//
//    double getX() { return x; }
//    double getY() { return y; }
//    };
//    double Point::pi = 3.14159;
////    double Point::Distance(double x1, double y1, double x2, double y2) {
////    return sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2)); }
//int main() {
//    Point p1(10.,5.), p2(15.,25.); double r = 5;
////    p1.x=10; p1.y=5; p2.x=15; p2.y=25;
//    std::cout << Point::Distance(p1.getX(), p1.getY(), p2.getX(), p2.getY()) << std::endl; std::cout << Point::pi*r*r << std::endl;
//    }

//#include <iostream>
//class  Widget;
//class Jung {
//    int v;
//public:
//    Jung(int xx) : v(xx) {}
//    void kim(const Widget& w); //위에 선언해줘야 프렌드 선언 가능(인스턴스 멤버인 경우)
//};
//
//class Widget {
//  int data;
//public:
//  Widget(int d): data(d) {}
//  friend class Gadget; //Gadget의 멤버는 모두 widget.data에 접근 가능
//    friend void Jung::kim(const Widget& w); //이거보다 위에 함수가 있어야 함
//    friend void Jungmin(); //전역함수는 위에 없어도 됨
//};
//void Jung::kim(const Widget &w) { //friend 선언이 된 뒤에 w.data에 접근 가능
//    std::cout <<w.data << "!";
//}
//void Jungmin() {}
//
//class Gadget {
//    int value;
//public:
//    Gadget(const Widget& w): value(w.data) {}
//    int get() const { return value; }
//    bool compare(const Widget& w) const { return value == w.data;
//    }};
//
//
//int main() {
//    Widget wid{45}; //uniform initialization
//    Gadget gad{wid};
//    Jung kk{1};
//    kk.kim(wid); //45!
//    std::cout << gad.get() << '\n'; //45
//    if (gad.compare(wid))
//        std::cout << "They are the same" << '\n';
//}
//
//#include <iostream>
//#include <string>
//int main() {
//    std::string a1_s, a2_s, add_num;
//    a1_s = "1234";
//    a2_s = "5678";
//    int sum = 0; //같은 자리에 있는
//    std::string result;
//    while (!a1_s.empty() || !a2_s.empty() || sum > 0)
//        {
//            if (!a1_s.empty())
//            {
//                std::cout << typeid(a1_s[a1_s.length()-1]).name();
//                sum += a1_s[a1_s.length()-1] - 48; //sum에 a1_s에서 가장 마지막 위치에 있는 0~9사이의 정수를 더해준다.
//               
//                a1_s.pop_back();
////                std::cout << sum << " a1_s" << '\n';
//            }
//            if (!a2_s.empty())
//            {
//                sum +=  a2_s[a2_s.length()-1]  - 48;
//                a2_s.pop_back();
////                std::cout << sum << " a2_s" << '\n';
//            }
////            std::cout << sum%10 << " sum" << '\n';
//            add_num = std::to_string(sum%10);
//            result.append(add_num);
//            sum /= 10; //sum이 10이 넘어가는 경우에는 앞 자리의 숫자들을 연산할 때 1을 더해줌
//        }
//        std::reverse(result.begin(), result.end());
//    std::cout << result;
//}
//7.    큰 범위의 0과 양의 정수를 저장하는 BigUnsigned 클래스를 아래와 같은 특징을 가지도록 정의하라. (테스트 코드도 작성해서 결과로 포함)
//(a) 정수를 저장하는 멤버는 std::vector로 각 요소는 정수의 각 자릿수로 0-9까지의 정수를 가진다.
//(b) 기본 생성자는 정수를 0으로 초기화한다.
//(c) unsigned int 형을 파라메터로 하는 생성자를 가지며, 내부 정수를 인수로 초기화한다.
//(d) std::string 형을 파라메터로 하는 생성자를 가지며, 내부 정수를 인수로 초기화하며 인수는 n번째 위치의 문자는 내부 정수의 n번째 자릿수이다.
//(e) +연산자로 덧셈이 가능하며, std::cout과 <<을 이용하여 정수의 출력이 가능하다.
//

//#include <iostream>
//#include <vector>
//class Account {
//    int id, name, deposit;
//public:
//    Account(int x, int y, int z) : id(x), name(y), deposit(z) {}
//
//};
//int main() {
//    int id, name, deposit;
//    std::vector<Account> v1; //이건 됨 (v1만 선언해준 것)
////    std::vector<Account> v2(100); // 이건 오류 남 -> Account를 100개 만들어야 하는데 -> 디폴트 컨스트럭터가 없으니 초기화할 값이 없음
//    std::vector<Account*> v3(2); //이건 됨 -> 런타임에 만드는 것임 (동적할당) v3의 요소들은 포인터들
//    for (int i = 0; i<v3.size(); i++) {
//        std::cin >> id >> name >> deposit;
//        v3[i]/* 포인터 */ = new Account(id, name, deposit); //런타임 과정에서 만들어주면 됨 -> 생성자 발동
//    }
//    for (int i = 0; i < v3.size(); i++)
//        delete v3[i]; //요소(포인터)를 삭제해줘야 함
//
//}

//#include <iostream>
//class A {
//    int x;
//public:
//    A (int x): x(x) {std::cout << "con" << std::endl;}
//    A(const A& a) { //파라미터가 클래스 인스턴스인 ???? 생성자 --> copy constructor -> 생성과 동시에 다른 인스턴스로 초기화할 때 //레퍼런스 필수
//        x = a.x;
//        std::cout << "copy" << std::endl;
//    }
//    A* operator=(const A& a) {
//        x = a.x;
//        std::cout << "assign" << std::endl;
//        return this;
//    }
//};
//void F(A a) {} //F(a1)을 하면 a = a1이 아니라 copy constructor 발동 //&(레퍼런스) 붙이면 copy 출력 안함
//int main() {
//    A a1(1); A a2(a1);
//    F(a1); //"copy" 출력 ㄷ ㄷ
//    a2 = a1;
//}
