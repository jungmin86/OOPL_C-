//
//  main.cpp
//  Assignment#05
//
//  Created by Jungmin Kim on 2022/11/18.
//


//1.    아래의 코드는 csv (comma-separated values) 파일을 읽어서 vector로 저장하는 함수이다. https://www.kaggle.com/saurabh00007/diabetescsv에서 diabetes.csv을 다운로드 받아서 동작을 확인하고 (main 함수 작성), 함수의 동작을 설명하라.
//#include <iostream>
//#include <string>
//#include <fstream>
//#include <vector>
//void ReadCsv(std::string FileName, std::vector<std::vector<std::string>> &Data)
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
//}
    
    //2.    아래의 코드에서 IntPoint는 2차원 평면상의 점을 표현하는 클래스이며 x, y는 평면상의 좌표를 저장하는 멤버이며, Rectangle은 회전되지 않은 직사각형 표현하는 클래스로 왼쪽-코너점을 corner로, 폭과 높이를 각각 width와 height로 저장한다. 주석의 내용과 같이 동작하도록 코드를 완성하고 동작을 확인할 main 함수를 작성하라.
//    #include <iostream>
//    #include <cmath>
//    #include <algorithm>
//    class IntPoint {
//    public:
//        int x; // x 좌표
//        int y; // y 좌표
//        IntPoint(int x, int y): x(x), y(y) {}
//    };
//    class Rectangle {
//        IntPoint corner; // 직사각형의 왼쪽-아래 코너점
//        int width; // 직사각형의 폭
//        int height; // 직시각형의 높이
//    public:
//        Rectangle(IntPoint pt, int w, int h):
//            corner(pt),
//            width((w < 0) ? 0 : w), height((h < 0) ? 0 : h) {}
//        int perimeter() { //둘레
//            return 2*width + 2*height;
//        }
//        int area() { //넓이
//            return width * height;
//        }
//        int get_width() { //폭 반환
//            return width;
//        }
//        int get_height() { //높이 반환
//            return height;
//        }
//        // 현재 인스턴스 사각형과 r이 겹쳐있다면 true, 그렇지 않으며 false
//        bool intersect(Rectangle r) {
//            int left_x = std::max(this->corner.x,r.corner.x);
//            int right_x = std::min(this->corner.x+ this ->width, r.corner.x+r.width);
//            int left_y = std::max(this->corner.y,r.corner.y);
//            int right_y = std::min(this->corner.y+ this ->height, r.corner.x+r.height);
//            if ((left_x <= right_x) && (left_y <= right_y)) return true; //경계포함 겹치는지 여부 -> left bottom의 x값 중 큰 값이 right top의 x값 중 작은 값보다 작고, left bottom의 y값 중 큰 값이 right top의 y값 중 작은 값보다 작아야 겹치는 부분이 발생한다.
//            return false;
//        }
//        // 대각선의 길이(int 형)를 반환
//        int diagonal() {
//            int result = sqrt(pow(width,2) + pow(height,2)); //폭의 제곱과 높이의 제곱을 루트한 값
//            return result;
//        }
//        // 사각형의 중심점의 좌표를 IntPoint 형으로 반환
//        IntPoint center() {
//            int x1 = corner.x + (width/2);
//            int y1 = corner.y + (height/2);
//            return {x1,y1};
//        }
//    //// 현재 인스턴스 사각형의 내부(경계포함)에 pt가 있으면 true, 그렇지 않으면 false
//        bool is_inside(IntPoint pt) {
//            if((pt.x >= corner.x) && (pt.x <= (corner.x + width)) && (pt.y >= corner.y) && (pt.y <= corner.y+height))
//                return true;
//            return false;
//        }
//    };
//    void Print(const IntPoint& pt) {
//        std::cout << '(' << pt.x << ',' << pt.y << ')' << '\n';
//    }


