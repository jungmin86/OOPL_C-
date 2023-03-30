//
//  main.cpp
//  Assignment#06
//
//  Created by Jungmin Kim on 2022/11/26.
//

//#include <iostream>
////#include <cstdlib>
//class PrintOnlyRational {
//    int numerator;
//    int denominator;
//public:
//    static int gcd(int num1, int num2);
//    PrintOnlyRational(int n, int d): numerator(n), denominator(d) { if (d == 0) {
//        std::cout << "Zero denominator error\n";
//        exit(1); }
//    }
//    PrintOnlyRational(): PrintOnlyRational(0, 1) {} //디폴트
//    friend std::ostream& operator<<(std::ostream& os, const PrintOnlyRational& f);
//   };
//int PrintOnlyRational::gcd(int num1, int num2) {
//    int min = (num1 < num2) ? num1: num2;
//    int large = 1;
//    for (int i = 1; i <= min; i++) {
//        if ((num1 % i == 0) && (num2 % i ==0)) large = i;
//    }
//    return large;
//}
//   std::ostream& operator<<(std::ostream& os, const PrintOnlyRational& f) {
//      os << f.numerator/PrintOnlyRational::gcd(f.numerator, f.denominator) << '/' << f.denominator /PrintOnlyRational::gcd(f.numerator, f.denominator)  ;
//   return os; }
//   int main() {
//   PrintOnlyRational fract{1, 2}; // The fraction 1/2
//   std::cout << "The fraction is " << fract << '\n';
//   PrintOnlyRational fract2(2, 4); // The fraction 2/3
//   std::cout << "The fraction is " << fract2 << '\n';
//   }

////2.    아래 코드에서 Vector2D는 2차원 벡터로 x, y 요소를 멤버로 가지는 클래스이다. 아래의 코드가 동작하도록 필요한 함수(메소드)를 추가하라.
//#include <iostream>
//class Vector2D {
//     int x, y;
//public:
//     Vector2D(int x, int y) : x(x), y(y) {}
//    int getX() const { return x;}
//    int getY() const { return y;}
//    Vector2D operator+(const Vector2D& v) {
//        int xx = x+v.x;
//        int yy = y+ v.y;
//        return {xx, yy};
//    }
//};
//std::ostream& operator<<(std::ostream& os, const Vector2D& v) {
//    os << v.getX() << ", " << v.getY();
//    return os;
//}
//int main() {
//    Vector2D v1(10, 2), v2(20, 5);
//    std::cout << v1+v2 << std::endl; // 30, 7 출력
//}
//#include <iostream>
//class Vector2D {
//    int x, y; //private
//public:
//    Vector2D(int x, int y) : x(x), y(y) {} //파라미터 2개인 생성자
//    int get_x() const {return x;}
//    int get_y() const {return y;}
//};
//
//Vector2D operator+(const Vector2D& v1, const Vector2D& v2) { //Vector2D 타입에 대한 +오퍼레이터 오버로딩
//    int xx = v1.get_x() + v2.get_x();
//    int yy = v1.get_y() + v2.get_y();
//    return {xx,yy}; //uniform initialization
//}
//
//std::ostream& operator<<(std::ostream& os, const Vector2D& v) { //operator<< 오버로딩 (관용구처럼 쓰임)
//    os << v.get_x() << ", " << v.get_y();
//    return os;
//}
//
//int main() {
//    Vector2D v1(10, 2), v2(20, 5); // 생성자
//    std::cout << v1+v2 << std::endl; // 30, 7 출력
//}

//3.    아래 코드가 동작하도록 클래스 A를 완성하라.
//#include <iostream>
//class A {
//     int x;
//public:
//     A(int x) : x(x) {}
//// GetX, Max 함수 작성
//    int GetX() const { return x;}
//    A* Max(A* a_ptr) {
//        return (this->x > a_ptr->x)? this: a_ptr;
//    }
//};
//int main() {
//     const A a1(10);
//    A a2(5), a3(3);
//    std::cout << a1.GetX() << std::endl; // 10 출력
//    std::cout << a2.GetX() << std::endl; // 5 출력
//    A *p = a2.Max(&a3); // Max: a2.x와 a3.x를 비교하여 //큰 값을 가지는 인스턴스 주소 반환
//    std::cout << p->GetX() << std::endl; // 5출력
//}

//#include <iostream>
//class A {
//    int x;
//public:
//    A(int x) : x(x) {}
//// GetX, Max 함수 작성
//};
//
//int main() {
//    const A a1(10);
//    A a2(5), a3(3);
//    std::cout << a1.GetX() << std::endl; // 10 출력
//    std::cout << a2.GetX() << std::endl; // 5 출력
//
//    A *p = a2.Max(&a3); // Max: a2.x와 a3.x를 비교하여
//                                // 큰 값을 가지는 인스턴스 주소 반환
//    std::cout << p->GetX() << std::endl; // 5출력
//}


