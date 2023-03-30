//
//  main.cpp
//  Classes #1
//
//  Created by Jungmin Kim on 2022/11/14.
//
//182
//#include <iostream>
//#include <string>
//using namespace std;
//using std::string;
//int main() {
//    string name = "joe";
//    std::cout << name << '\n';
//    name = "jane";
//    std::cout << name << '\n';
//    string name1 = "joe", name2;
//    name2 = name1;
//    std::cout << name1 << " " << name2 << '\n';
//}


//184
//#include <iostream>
//#include <string>
//void P(const char* st) { //C스타일
//    std::cout << st;
//}
//int main(int argc, const char * argv[]) {
//    std::string str = "abc"; //C++의 문자열
////    P(str);
//    P(str.c_str()); //이렇게 C스타일로 바꿔줭야 함
//}

//186
//#include <iostream>
//#include <string>
//#include <fstream>
//
//int main() {
//    using namespace std;
//    int x;
////    cin.operator>>(x);
//    cout.operator<< ('\n'); //이개 왜 10이 나오지?
//    std::cout << x << '\n';
//}


// 187
////#include <iostream>
////#include <string>
////int main() {
////std::string line;
////std::cout << "Please enter a line of text: ";
////std::cin >> line; //띄어쓰기 뒷부분은 안나옴
////std::cout << "You entered: \"" << line << "\"" << '\n';
////}
//#include <iostream>
//#include <string>
//int main() {
//std::string line;
//std::cout << "Please enter a line of text: ";
//getline(std::cin, line); //띄어쓰기 뒷부분까지 나옴
//std::cout << "You entered: \"" << line << "\"" << '\n';
//}

//189
//#include <iostream>
//#include <string>
//#include <fstream>
//
//int main() {
//    int x = 10;
//    double y = 12.345;
//    std::ofstream ofs("1234.txt"); // 생성자(컨스트럭터) -> 파라미터 넘겨줄 수 있음
//    // 여러 번 실행해도 초기화됨
//    ofs << x << " " << y << std::endl; //여러 번 실행해도 한 줄만 출력
//    std::cout << x <<" " << y << std::endl;
////    int x;
////    double y;
////    std::ifstream ifs("123.txt");
////    ifs >> x >> y;
//
//    std::cout << x << " " << y;
//}
//
//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//void print_vector(const std::vector<int>& vec) {
//    std::cout << "{";
//    int len = vec.size();
//    if (len > 0) {
//     for (int i = 0; i < len - 1; i++)
//        std::cout << vec[i] << ",";
//    std::cout << vec[len - 1];
//    }
//  std::cout << "}\n";
//}
//void save_vector(const std::string& filename, const std::vector<int>& vec)
//{
//  std::ofstream out(filename);
//  if (out.good()) {
//     int n = vec.size();
//     for (int i = 0; i < n; i++)
//         out << vec[i] << " "; // Space delimited out << '\n’;
//      out.close();
//}
//  else std::cout << "Unable to save the file\n";
//}
//void load_vector(const std::string& filename, std::vector<int>& vec) {
//  std::ifstream in(filename);
//    if (in.good()) {
//        vec.clear();
//        int value;
//        while (in >> value) vec.push_back(value);
//        in.close();
//}
//else std::cout << "Unable to load in the file\n"; }
//
//int main() {
//    std::vector<int> list;
//    bool done = false;
//    char command;
//    while (!done) {
//        std::cout << "I)nsert <item> P)rint "
//        << "S)ave <filename> L)oad <filename> "
//        << "E)rase Q)uit: ";
//        std::cin >> command;
//        int value;
//        std::string filename;
//        switch (command) {
//        case 'I':
//        case 'i':
//                std::cin >> value; list.push_back(value);
//                break;
//       case 'P':
//       case 'p':
//                print_vector(list); break;
//       case 'S':
//       case 's':
//                std::cin >> filename;  save_vector(filename, list);
//                break;
//       case 'L':
//        case 'l':
//                std::cin >> filename; load_vector(filename, list);
//                break;
//        case 'E':
//        case 'e':
//                list.clear(); break;
//       case 'Q':
//       case 'q':
//          done = true;
//                break;
//
//        }
//    }
//}

//#include <iostream>
//#include <fstream>
//int main() {
//   std::ofstream ofs;
//   ofs.open("123.bin", std::ios::binary);
//   if(ofs.good()) {
//       int x = 65;
//       ofs.write((const char*)&x, sizeof(int));
//       ofs.close();
//}
//    std::ifstream ifs;
//    ifs.open("123.bin", std::ios::binary);
//    if(ifs.good()) {
//        int x;
//        ifs.read((char *)&x, sizeof(int));
//        std::cout << x << std::endl;
//        ifs.close();
//} }