//#include <iostream>
//#include <cmath>
//class IntPoint {
//public:
//    int x; // x 좌표
//    int y; // y 좌표
//    IntPoint(int x, int y): x(x), y(y) {}
//};
//class Rectangle {
//    IntPoint corner; // 직사각형의 왼쪽-아래 코너점
//    int width; // 직사각형의 폭
//    int height; // 직시각형의 높이
//public:
//    Rectangle(IntPoint pt, int w, int h):
//        corner(pt),
//        width((w < 0) ? 0 : w), height((h < 0) ? 0 : h) {}
//    int perimeter() {
//        return 2*width + 2*height;
//    }
//    int area() {
//    return width * height;
//    }
//    int get_width() {
//        return width;
//    }
//    int get_height() {
//        return height;
//    }
//// 현재 인스턴스 사각형과 r이 겹쳐있다면 true, 그렇지 않으며 false
//    bool intersect(Rectangle r) {
//        int left_x = (this->corner.x > r.corner.x )? this->corner.x: r.corner.x;
//        int left_y = (this->corner.y > r.corner.y )? this->corner.y: r.corner.y;
//        int right_x = (this->corner.x < r.corner.x )? this->corner.x: r.corner.x;
//        int right_y = (this->corner.y < r.corner.y )? this->corner.y: r.corner.y;
//        if ((left_x <= right_x) || (left_y <= right_y)) return true;
//        return false;
//    }
//// 대각선의 길이(int 형)를 반환
//    int diagonal() {
//        int result = sqrt(pow(width,2) + pow(height,2));
//        return result;
//    }
//// 사각형의 중심점의 좌표를 IntPoint 형으로 반환
//    IntPoint center() {
//        int x1 = this->corner.x + width/2.;
//        int y1 = this->corner.y + height/2.;
//        return {x1, y1};
//    }
//// 현재 인스턴스 사각형의 내부(경계포함)에 pt가 있으면 true, 그렇지 않으면 false
//    bool is_inside(IntPoint pt) {
//        if ((pt.x >= corner.x) && (pt.x <= corner.x + width) && (pt.y >= corner.y) && (pt.y <= corner.y + height)) return true;
//        return false;
//    }
//};
//
//
//    int main() {
//        IntPoint pt1(4,2);
//        Rectangle r1(pt1, 3,2);
//        IntPoint pt2(3,2);
//        Rectangle r2(pt2, 1, 1);
//        IntPoint pt3(4,5);
//        std::cout << r1.perimeter() << '\n';
//        std::cout << r1.area()<< '\n';
//        std::cout << r1.get_width() << '\n';
//        std::cout << r1.get_height() << '\n';
//        std::cout << std::boolalpha << r1.intersect(r2) << '\n';
//        std::cout << r1.diagonal() << '\n';
//        r1.center();
//        std::cout << r1.is_inside(pt2) << '\n';
//    }
    
    //3.    아래의 main 함수가 주석과 같이 동작하도록 Rational 클래스와 필요한 함수들을 정의하라.
    #include <iostream>
    #include <vector>
    #include <string>
    
    class Rational {
    public:
        int top, bot;
        Rational() : top(0), bot(1) {};
        Rational(const int& input) : top(input), bot(1) {};
        Rational(const int& input1, const int& input2) : top(input1), bot(input2) {};
    
        static int gcd(int num1, int num2) // int gcd(int num1, num2) -> 함수 파라미터 선언할 떈 타입 각각으로 지정
        {
            Y();
    //        X(); //스태틱 안에는 스태틱 함수만 들어올 수 있다. (인스턴스와 무관한 함수여야 하니까)
            //const는 인스턴스와 관련있지만 수정이 안되는 것일 뿐
            int min = (num1 < num2) ? num1 : num2; // 아규먼트 중 더 작은 수
            int largestFactor = 1; //최대공약수라는 뜻
            for (int i = 2; i <= min; i++) // 두개 중에 작은 수까지 반복
            if (num1 % i == 0 && num2 % i == 0)
            largestFactor = i; // Found larger factor -> 최대공약수
            return largestFactor;
    
        }
    
        Rational Add(const Rational& r) const{ //const를 통해서 멤버 변수인 top, bot이 변하지 않게끔 설정
            int new_denominator = ((this-> bot) * r.bot);
            int new_numerator = ((this->top) * r.bot) + (r.top * (this->bot));
            Rational result(new_numerator/gcd(new_numerator, new_denominator), new_denominator/gcd(new_numerator, new_denominator));
            return result;
        }
    
        bool Equal(Rational r) const{ //const를 통해서 멤버 변수인 top, bot이 변하지 않게끔 설정
            int thistop = this->top / gcd(this->top, this->bot); //자신의 인스턴스 변수의 분자를 미리 약분해서 thistop에 할당
            int thisbot = this->bot / gcd(this->top, this->bot); //자신의 인스턴스 변수의 분모를 미리 약분해서 thisbot에 할당
            int rtop = r.top / gcd(r.top, r.bot); //파라미터로 입력받은 인스턴스 변수의 분자를 미리 약분해서 rtop에 할당
            int rbot = r.bot / gcd(r.top, r.bot); //파라미터로 입력받은 인스턴스 변수의 분모를 미리 약분해서 rbot에 할당
            if((thistop == rtop) && (thisbot == rbot)) return true;
            return false;
        }
        void X() const{}
        static void Y() {}
    
    };
    
    
    void Print(const Rational& r) { //멤버 함수가 아니므로 클래스 밖에서 정의, 분수 및 분모를 최대공약수로 약분해서 출력하는 함수
        int numerator = r.top / Rational::gcd(r.top, r.bot);
        int denominator = r.bot / Rational::gcd(r.top, r.bot);
        std::cout << numerator << "/" << denominator <<'\n';
    }
    
    void Print(const std::vector<Rational>& v) { // Rational 타입을 엘리먼트로 가지는 벡터를 출력하는 함수
//        for(int i = 0; v[i].bot != 0; i++) { //벡터 안에 있는 엘리먼트를 하나씩 꺼냄
//            Rational r1 = v[i]; //Rational 엘리먼트를 r1에 할당, 생성자에 의해 숫자가 1개뿐이면 top에 할당하고, bot은 1이 된다.
//            int numerator = r1.top / Rational::gcd(r1.top, r1.bot);
//            int denominator = r1.bot / Rational::gcd(r1.top, r1.bot);
//            if(v[i+1].bot == 0) { //출력 마지막에 ,(콤마)가 아닌 줄바꿈을 해주기 위한 조건문
//                std::cout << numerator << "/" << denominator <<'\n';
//                break;
//            }
//            std::cout << numerator << "/" << denominator <<","; //약분된 채로 출력
//
//        }
        for (auto r : v) Print(r);
    
    }
    
    Rational Mul(const Rational& r1, const Rational& r2) { //해당 함수 처리 과정에서 r1과 r2의 인스턴스 변수 등은 변하지 않는다
        int numerator = (r1.top * r2.top)/ Rational::gcd(r1.top * r2.top, r1.bot * r2.bot) ;
        int denominator = (r1.bot * r2.bot) / Rational::gcd(r1.top * r2.top, r1.bot * r2.bot) ;
        Rational result(numerator, denominator);
        return  result;
    }
    
    std::string NewString(std::string s1) {
        std::string s2 = "***"+s1+"***"; //cstring이 아니라 string class이기 때문에 string의 더하기 연산 가능
        return s2;
    
    }
    
    int main () {
        Rational r1, r2(5), r3(2, 8), r4;
        Print(r1); // prints 0/1
        Print(r2); // prints 5/1
        Print(r3); // prints 1/4
    
        r4 = Mul(r2, r3); // r4 = r2*r3
        Print(r4); // prints 5/4
        r4 = r2.Add(r3); // r4 = r2+r3
        Print(r4); // prints 21/4
    
        if(r4.Equal(Rational{42, 8})) std::cout << "Equal" << std::endl;
    
        std::vector<Rational> v1;
        v1.push_back({1}); v1.push_back({3, 7});
        Print(v1); // prints 1/1, 3/7
    
        std::string s1 = "C++ programming", s2;
        s2 = NewString(s1); // s2: "***C++ programming***"
        std::cout << s2 << std::endl; // prints ***C++ programming***
    }