//#include <iostream>
//class A {
//    int x;
//public:
//    A(int x) : x(x) {}
//    // GetX, Max 함수 작성
//    int GetX() const{ //const 펑션은 const/non-const 인스턴스에서 모두 호출할 수 있다.
//        return x;
//    }
//
//    A* Max(A* a) { //파라미터를 &a3로 받으니(클래스의 주소값) 포인터로 정의, 결과도 클래스의 포인터로 정의
//        A* result_ptr;
//        result_ptr = (this->GetX() > a->GetX())? this : a; //각 인스턴스의 x의 값을 비교해서 큰 값을 가지는 인스턴스의 주소를 반환
//        return result_ptr;
//    }
//
//};
//
//int main() {
//    const A a1(10);
//    A a2(5), a3(3);
//    std::cout << a1.GetX() << std::endl; // 10 출력
//    std::cout << a2.GetX() << std::endl; // 5 출력
//
//    A *p = a2.Max(&a3); // Max: a2.x와 a3.x를 비교하여
//                                // 큰 값을 가지는 인스턴스 주소 반환
//    std::cout << p->GetX() << std::endl; // 5출력
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
//#include <string>
//#include <algorithm>
//
//class BigUnsigned {
//    std::vector<int> list; //정수를 저장하는 멤버 -> 각 요소는 정수의 자릿수로 0~9 -> int형 엘리먼트, 인스턴스 변수 -> 모든 변수는 list를 가지고 list의 사이즈는 정수의 자릿수와 같다.
//    int x; //기본 생성자 정수 0을 위한 인스턴스 변수
//public:
//    BigUnsigned(): x(0) {list.push_back(x);} //기본생성자 -> 정수는 0을 받음 -> 0 한 자리를 list에 추가
//
//    BigUnsigned(unsigned int input) { //unsigned int 형을 파라메터로 하는 생성자 -> list를 인수에 맞춰서 초기화
//        while(input != 0) { //10으로 나눈 수를 list에 입력 -> 뒤에서부터 일의 자리가 추출됨
//            list.push_back(input % 10);
//            input /= 10;
//        }
//        std::reverse(list.begin(), list.end()); //순서를 바꿔줘야 input의 숫자 순서대로 리스트에 나타남
//    }
//
//    BigUnsigned(const std::string& str) { //std::string 형을 파라메터로 하는 생성자 -> 앞에서부터 한 글자씩
//        for (int i = 0; i < str.size(); i++) {//한 글자씩 추출
//            x = (int)(str[i] - 48); //string 형을 한 글자(0~9 사이의 정수)씩 접근하게 되면, char형이 된다. -> 따라서 숫자일 경우 '0'(아스키코드 상 48), '9'(아스키코드 상 57)이다. -> 해당 char를 int로 형 변환해서 x(int형 인스턴스 변수)에 저장
//            list.push_back(x); //0~9사이의 정수 x를 리스트에 추가
//        }
//    }
//    std::vector<int> Get_list() const{//private 멤버인 list에 접근할 수 있게 해주는 메소드
//        return list;
//    }
//
//};
//BigUnsigned operator+(const BigUnsigned& a1, const BigUnsigned& a2) {//+연산자 오버로딩, 리턴타입에 레퍼런스 붙이면 안됨
//    std::string a1_s, a2_s, c1, c2, add_s;
//        for (auto& i:a1.Get_list()) { //a1의 list의 엘리먼트(정수의 벡터)에 한 개씩 접근
//            c1 = std::to_string(i); //i(0~9 사이의 정수)를 string형으로 바꿔주고, c1에 할당한다.
//            a1_s.append(c1); //c1(string형 0~9 사이의 정수)을 a1_s에 추가한다. (맨뒤에 추가)
//        }
//        for (auto& k:a2.Get_list()) {//a2의 list의 엘리먼트(정수의 벡터)에 한 개씩 접근
//            c2 = std::to_string(k); //k(0~9 사이의 정수)를 string형으로 바꿔주고, c2에 할당한다.
//            a2_s.append(c2); //c2(string형 0~9 사이의 정수)을 a2_s에 추가한다. (맨뒤에 추가)
//        }
//    int sum = 0; //같은 자리에 있는
//    std::string result;
//    while (!a1_s.empty() || !a2_s.empty() || sum > 0) //a1_s와 a2_s가 비어있더라도, sum이 1이 남아있다면 마지막으로 맨 뒤에 1을 붙여줘야 한다.
//        {
//            if (!a1_s.empty())
//            {
//                sum += (int)a1_s[a1_s.length()-1] - 48; //sum에 a1_s에서 가장 마지막 위치에 있는 0~9사이의 정수를 더해준다.
//                a1_s.pop_back(); //더하기에 쓰인 마지막 자리 정수는 지워준다.
//            }
//            if (!a2_s.empty())
//            {
//                sum +=  (int)a2_s[a2_s.length()-1]  - 48; //sum에 a1_s에서 가장 마지막 위치에 있는 0~9사이의 정수를 더해준다.
//                a2_s.pop_back(); //더하기에 쓰인 마지막 자리 정수는 지워준다.
//            }
//            add_s = std::to_string(sum%10); //같은 자리의 수를 더한 sum이 10~18의 값을 가질 때를 대비해 일의 자리의 정수만 add_s(string 형)에 할당한다.
//            result.append(add_s);//result(string 형)에 add_s 추가
//            sum /= 10; //sum이 10~18의 값을 가지는 경우에 십의 자리를 나타내는 1을 다음 자리 수의 연산에 넘겨주기 위함.
//        }
//        std::reverse(result.begin(), result.end()); //result는 원하는 결과(string 형)의 정렬이 반대로 되어있다. 일의 자리부터 더해주면 뒤에서부터 채워져야 하는데, 위의 반복문에서는 앞에서부터 채워준다. 따라서 string의 순서를 뒤집는다.
//    return {result}; //string 형을 파라미터로 가지는 BigUnsigned 인스턴스 생성해서 반환
//
//}
//std::ostream &operator<<(std::ostream &os,const BigUnsigned& a)//BigUnsigned 인스턴스에 대한 <<오퍼레이터 오버로딩
////파라미터 -> 레퍼런스를 붙이려면 const를 붙여줘야 함
//{
//    for (auto i : a.Get_list()) {
//        os << i;
//    }
//    return os;
//}
//
//int main() {
//
//        BigUnsigned a(4'294'967'284); //unsigned int를 파라미터로 받는 생성자
//        BigUnsigned b("1233249472849710749713"); //string을 파라미터로 받는 생성자
//        BigUnsigned c;  // 기본 생성자
//        std::cout << a << '\n';
//        std::cout << b << '\n';
//        std::cout << c << '\n';
//        std::cout << (a+c) << '\n';
//        std::cout << (a+b) << '\n';
//        std::cout << (b+c) << '\n';
/* 4294967284
 1233249472849710749713
 0
 4294967284
 1233249472854005716997
 1233249472849710749713*/
