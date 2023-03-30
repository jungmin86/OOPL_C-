//
//  text.cpp
//  Classes #3
//
//  Created by Jungmin Kim on 2022/12/03.
//

//#include "text.hpp"
//#include <iostream>
//
//Text::Text(const std::string& t): text(t) {}
//
//std::string Text::get() const {
//    return text;
//}
//void Text::append(const std::string& extra) {
//    text += extra;
//}
//
//#include "FANCYTEXT.hpp"
//
//FancyText::FancyText(const std::string& t, const std::string& left, const std::string& right, const std::string& conn) :
//Text(t), left_bracket(left), right_bracket(right), connector(conn) {}
//std::string FancyText::get() const {
//    return left_bracket + Text::get() +right_bracket;
//}
//void FancyText::append(const std:: string& extra) {
//    Text::append(connector+extra);
//}
//
//#include "FIXEDTEXT.hpp"
//
//FixedText::FixedText() : Text("FIXED") {}
//void FixedText::append(const std::string &) {}
//
//int main() {
//    Text t1("plain");
//    FancyText t2("fancy", "<", ">", ","); FixedText t3;
//    std::cout << t1.get() << '\n';
//    std::cout << t2.get() << '\n';
//    std::cout << t3.get() << '\n';
//    t1.append("A");
//    t2.append("A");
//    t3.append("A");
//    std::cout << t1.get() << '\n';
//    std::cout << t2.get() << '\n';
//    std::cout << t3.get() << '\n';
//    t1.append("B");
//    t2.append("B");
//    t3.append("B");
//    std::cout << t1.get() << '\n';
//    std::cout << t2.get() << '\n';
//    std::cout << t3.get() << '\n';
//
//}

//Polymorphism
//#include "text.hpp"
//#include <iostream>
//
//Text::Text(const std::string& t): text(t) {}
//
//std::string Text::get() const {
//    return text;
//}
//void Text::append(const std::string& extra) {
//    text += extra;
//}
//
//#include "FANCYTEXT.hpp"
//
//FancyText::FancyText(const std::string& t, const std::string& left, const std::string& right, const std::string& conn) :
//Text(t), left_bracket(left), right_bracket(right), connector(conn) {}
//std::string FancyText::get() const {
//    return left_bracket + Text::get() +right_bracket;
//}
//void FancyText::append(const std:: string& extra) {
//    Text::append(connector+extra);
//}
//
//#include "FIXEDTEXT.hpp"
//
//FixedText::FixedText() : Text("FIXED") {}
//void FixedText::append(const std::string &) {}
//
//int main() {
//    Text *p1, *p2, *p3, *p4;
//    p1 = new Text("ABC");
//    p2 = new FancyText("XYZ", "[", "]", "-");
//    p3 = new FixedText;
//    p4 = new FancyText("1", "{", "}", ",");
//    
//    p4->append("****");
//    std::cout << p4->get();
//}

//#include <string>
//#include <vector>
//#include <iostream>
//enum class TextType { Plain, Fancy, Fixed };
//class AltText {
//    TextType type;
//    std::string text; std::string left_bracket; std::string right_bracket; std::string connector;
//public:
//    AltText(TextType type, const std::string& t);
//    AltText(TextType type, const std::string& t,const std::string& left, const std::string& right,const std::string& conn);
//    AltText(TextType type);
//    std::string get() const;
//    void append(const std::string& extra);
//};
//
//AltText::AltText(TextType type, const std::string& t) : type(type), text(t) {}
//AltText::AltText(TextType type, const std::string& t,
//const std::string& left, const std::string& right, const std::string& conn):
//    type(type), text(t), left_bracket(left), right_bracket(right), connector(conn) {}
//AltText::AltText(TextType type): type(type), text("FIXED") {}
//std::string AltText::get() const {
//    switch (type) {
//        case TextType::Plain:
//        case TextType::Fixed:
//            return text;
//         case TextType::Fancy:
//                return left_bracket + text + right_bracket;
//        default:
//            return "UNKNOWN TYPE";
//} }
//void AltText::append(const std::string& extra) {
//    switch (type) {
//     case TextType::Plain:
//        text += extra;
//        break;
//    case TextType::Fancy:
//        text += connector + extra;
//        break;
//     case TextType::Fixed:
//        break;
//} }
//int main() {
//    std::vector<AltText> texts { {TextType::Plain, "Wow"},
//        {TextType::Fancy, "Wee", "[", "]", "-"}, {TextType::Fixed},
//        {TextType::Fancy, "Whoa", ":", ":", ":"} };
//    for (auto t : texts)
//        std::cout << t.get() << '\n';
//    for (auto& t : texts) {
//        t.append("A"); t.append("B"); t.append("C");
//      }
//  for (auto t : texts)
//      std::cout << t.get() << '\n';
//}

