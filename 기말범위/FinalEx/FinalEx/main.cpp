/*             Object-Oriented Programming, Midterm exam (2022-1)                       */
// Write your answers in Korean or English(답안은 한국어 또는 영어로 작성하시오).
#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <list>
#include <algorithm>

/*//*** 1번 정답
class A {
private: // 생략 가능
    int x;
public:
    A(): A(-1) {}        // 초기화 리스트를 사용하지 않아도 정답으로 인정
    A(int x):x(x) {}    // 초기화 리스트를 사용하지 않아도 정답으로 인정
    void print() const {    // const 함수가 아니면 0점 처리
        std::cout << x << std::endl;
    }

    // friend 지정이 없으면 0점 처리
    friend std::ostream& operator << (std::ostream& os, const A a);
};

std::ostream& operator << (std::ostream& os, const A a) { // os도 &, return도 &
    os << a.x;
    return os;
}

//*** 2번 정답
class B {
public:
    static int num; // C++17 표준으로는 외부에서 정의하지 않고, inline static int num = 0;로 사용이 가능
                    // 만일 빌드가 되어, cxx 및 exam 파일이 생성되었다면 C++17 표준 사용으로 정답으로 인정

    B() {
        num++;
    }
    ~B() {
        num--;
    }
    static int GetCnt() {    // inline 및 외부의 정의가 모두 가능
        return num; // 또는 return B::num;
    }
};

int B::num = 0;    // = 0 없어도 가능

//*** 3번 정답
class C {
private:  생략 가능
    int *pX;
public:
    C(int x) {
        pX = new int(x);
    }
    virtual ~C() {
        delete pX;
    }
    virtual void print() const {
        std::cout << *pX << std::endl;
    }
};

class D : public C {
private:  생략 가능
    int *pY;
public:
    D(int x, int y) : C(x) {
        pY = new int(y);
    }
    ~D() {
        delete pY;
    }
    void print() const override {
        C::print();
        std::cout << *pY << std::endl;
    }
};

//*** 5번 정답
template <class T>
class Vector10 {
private: // 생략 가능
    T p[10];
    int size;
public:
    Vector10() : size(0) {}
    Vector10(int s, T start, T inc) : size(s) {
        if(size > 10) size = 10;
        if(size < 0) size = 0;

        for (int i = 0; i < size; ++i) {
            if(i == 0) p[i] = start;
            else p[i] = p[i-1] + inc;
        }
    }
    T &operator[] (int i) {    // 본 문제에서는 const 함수도 가능, return이 &가 아니면 0점
        return p[i];
    }
    int get_size() const {    // 본 문제에서는 이름을 자유롭게 사용하고, const 함수가 아닌 경우에도 가능
        return size;
    }
    bool push_back(const T &data) {
        if(size >= 10) return false;
        p[size++] = data;

        return true;
    }
};

template <class T>
std::ostream& operator << (std::ostream& os, Vector10<T> v) {
    for(int i = 0 ; i < v.get_size() ; ++i)
        os << v[i] << " ";

    return os;
}


//*** 6번 정답
template <class T1, class T2>
T1 sum(T2 container) {
    T1 s = 0;
    for(auto iter = std::begin(container) ; iter != std::end(container) ; iter++)
        s += *iter;

    return s;
}*/
class A {
    int x;
public:
    A(): x(-1) {}
    A(int xx) : x(xx) {}
    
    void print() const {
        std::cout << x << std::endl;
    }
    friend std::ostream& operator<<(std::ostream& os, const A& a);
};
std::ostream& operator<<(std::ostream& os, const A& a) {
    os << a.x;
    return os;
}

class B {
public:
    B() {
        cnt ++;
    }
    ~B() {
        cnt--;
    }
    static int cnt;
    static int GetCnt() {
        return cnt;
    }
};
int B::cnt = 0;

class C {
    int *pX;
public:
    C(int x) {pX = new int(x);}
    virtual ~C() { delete pX;}
    virtual void print() {
        std::cout << *pX;
    }
};
class D : public C {
    int *pY;
public:
    D(int x, int y): C(x) {pY = new int(y);}
    ~D() {delete pY;}
    void print() override {
        C::print();
        std::cout << ", " << *pY;
    }
    
};