//
//}

//7.    큰 범위의 0과 양의 정수를 저장하는 BigUnsigned 클래스를 아래와 같은 특징을 가지도록 정의하라. (테스트 코드도 작성해서 결과로 포함)
//(a) 정수를 저장하는 멤버는 std::vector로 각 요소는 정수의 각 자릿수로 0-9까지의 정수를 가진다.
//(b) 기본 생성자는 정수를 0으로 초기화한다.
//(c) unsigned int 형을 파라메터로 하는 생성자를 가지며, 내부 정수를 인수로 초기화한다.
//(d) std::string 형을 파라메터로 하는 생성자를 가지며, 내부 정수를 인수로 초기화하며 인수는 n번째 위치의 문자는 내부 정수의 n번째 자릿수이다.
//(e) +연산자로 덧셈이 가능하며, std::cout과 <<을 이용하여 정수의 출력이 가능하다.

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//class BigUnsigned {
//    std::vector<int> v;
//public:
//    BigUnsigned() { v.push_back(0);}
//    BigUnsigned(unsigned int ui) {
//        if (ui == 0 ) v.push_back(0);
//        else
//        while (ui != 0) {
//            v.push_back(ui%10);
//            ui /= 10;
//        }
//        std::reverse(v.begin(),v.end());
//    }
//    BigUnsigned(std::string s) {
//        if (s.empty()) v.push_back(0);
//        else
//            for(int i = 0; i < s.size(); i++) {
//                v.push_back(s[i]-'0');
//            }
//    }
//    BigUnsigned operator+(const BigUnsigned& a) {
//        int sum = 0;
//        std::string s;
//        int up = 0;
//        while(this->v.empty() == false) {
//            sum += v[-1];
//        }
//        while (a.v.empty()== false) {
//            sum+= v[-1];
//        }
//        sum += up;
//        up = 0;
//        if (sum >= 10) {
//            up = 1;
//            sum -= 10;
//            s.append(std::to_string(sum));
//        }
//        else s.append(std::to_string(sum));
//        std::reverse(s.begin(), s.end()); //리턴값 없음 -> 걍 행동
//        return {s};
//    }
//    friend std::ostream& operator<<(std::ostream& os, const BigUnsigned& BU);
//};
//std::ostream& operator<<(std::ostream& os, const BigUnsigned& BU) {
//    for (int i = 0; i < BU.v.size(); i++) {
//        os << BU.v[i];
//    }
//    return os;
//}
//
//int main() {
//        BigUnsigned i1;
//        BigUnsigned i2(12340);
//        BigUnsigned i3(0);
//        BigUnsigned i4(i2);
//    //    i4.num[1] = 9; // num을 public으로 test -> 돌아감
//        BigUnsigned i5("123450");
//
//        std::cout << i1 << std::endl;
//        std::cout << i2 << std::endl;
//        std::cout << i3 << std::endl;
//        std::cout << i4 << std::endl;
//        std::cout << i5 << std::endl;
//
//        std::cout << BigUnsigned(915)+BigUnsigned(200) << std::endl;
//
//        std::cout << BigUnsigned(1952835)+BigUnsigned("145869333214526654589") << std::endl;
//        //               1952835
//        // 145869333214526654589
//        // 145869333214528607424
//}