//Abstract Class
//class Shape { // abstract class
//public:
//  virtual double span() const = 0; // pure virtual function (method)
//  virtual double area() const = 0;
//};
////Shape myShape; // illegal – abstract class - 인스턴스 가질 수 없음
//class Ellipse: public Shape {
//protected:
//  double major_radius;
//  double minor_radius;
//public:
//    Ellipse(double major, double minor); //장축, 단축
//    double span() const override;
//    double area() const override;
//};
//class Circle: public Ellipse {
//public:
//    Circle(double radius) : Ellipse(radius, radius) {};
//};
//int main() {
//
//}

//#include <iostream>
//#include <locale>
//#include <string>
//#define _USE_MATH_DEFINES
//#include <cmath>
//
//using namespace std;
//// 순수가상함수를 1개이상 가진 클래스는 추상(Abstract)클래스가 됨
//// 추상 클래스는 객체를 생성할 수 없으며, 부모 클래스의 역할은 할 수 있다
//class CShape
//{
//    protected:
//    double width;
//    double height;
//
//    public:
//    CShape(){}
//    CShape(double w, double h) {
//        width = w;
//        height = h;
//    }
//
//    // 순수가상함수(Pure Virtual Functions) 선언 : 현재 클래스는 객체를 생성할 수 없음
//    virtual double get_area()=0;
//    void set_width(double w) { width = w; }
//    void set_height(double h) { height = h; }
//};
//
//class CCircle : public CShape
//{
//    public:
//    CCircle(double w, double h) : CShape(w,h)
//    {
//        wprintf(L"CCircle 생성자 실행\n");
//    }
//
//    // 부모의 순수가상함수를 오버라이드하지 않으면 오류 발생
//    double get_area() {
//        return M_PI * pow(width/2, 2);
//    }
//};
//
//class CTriangle : public CShape
//{
//    public:
//    CTriangle(double w, double h) : CShape(w,h) // 상위 클래스의 파라미터 있는 생성자 호출
//    {
//        wprintf(L"CTriangle 생성자 실행\n");
//    }
//
//    // 부모의 순수가상함수를 오버라이드하지 않으면 오류 발생
//    double get_area() {
//        return width * height / 2;
//    }
//};
//
//int main() {
//
//    //CShape shape; // 오류, 추상 클래스는 객체를 생성할 수 없다.
//    CCircle circle(5,5);
//    CTriangle tri(5,5);
//
//    CShape* pShape1 = &circle;
//    CShape* pShape2 = &tri;
//
//    double circle_area = pShape1->get_area();
//    double tri_area = pShape2->get_area();
//
//    cout <<  circle_area << endl;
//    cout <<  tri_area << endl;
//
//    return 0;
//}
//
//int main() {
//    setlocale(LC_ALL, "");
//
//    wcout << L"C++ 다형성(Polymorphism)" << endl;
//
//    // 런타임에(동적으로) 객체를 생성한다
//    CShape* pShape1 = new CCircle(5,5);
//    CShape* pShape2 = new CTriangle(5,5);
//
//    double circle_area = pShape1->get_area();
//    double tri_area = pShape2->get_area();
//
//    wcout << L"원의 면적=" << circle_area << endl;
//    wcout << L"삼각형 면적=" << tri_area << endl;
//
//    return 0;
//}

//#include <iostream>
//struct B{
//    virtual int x() = 0;
//};
//struct D : public B{
//    int x() override {
//        return 0;
//    }
//};
//int main () {
//    B* p = new D;
//    B& r = *p;
//    p-> x();
//    r.x();
//}