template <class T>
class Vector10 {
    T p[10];
    int size;
public:
    Vector10(): size(0) {}
    Vector10(int s, T first, T step): size(s) {
        if (size >= 10) size = 10;
//        if(size < 0) size = 0;
        for (int i = 0; i < size; i++) {
            p[i] = first + step * i;
        }
    }
    T& operator[](int i) {
        return p[i];
    }
    int getSize() const { return size;}
    
    bool push_back(T x) {
        if (size >= 10) return false;
        
        p[size] = x;
        size++;
        return true;
    }
};
template <class T>
std::ostream& operator<< (std::ostream& os, Vector10<T> v) {
    for (int i = 0; i < v.getSize(); i++) {
        os << v[i] << " ";
    } return os;
}

template <typename T, typename C>
T sum(C v) {
    T result = 0;
    for (auto iter = std::begin(v); iter != std::end(v); iter++) {
        result += *iter;
    }
    return result;
}
    
int main(){
    ///********** 1번) 아래의 A클래스를 정의하고, 필요한 함수, 연산자를 정의하라(main 함수 위에 작성). - 3점
    ///**********      A 클래스의 instance data member의 접근 권한은 private이며, int형으로 x의 변수명을 사용한다.
    ///**********      생성자와 소멸자를 제외하고, 한 개의 print 및 << 를 정의한다(멤버 또는 비멤버).
//        std::cout << "*** 1 ***" << std::endl;
//        ///*
//        A a1, a2(1);
//        const A a3(2);
//
//        a1.print();        // -1 출력(x)
//        a2.print();        // 1 출력(x)
//        a3.print();        // 2 출력(x)
//        std::cout << std::endl;
//
//        std::cout << a1 << std::endl;    // -1 출력(x)
//        std::cout << a2 << std::endl;    // 1 출력(x)
//        std::cout << a3 << std::endl;    // 2 출력(x)
//        //*/
//        std::cout << std::endl;
    
    ///********** 2번) 아래의 B클래스를 정의하고, 필요한 함수, 연산자를 정의하라(main 함수 위에 작성). - 3점
    ///**********      전역 변수 및 전역 함수를 사용하면 0점 처리함.
    ///**********      생성자와 소멸자를 제외하고, 한 개의 데이터 멤버와 print를 정의한다. (overloading하면 0점)
//        std::cout << "*** 2 ***" << std::endl;
//        ///*
//        B b1;
//        std::cout << B::GetCnt() << std::endl;    // 1출력(현재 존재하는 B형의 인스턴스의 개수)
//
//        B b2;
//        std::cout << B::GetCnt() << std::endl;    // 2출력(현재 존재하는 B형의 인스턴스의 개수)
//
//        B *p = new B[3];
//        std::cout << B::GetCnt() << std::endl;    // 5출력(현재 존재하는 B형의 인스턴스의 개수)
//        delete [] p;
//
//        B b3;
//        std::cout << B::GetCnt() << std::endl;    // 3출력(현재 존재하는 B형의 인스턴스의 개수)
//        //*/
//        std::cout << std::endl;
    
    //
    //    ///********** 3번) 아래의 C, D 클래스를 정의하고, 필요한 함수, 연산자를 정의하라(main 함수 위에 작성). - 5점
    //    ///**********      C 클래스의 데이터 멤버 int *pX(private 접근 권한)를 가지며, 파라메터가 1개인 생성자에서 int 형으로 동적할당하고 파라메터값으로 초기화한다.
    //    ///**********      D 클래스(C의 파생 클래스)의 데이터 멤버 int *pY(private 접근 권한)를 가지며, 파라메터가 2개인 생성자에서 pX는 C 클래스의 생성자로 초기화하고, pY는 int 형으로 동적할당하고 두 번째 파라메터값으로 초기화한다.
    //    ///**********      C 클래스에서 D 클래스를 friend로 지정할 수 없다.
    //    ///**********      new로 동적 할당된 메모리(pX, pY)는 instance가 소멸되면 해제되어야 한다.
    //    ///**********      생성자와 소멸자를 제외하고, print 함수만 정의한다.  (overriding은 가능)
//        std::cout << "*** 3 ***" << std::endl;
//        ///*
//        C* pC = new D(1, 2);
//        pC->print();        // 1과 2 출력(*pX, *pY)
//        delete pC;
//        //*/
//        std::cout << std::endl;
    
        ///********** 4번) 아래와 같이 x의 범위가 지정된 범위로([0, 100]) 조정되도록 Fn을 람다 함수를 이용하여 아래에 정의하라. - 1점
        ///**********      최소한의 코드로 작성하고, std::min과 std::max를 사용한다.
    
    
//        std::cout << "*** 4 ***" << std::endl;
//        ///*
//        int x;
        //*** 4번 정답 (아래 작성)
//        auto Fn = [&x]() { x = std::max(std::min(100, x), 0); };
//
//        x = 10; Fn(); std::cout << x << " ";    // 10 출력
//        x = -1; Fn(); std::cout << x << " ";    // 0 출력
//        x = 107; Fn(); std::cout << x << std::endl;    // 100 출력
//        //*/
//        std::cout << std::endl;
    //
    //    ///********** 5번) 아래의 Vector10 클래스 템플릿을 정의하라(main 함수 위에 작성). - 6점
    //    ///**********      Vector10은 접근 권한이 private인 p[10]와 size를 가지며, p는 generic형의 크기가 10인 배열이며 size는 사용중인 요소의 개수를 의미한다.
    //    ///**********      파라메터를 가지지 않는 Vector10의 생성자는 size 를 0으로 초기화한다.
    //    ///**********      파라메터를 3개 가지는 Vector10의 생성자의 파라메터는 순서대로 사용하는 배열의 크기, 첫번째 요소의 값, 두번째 요소부터 이전 요소와의 증가값이다.
    //    ///**********      Vector10에서 friend 지정은 없다.
    //    ///**********      아래의 설명과 같이 동작하도록 Vector10 클래스 템플릿을 정의한다. (<<, [] 및 push_back 정의)
    //    ///**********      << 연산자에서 사용할 Vector10의 public형 멤버 함수를 추가적으로 정의한다.
            std::cout << "*** 5 ***" << std::endl;
            ///*
            Vector10<int> v0;
            Vector10<int> v1(15, 10, 2);        // 10개의 int형 배열로 10, 12, 14, 16, 18, 20, 22, 24, 26, 28로 초기화
            Vector10<double> v2(9, 1.2, 0.3);    // 9개의 double형 배열로 1.2, 1.5, 1.8, 2.1, 2.4, 2.7, 3 3.3, 3.6로 초기화

            std::cout << v0 << std::endl;        // 출력 없음
            std::cout << v1[0] << std::endl;    // 10 출력(v1.p[0])
            std::cout << v1 << std::endl;        // 10 12 14 16 18 20 22 24 26 28 출력(v1.p 요소)
            std::cout << v2 << std::endl;        // 1.2 1.5 1.8 2.1 2.4 2.7 3 3.3 3.6 출력(v2.p 요소)

            Vector10<double> v3(2, 2.3, 0.1);
            std::cout << v3 << std::endl;        // 2.3 2.4 출력(v3.p 요소)
            v3 = v2;
            v2[0] = 0.1;
            std::cout << std::boolalpha << v3.push_back(6.5) << std::endl;                    // v3의 사용중인 요소 다음에 6.5추가, true 출력
            std::cout << v3 << std::endl;        // 1.2 1.5 1.8 2.1 2.4 2.7 3 3.3 3.6 6.5 출력(v3.p 요소)
            std::cout << v2 << std::endl;        // 0.1 1.5 1.8 2.1 2.4 2.7 3 3.3 3.6 출력(v2.p 요소)
            std::cout << std::boolalpha << v1.push_back(50) << std::endl;                    // v1은 10개의 요소가 사용중이므로 추가 불가, false 출력
            std::cout << v1 << std::endl;        // 10 12 14 16 18 20 22 24 26 28 출력(v1.p 요소)
            //*/
            std::cout << std::endl;
//
    //    ///********** 6번) 아래의 sum 함수 템플릿을 정의하라(main 함수 위에 작성). - 2점
//        std::cout << "*** 6 ***" << std::endl;
//        ///*
//        std::vector<int> vec {10, 20, 30, 40, 50, 60};
//        std::list<double> lst {1.5, 2.5, 3.5, 4.5, 5.5};
//
//        std::cout << sum<int, std::vector<int>>(vec) << std::endl;        // 210 출력
//        std::cout << sum<double, std::list<double>>(lst) << std::endl;    // 17.5 출력
    //    //*/
}