//#include <iostream>
//#include <string>
//#include <fstream>
//#include <vector>
//void ReadCsv(std::string FileName, std::vector<std::vector<std::string>>& Data)
//{
//    std::ifstream ifs;
//
//    ifs.open(FileName);
//    if(!ifs.is_open()) return;
//
//    std::string LineString = "";
//    std::string Delimeter = ",";
//    while(getline(ifs, LineString))
//    {
////        std::cout << LineString <<'\n';
//        std::vector<std::string> RowData;
//        unsigned int nPos = 0, nFindPos;
//        do {
//            nFindPos = LineString.find(Delimeter, nPos);
//            if(nFindPos == std::string::npos) nFindPos = LineString.length();
//
//            RowData.push_back(LineString.substr(nPos, nFindPos-nPos));
//            nPos = nFindPos+1;
//
//        } while(nFindPos < LineString.length());
//        for (int i = 0; i < RowData.size(); i++)
//        std::cout << RowData[i] << " ";
//        Data.push_back(RowData);
//    }
//
//    ifs.close();
//}
//
//
//int main() {
//    std::string Filename = "diabetes.csv";
//    std::vector<std::vector<std::string>> Data;
//    ReadCsv(Filename, Data);
//    std::cout << Data.size();
//}
//195
//#include <iostream>
//#include <complex>
//int main() {
//    std::complex<double> c(1.0,1.0); //1+1i
//
//    std::cout << c << std::endl;
//    std::cout << c.real() << std::endl; //member function
//    std::cout << c.imag() << std::endl;
//    std::cout << abs(c) << " " << arg(c) << std::endl; // non-member function
//    //arc(c) -> 파이/4 -> 0.78? 검색
//}

//#include <iostream>
//#include <complex>
//int main() {
//    std::complex<double> c1(2.0, 3.0), c2(2.0, -3.0);
//        double real1 = c1.real(),
//    imag1 = c1.imag(), real2 = c2.real(), imag2 = c2.imag();
//    std::cout << c1 << " * " << c2 << " = " << real1*real2 - imag1*imag2 << " , " << imag1*real2 + real1*imag2
//    << '\n';
//    std::cout << c1 << " * " << c2 << " = " << c1*c2 << '\n';
//}

//202
//#include <iostream>
//class Point {
//private: // 접근하는 데 필요 -> private: 클래스 내부에서만 접근 가능
//    //default: private
//    double x, y;
//private: //이런 식으로 병렬식으로 가능
//    double c,d;
//
//public:
//    void Set(double a, double b) {
//        x = a; //x를 따로 정의 안해도 클래스 내부 멤버 쓸 수 있음
//        y = b;
//    }
//    void Print() {
//        std::cout << "(" << x<<"," <<y << ")"<<'\n';
//    }
//};
//
//int main() {
//    Point p1, p2, p3;
//
////    p1.x = 10; //public이 있어야 가능
////    p1.c = 10;
//    p1.Set(10,20); //x에 직접 접근하지 않고 가능
//    p2.Set(1,5);
////    p3 = p1 + p1; //오류남 -> + 오퍼레이터에 대한 정의 필요 (오퍼레이터 오버로딩)
//    //=은 오류 안남
//    p3 = p1; // p1의 xy랑 p3의 xy는 다른 것
//    //x,y는 인스턴스마다 구분됨 -> 인스턴스 멤버
//    p1.Print();
//    p3.Print();
//
//}

//#include <iostream>
//using namespace std;
//void Sq(char* x, int size) {
//   cout << x << endl; // 문자열 전체가 나옴 -> 첫번째 주소가 아님 ㄷ ㄷ ㄷ ㄷ
//   *x = 'e';
//
//    for (int i = 0; i < size; ++i) {
//        cout << (x + i) << endl; // 주소가 안나오고 실체가 나옴 -> 해당하는 문자열부터 뒤까지 다 나옴 ebc, bc, c
//        cout << *(x + i) << endl; //인덱스에 해당하는 문자열 나옴 -> e, b, c
//    }
//}
//
//int main() {
//   char x[] = { 'a','b','c' };
//
//   Sq(x, 3);
//   for (int i = 0; i < 3; ++i)
//      cout << x[i] << ' '; // e  b c 나옴
//}