//3. 교수님 해설
//#include <iostream>
//#include <vector>
//#include <string>
//class BigUnsigned {
//public:
//    std::vector<int> num;
//public:
//    BigUnsigned() { num.push_back(0); }
//    BigUnsigned(unsigned bu) {
//        if (bu == 0)    { //숫자 파라미터는 0인지 아닌지
//            num.push_back(0);
//        }
//        else {
//            while (bu > 0){
//                num.push_back(bu % 10);
//                bu /= 10;
//            }
//        }
//    }
//    BigUnsigned(std::string bu) { //문자파라미터는 비어있는지
//        if (bu.empty())    {
//            num.push_back(0);
//        }
//        else {
//            for(int i = bu.size()-1 ; i >= 0 ; i--) //굳이 std::reverse 안하고 거꾸로 돌면 됨
//                num.push_back(bu[i]-'0');
//        }
//    }
//    friend std::ostream &operator << (std::ostream &os, const BigUnsigned &bu);
//    friend BigUnsigned operator + (const BigUnsigned &bu1, const BigUnsigned &bu2);
//};
//std::ostream &operator << (std::ostream &os, const BigUnsigned &bu){
//    int n = bu.num.size();
//    for (int i = n - 1; i >= 0; i--) //벡터에는 거꾸로 저장되어있다
//        os << bu.num[i];
//    return os;
//}
//BigUnsigned operator + (const BigUnsigned &bu1, const BigUnsigned &bu2) {
//    BigUnsigned rtn; //기본생성자 0이 생성됨 -> 지워야 함
//    int carry = 0;
//    rtn.num.clear(); //0도 없게끔 해야 함
//    for(int i = 0 ; i < bu1.num.size() || i < bu2.num.size() || carry > 0 ; i++) {
//        int n1 = 0, n2 = 0;
//
//        if(i < bu1.num.size()) n1 = bu1.num[i];
//        if(i < bu2.num.size()) n2 = bu2.num[i];
//
//        int sum = n1 + n2 + carry;
//        if(sum >= 10) {
//            sum -= 10;
//            carry = 1;
//        }
//        else
//            carry = 0;
//
//        rtn.num.push_back(sum); //한 자리씩 넣으면 굳이 스트링 이용할 필요가 없다 -> 벡터에는 계속 들어간다
//    }
//    return rtn;
//}
//int main() {
////    BigUnsigned i1;
////    BigUnsigned i2(12340);
////    BigUnsigned i3(0);
////    BigUnsigned i4(i2);
//////    i4.num[1] = 9; // num을 public으로 test -> 돌아감
////    BigUnsigned i5("123450");
////
////    std::cout << i1 << std::endl;
////    std::cout << i2 << std::endl;
////    std::cout << i3 << std::endl;
////    std::cout << i4 << std::endl;
////    std::cout << i5 << std::endl;
////
////    std::cout << BigUnsigned(915)+BigUnsigned(200) << std::endl;
////
////    std::cout << BigUnsigned(1952835)+BigUnsigned("145869333214526654589") << std::endl;
////    //               1952835
////    // 145869333214526654589
////    // 145869333214528607424
//
//BigUnsigned a(4'294'967'284); //unsigned int를 파라미터로 받는 생성자
//        BigUnsigned b("1233249472849710749713"); //string을 파라미터로 받는 생성자
//        BigUnsigned c;  // 기본 생성자
//        std::cout << a << '\n';
//        std::cout << b << '\n';
//        std::cout << c << '\n';
//        std::cout << (a+c) << '\n';
//        std::cout << (a+b) << '\n';
//        std::cout << (b+c) << '\n';
///* 4294967284
// 1233249472849710749713
// 0
// 4294967284
// 1233249472854005716997
// 1233249472849710749713*/
//}