//#include <iostream>
//using namespace std;
//void Sq(char* x, int size) {
//   cout << static_cast<void*>(x) << endl; //이렇게 해줘야 주소가 출력됨
//   *x = 'e';
//
//   for (int i = 0; i < size; ++i)
//      cout << static_cast<void*>(x + i) << endl; //char 1바이트씩 올라감
//}
//
//int main() {
//   char x[] = { 'a','b','c' };
//
//   Sq(x, 3);
//   for (int i = 0; i < 3; ++i)
//      cout << x[i] << ' ';
//}

//209 생성자
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

//#include <iostream>
//
//class A{
//    int x;
//public:
//    A() :x(0) {}
//    A(int x) : x(x) {}
//    void Print() {
//        std::cout << x << std::endl;
//    }
//};
//
//int main() {
//    A a1;
//    A a2(1.5); //괄호는 알아서 잘려나감(1)
//    a2.Print();
//    A a3{};
////    A a4{1.0}; //오류남
//}

//#include <iostream>
//class A {
//    int x ;
//public: // 생성자, 소멸자는 public -> 외부에서 만들어야 하니까
////    A() { //밑에 A a1;을 가능하게 함
////        x = 0;
////    }
////    A() : x(0) {} // 생성자의 경우 이렇게 쓰는 거 가능 ㅋㅋㅋㅋㅋ
////    A() : x(0) {r = x} //레퍼런스 지정이 아니라 대입연산자 -> 인스턴스 생성과 동시에 초기화가 아님
//    A() : x(0) {}
//
////    A(int xx) { //생성자
////        x = xx;
////    }
////    A(int xx) : x(xx) {} //
//    A(int xx) : x(xx) {}
//
//    void Print() {
//        std::cout << x << std::endl;
//    }
//};
//int main() {
//
//    A a1, a2(10);
//
//    a1.Print();
//    a2.Print();
//
//    a2 = {5}; a2.Print(); //다른 건 헷갈리니까 브레이스 형식의 생성자 주로 사용
//    a2 = (6); a2.Print();
//    a2 = A(7); a2.Print();
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
//    R(int n, int d) : n(n), d(d) {}
//    void Print() {
//        std::cout << n << "/" << d << std::endl;
//    }
//    R Mul(R r1) { return {n * r1.n, d * r1.d}; } //멤버펑션이 되면 인스턴스를 통해 메소드 구현 -> 파라미터 하나만 있으면 됨 -> 파라미터를 줄일 수 있음
//};
////R Mul(R r1, R r2) { return {r1.n * r2.n, r1.d * r2.d}; }
//int main() {
//
//    R r1, r2(5), r3(2,1), r4(1,2), r5;
//    r1.Print();
//    r2.Print();
//    r3.Print();
//    r4.Print();
//
////    r5 = Mul(r3, r4); r5.Print(); //2/2
//    r5 = r3.Mul(r4); r5.Print();
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
//    R(int n, int d) : n(n), d(d) {}
//    void Print() {
//        std::cout << n << "/" << d << std::endl;
//    }
//    R operator *(R r1) { return {n * r1.n, d * r1.d}; } //멤버펑션이 되면 인스턴스를 통해 메소드 구현 -> 파라미터 하나만 있으면 됨 -> 파라미터를 줄일 수 있음
//};
//
////R Div(R r1, R r2) { return {r1.n * r2.d, r1.d * r2.n};} //Non멤버 펑션
//R operator /(R r1, R r2) { return {r1.n * r2.d, r1.d * r2.n};}
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
//}

//#include <iostream>
//
//class A{
//    int x, y;
//public:
//    A() :x(0), y(1) {}
//    A(int x) : x(x), y(20) {}
//    void Set(int xx) {
//        x = xx;
//    }
//    void Print() {
//        std::cout << x << " " << y << '\n';
//    }
//};
//
//int main() {
//    A a1;
//    A a2(3);
//    a1.Print(); //0 1
//    a1 = a2;
//    a2.Set(1);
//
//    a1.Print();//3 20
//    a2.Print();// 1 20
//}


#include <iostream>
#include <vector>
#include <initializer_list>

class B {
public:
   std::vector<int> v;
    B(std::initializer_list<int> l) : v(l) {}
    void Print() {
        for (int i = 0; i < v.size(); i++)
            std::cout << v[i] << " ";
    }
};
int main( ) {
    B b1{1, 2, 3, 4, 7};
    b1.Print();
}

