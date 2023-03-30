//
//  main.cpp
//  Templates1
//
//  Created by Jungmin Kim on 2022/11/30.
//


//템플릿 펑션,
//#include <iostream>
//#include <string>
//template <class T> //template <typename T>
//    bool equal(T a, T b) {
//    return a == b;
//    }
//    int main() {
//        std::cout << equal("abc", "abcd") << '\n'; //0
//        std::cout << equal(2.2, 2.7) << '\n'; //0
//        std::cout << equal(2, 3) << '\n'; //0
//
//}

//#include <iostream>
//#include <vector>
//#include <string>
//template <typename T>
//T sum(const std::vector<T>& v) {
//    T result = 0;
//    for (T elem : v)
//     result += elem;
//    return result;
//}
//
//template <typename ElemType>
//void swap(ElemType& a, ElemType& b) {
//    ElemType temp = a;
//    a = b;
//    b = temp;
//}
//int main() {
//    std::vector<int> v {1,2,3};
//    std::cout << sum(v) << std::endl; //6
//    std::vector<double> vv {1., 2., 3.3};
//    std::cout  <<sum(vv) << std::endl; //6.3
//    std::string a, b;
//    a = "Happy";
//    b = "Sad";
//    swap(a, b);
//    std::cout << a << " " << b << std::endl; // Sad Happy
//}

//#include <iostream>
//template <class T>
//double average(T a, T b) {
//    return (a+b)/2.;
//}
//template <class T1, class T2> //한 함수 내에서 여러 자료형을 다루고 싶으면 복수의 T 정의
//double average(T1 a, T2 b) {
//    return (a+b)/2.;
//}
//int main() {
//    std::cout << average(2, 3) << '\n';
//    std::cout << average(2, 2.7) << '\n'; //오류남 -> T는 한 함수 내에서 하나의 자료형만을 담당함
//    std::cout << average(2.2, 2.7) << '\n';
//}

//#include <iostream>
//template <class T>
//T *new_var(int size) { //포인터도 가능 Memory Allocation -> 리턴만 가지는 템플릿
//    return new T[size]; //동적할당 ㄷ ㄷ
//}
//int main() {
//    int *p1 = new_var<int>(10);
//    double *p2 = new_var<double>(10); //타입이 여러 개면 콤마를 이용해서 <double, int> 이런 식으로 작성
//    for (int i = 0; i < 10; i++) {
//        std::cout << p1[i] << " " << p2[i] << std::endl;
//    }
//}

//#include <iostream>
//template <int N>
//int scale(int value) {
//    return value * N;
//}
//template <typename T, int N>
//T scale(const T& value) {
//    return value * N;
//}
//int main() {
//    std::cout << scale<3>(5) << '\n'; //15
//    std::cout << scale<4>(10) << '\n'; //40
//    std::cout << scale<double, 3>(5.3) << '\n'; //15.9
//    std::cout << scale<int, 4>(10) << '\n'; //40
//}


// 템플릿 클래스
//#include <iostream>
//template <typename T>
//class Point {
//public:
//   T x;
//   T y;
//   Point(T x, T y): x(x), y(y) {} //어떤 자료형이 와도 그대로 받을 수 있다.
//};
//int main() {
//    Point<int> p1(10, 10); //클래스 안에서 T가 무엇으로 쓰이는지 명시
//    Point<double> p2(10.5, 20.2);
//    std::cout << p1.x << "," << p1.y << std::endl;
//    std::cout << p2.x << "," << p2.y << std::endl;
//}
//
//#include <iostream>
//
//class Point {
//    int x, y;
//public:
//    Point(int xx, int yy): x(xx), y(yy) {}
//    void Print() const {
//        std::cout << x << "," << y <<'\n';
//    }
//};
//int main() {
//    Point p1(1.2,2), p2(3,5);//1.2넣어도 int니까 1로 들어감
//    p2.Print(); //3,5
//    p1.Print(); //1,2
//}
//
//#include <iostream>
//template <class T>
//class Point{
//    T x, y;
//public:
//    Point(T x, T y): x(x), y(y) {}
//    void Print() const {
//        std::cout << x <<"," << y <<std::endl;
//    }
//};
//int main() {
//    Point<double> p1(1.2,2);
//    Point<int> p2(3,5);
//    p2.Print(); //3,5
//    p1.Print(); //1.2,2
//}

//템플릿으로 만들기 -> 범용타입 가능
//#include <iostream>
//template <class T>
//T Abs(T x) { //template function
//    return x <0? -x : x;
//}
//int Abs(int x) { //int로 명확히 들어오면 이게 먼저 반응
//    return x;
//}
//int main () {
//        std::cout << Abs(1.5) << '\n'; //템플릿
//        std::cout << Abs(-1.5) << '\n'; //템플릿
//        std::cout << Abs(1) << '\n'; // 인트
//        std::cout << Abs(-1) << '\n'; //인트
//}

//출제각각각ㄱ -> 타입에 따라서 다른 결과
//#include <iostream>
//template <class T>
//class Point {
//    T x, y;
//public:
//    Point(T x, T y): x(x), y(y) {}
////    void Print() const { //인라인 펑션으로 정의 -> 클래스 안에서 정의 -> 밖에서 정의하려면?(각각 펑션마다 템플릿 지정해줘야 함)
////        std::cout << x << "," << y <<'\n';
////    }
//    void Print() const;
//};
//template <class T> // 외부에서 정의하려면 템플릿 다시 선언 필요
//void Point<T>::Print() const { //템플릿에 대한 펑션 정의
//    std::cout << "T:" << x << "," << y <<'\n';
//}
//template <> //명시적 특수화 -> T 중 특수한 타입에 대해 해당 타입에 대해서만 다른 동작을 선언해줌 -> T를 안쓰니까 template<>만 선언
//void Point<int>::Print() const { //템플릿에 대한 펑션 정의 -> 인트형인 경우에만 됨?
//    std::cout <<"int:" << x << "," << y <<'\n';
//}
//int main() {
//    Point<double> p1(1.2,2);
//    Point<int> p2(3.3,5);//3.3넣어도 int니까 3로 들어감
//    p2.Print(); //3,5
//    p1.Print(); //1.2,2
//}

//#include <iostream>
//template <class T> //class 와 typename 은 동일
//class P {
//public:
//    void Print() const;
//};
//template <class T>
//void P<T>::Print() const{
//    std::cout << "Print" <<'\n';
//}
//template <> //명시적 특수화해줌 -> 특별한 타입에 대해 오버로딩해주느 경우
//void P<int>::Print() const{
//    std::cout << "int" << '\n';
//}
//
//int main() {
//    P<double> p1, p2;
//    P<int> p3;
//    p1.Print(); //Print
//    p2.Print(); //Print
//    p3.Print(); //int
//}

//#include <iostream>
//struct A {
//    A(int x = 0) {} //디폴트 아규먼트
//};
//int main() {
//
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
//    bool operator<(const Student& s) const {
//        return this->math > s.math; //이 뜻은 큰 놈이 뒤로 가야 함 -> 즉, 작은 놈부터 앞으로 간다. //수학성적 기준
//    }
//};
//struct Cmp {
//    bool operator() (Student s1, Student s2) {return s1.math > s2.math;} //less의 의미 -> 큰 값부터
//};
//
//
//int main() {
////    std::priority_queue<Student, std::vector<Student>, Cmp> pq;
//    std::priority_queue<Student> pq;
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

//#include <iostream>
//#include <queue>
//struct Cmp {
//    bool operator() (int i1, int i2) {return i1 < i2;} //less의 의미 -> 큰 값부터
//};
//
//int main() {
////    std::priority_queue<int, std::vector<int>, std::greater<int>> queue; // 디폴트 컨테이너: 벡터, defulat 정렬: less(뒤에 나오는 게 작은 값)
//    std::priority_queue<int, std::vector<int>, Cmp> queue;
//    queue.push(11);     queue.push(2);     queue.push(4);      queue.push(15);     queue.push(15);
//    queue.push(4);      queue.push(7);
//
//    while (!queue.empty()) {
//        std::cout << queue.top() << ' ';
//        queue.pop();
//    }
//    std::cout << '\n';
//}

//#include <iostream>
//#include <queue>
//using namespace std;
//
//struct Student {
//    int id;
//    int math, eng;
//    Student(int num, int m, int e) : id(num), math(m), eng(e) {}    // 생성자 정의
//};
//
//// 학번을 기준으로 학번(id) 값이 큰 것이 Top 을 유지 하도록 한다.
//struct cmp {
//    bool operator()(Student a, Student b) {
//        return a.id < b.id; //less의 의미
//    }
//};
//
//int main() {
//    // 위에서 만든 cmp 구조체를 넣어 준다.
//    priority_queue<Student, vector<Student>, cmp> pq;
//
//
//    pq.push(Student(3, 100, 50));
//    pq.push(Student(1, 60, 50));
//    pq.push(Student(2, 80, 50));
//    pq.push(Student(4, 90, 50));
//    pq.push(Student(5, 70, 40));
//
//    while (!pq.empty()) {
//        Student ts = pq.top(); pq.pop();
//        cout << "(학번, 수학 , 영어 ) : " << ts.id << ' ' << ts.math << ' ' << ts.eng << '\n';
//    }
//}

//Iterators
//#include <iostream>
//int main() {
//    int a[3] = {10, 20, 5};
//
////    int* p = a;
//    int* p = &a[0];
//    for (int i = 0; i < 3; i++) {
//        std::cout << *(p++) <<std::endl; //p값이 1씩 증가한다는 것은 다음 엘리먼트의 주소로 넘어간다는 것
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

// 포인터는 마지막 주소를 모른다. ㅇ아래와 같이 해결하면 됨
//#include <iostream>
//int main() {
//    int a[3] = {10, 20, 5};
//    for (int* iter = std::begin(a); iter != std::end(a); iter ++) { //auto = int*
//            std::cout << *iter << ' ';
//            }
//            std::cout << '\n';
//
////    int *start, *end, *iter;
////    start = a; //어레이의 첫 번쨰(10)의 주소
////    end = a + sizeof(a) / sizeof(int); //마지막을 지난 위치
////    for (iter = start; iter != end; iter++)
////        std::cout << *iter << std::endl; //10 20 5
//    }

//iterator Ranges
//#include <iostream>
//#include <vector>
////
//int main() {
//    std::vector<int> vec {10, 20, 30, 40, 50};
//
//
//}
//
//#include <iostream>
//
//int main() {
//    int arr[] = {10, 20, 30, 40, 50}; //어레이다 !!!  -> 포인터 나올 듯
////    for (auto iter = std::begin(arr); iter != std::end(arr); iter ++) { //auto = int*
////        std::cout << *iter << ' ';
////        }
//    for (int* s = arr; s != arr + sizeof(arr)/sizeof(int); s++){
//        std::cout << *s << ' ';
//    }
//        std::cout << '\n';
//}

//#include <iostream>
//#include <vector>
//void print_reverse(const std::vector<int>& v) {
//    auto p = std::end(v);
//    while (p != std::begin(v)) {
//        p--; //마지막에서 하나 지나쳐있으니까 필수
//        std::cout << *p << ' ';
//    }
//    std::cout << '\n';
//}
//int main() {
//    std::vector<int> vec(20);
//    for (int i = 0; i < vec.size() ; i++)
//        vec[i] = i + 1; //1부터 20까지 포함
//    print_reverse(vec); //거꾸로
//}
//
//#include <iostream>
//#include <list>
//#include <string>
//int main() {
//    std::list<std::string> lst {"zero", "one", "two", "three", "four"};
//    for (auto iter = std::begin(lst); iter != std::end(lst); iter++) {
//        std::cout << *iter << std::endl;
//    }
//}

//lambda function

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
//                [&](int element) {element *= element;}); //이렇게 해도 안바뀐다 -> []는 외부에서 가져오는 변수 -> 함수 로컬 배리어블이 아님
//
//    std::for_each(v.begin(), v.end(), [](int element) {std::cout << element << " ";});
//}

//#include <iostream>
//int main() {
//
//    int x = 1, y = 2;
//    auto print0 = [=]() { std::cout << x << " , " << y << std::endl;};
//    auto print1 = [=] (int a) mutable { x += a; std::cout << ++x << " , " << ++y << std::endl;}; //mutable 없으면 안에서 prefix도 못씀
//    auto print2 = [&](int a) { x += a; std::cout << ++x << " , " << ++y << std::endl;}; //이건 외부 변수 x에 대해서 레퍼런스
//    auto print3 = [=, &y] {std::cout << x << " , " << y++ << std::endl;}; //y만 바뀜
//    print0();
//
//    std::cout << "after: " << x << ", " << y  << std::endl;
//    x = 1; y = 2; print1(1);
//    std::cout << "after: " << x << ", " << y << std::endl; //copy 캡처니까 실체는 안바뀜
//    x = 1; y = 2; print2(1);
//    std::cout << "after: " << x << ", " << y << std::endl;
//    x = 1; y = 2; print3();
//    std::cout << "after: " << x << ", " << y << std::endl;
//
//}

//Lambda Function p.303

//#include <functional>
//#include <iostream>
//using namespace  std;
//
//class PrintFunc
//{
//public:
//    void operator()(int x) const{cout << x << endl;    }
//};
//
//void PrintNum(int num)
//{
//    cout << num << endl;
//}
//
//void RunFunction(int i, const function<void(int)>& fn)
//{
//    fn(i);
//}
//
//int main()
//{
//    void(*fnPtr)(int); //함수 포인터 선언
//    fnPtr = PrintNum;
//
//    auto lambda_print = [](int num) {cout << num << endl; };
//
//    PrintFunc func_obj_print;
//
//    RunFunction(13, fnPtr); //함수 포인터
//    RunFunction(17, lambda_print); //람다
//    RunFunction(23, func_obj_print); //함수 오브젝트
//    RunFunction(29, PrintNum); //함수
//
//    //13, 17, 23, 29 출력
//
//    return 0;
//}


//#include <iostream>
//#include <functional>
//std::function<double(double)> derivative0
//  (std::function<double(double)> f, double h) {
//      return [f, h](double x) { return (f(x + h) - f(x)) / h; }; }
//
//double fun(double x) { return 3 * x*x + 5; }
//
//int main() {
//    double h = 0.00001;
//    auto der0 = derivative0(fun, h);
//    std::cout << der0(5.) << std::endl;
//    auto der1 = [h](double x) { return (fun(x + h) - fun(x)) / h; };
//    std::cout << der1(5.) << std::endl;
//}


//
//#include <iostream>
//#include <functional>
//std::function<double(double)> D(double (*f)(double), int h) {
//    return [f,h](double x)-> double { return ((f(x + h) - f(x))/h);};
//}
//
//double F(double x) {
//    return 2 * x * x + 3 * x + 1;
//}
//
//int main() {
////    for (double h = 0.1; h > 0.0000001; h *= 0.1) {
//    double h = 0.0000001;
//        auto dF  = D(F,h);
//        std::cout << dF(100000.) << std::endl; //왜 nan?
////    }
//}

//#include <iostream>
//#include <vector>
////#include <algorithm>
//int main() {
//    int sum = 0;
//    std::vector<int> vec{5, 22, 6, -3, 8, 4};
//    for_each(std::begin(vec), std::end(vec),
//     [&sum](int x) { sum += x; });
//    std::cout << "The sum is " << sum << '\n';
//}


#include <iostream>
#include <vector>
#include <numeric> //std::iota
////
//int main()
//{
//    const int n = 10;
//    std::vector<int> v(n);
//
//    std::iota(v.begin(), v.end(), 3); //1부터 하나씩 채움(1씩 증가)
//
//    for (int &i: v) {
//        std::cout << i << ' ';
//    }
//
//    return 0;
//}
//int main() {
//    std::vector<int> seq(1000, 0); // 1000개의 0으로 채움
//    std::iota(std::begin(seq), std::end(seq), 0);
//    auto iter = std::find(std::begin(seq), std::end(seq), 1000); // 끝까지 수행 다 하면 end값 리턴
//    if (iter != std::end(seq))
//    std::cout << *iter << " is present" << '\n';
//    else
//       std::cout << "1000 is NOT present" << '\n'; // 999까지니까 1000은 없다
//    std::vector<int> seq2(seq.size() - 2);
//    std::copy(std::begin(seq) + 1, std::end(seq) - 1,
//      std::begin(seq2)); //seq2의 시작지점에 begin부터 end 복사
//    std::for_each(std::begin(seq2), std::end(seq2), [](int x){ std::cout << x ;});
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//void print(int x) {
//    std::cout << x << std::endl;
//}
//
//int main() {
//    std::vector<int> v { 1,2,3,4,5};
//    std::for_each(v.begin(), v.end(), print); //각 요소가 3번쨰 함수의 파라미터로 들어가는 것이기 때문에 () 안써도됨
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//int main() {
//    std::vector<int> v {1,2,3,4,5};
//
//    auto iter = std::find(v.begin(), v.end(), 3);
//    if (iter == v.end()) {
//        std::cout << "x";
//    }
//    else {
////        std::cout << *iter;
//        *iter = 100; //auto iter은 레퍼런스가 아니다 (엘리먼트의 위치를 접근 -> 간접연산자 취하면 실체)
//    }
//    for (auto x: v) std::cout << x << ","; //실체니까 변함
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//char F1(char ch) {
//    if (ch >= 'a' && ch <= 'z') {
//        return ch - 'a' + 'A'; //대문자로 변환
//    }
//    else return ch;
//}
//int main() {
//    std::string s1 = "aBcd";
//    std::string s2 = "    ";
//
//    std::transform(std::begin(s1), s1.end(), s2.begin(), ::toupper);
//    std::cout << s2 << std::endl;
//
//    s2 = "   "; //3칸
//    std::transform(s1.begin(), s1.end(), s2.begin(), F1);
//    std::cout << s2 << std::endl;
//
//    s2 = "    ";
//    std::transform(s1.begin(), s1.end(), s2.begin()+1, [] (char ch) -> char {
//        if (ch >= 'a' && ch <= 'z') return ch - 'a' + 'A';
//        else return ch;
//    });
//    std::cout << s2 << std::endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <string>
//
//
//int main() {
//    std::string str1 = "aBcd";
//
//    auto iter = std::remove(str1.begin(), str1.end(), 'a');
//    std::cout << str1 << std::endl; // 왜 Bcdd 출력??!?!?!? Bcd 아닌가???
//    // remove -> 실제로 엘리먼트르 빼는 게 아니라 뒤에다가 넘겨주는 것
//    // 지워질 데이터의 시작 이터레이터가 end가 된다.
//    //erase 활용
//    str1.erase(iter);
//    std::cout << str1 << std::endl;
//}
//#include<iostream>
//#include <vector>
//#include <algorithm>
//#include <numeric>
//int main() {
//    std::vector<int> seq(1000, 0);
//    std::iota(std::begin(seq), std::end(seq), 0); //0 ~ 999
//    std::vector<int> seq2(seq.size() - 2);
//    std::copy(std::begin(seq) + 1, std::end(seq) - 1, std::begin(seq2));
//    for (auto i : seq2) std::cout << i << " " ; // 1~998
//}

//#include <iostream>
//#include <functional>
//#include <cmath>
//
////f 하고 h가 주어졌을 때 함수를 만드는 것
////f' = Der(f,h);
//std::function<double(double)> Der //리턴타입이 더블이고, 파라미터가 더블 한 개인 함수 타입 (밑에 이어서)
//    (std::function<double(double)> f, double h) {
//    return [f,h](double x) {
//        return (f(x+h)-f(x)) / h;
//    };
//}
//
//double f(double x) {
//    return 2*x*x + 3*x + 2;
////    return log(x); //로그(x) 미분하면 x분의 1
//}
//
//int main() {
//    auto f_p = Der(f, 0.000000001); //h 값이 작을수록 오차 줄어듦
//    std::cout << f_p(3);
//}

//mutable로 수정해도 copy된 걸 수정하는 거니까 실체가 수정되는 게 아님????????? 그럼 mutable 왜 써?

//
//#include<iostream>
//#include<string>
//using namespace std;
//
//int main(void) {
//    int result1 = 1;
//    int result2 = 2;
//    int result3 = 3;
//    int result4 = 4;
//
//    // 전체 복사
//    cout << "3. 전체 복사" << endl;
//    [=](int x) mutable //mutable 없으면 캡처된 것들 못 바꿔 아래처럼
//    {
//        result1 += x;
//        result2 += x;
//        result3 += x;
//        result4 += x;
//        cout << "result1, 2 : " << result1 << ", " << result2 << endl;
//        cout << "result3, 4 : " << result3 << ", " << result4 << endl;
//        cout << "매개변수 : " << x << endl;
//    }(30);
//
//    cout << result1 << result2 << result3 << result4 <<endl; //카피된 값을 바꾸는 거라서 안바뀜요 ㅋ
//
//
//     cout << endl;
//
//    int n = 100;
//    // 전체 참조
//     [&](int& y)
//     {
//         y += 10;
//         result1 += y;
//         result2 += y;
//         result3 += y;
//         result4 += y;
//         cout << "result1, 2 : " << result1 << ", " << result2 << endl;
//         cout << "result3, 4 : " << result3 << ", " << result4 << endl;
//         cout << "매개변수 : " << y << endl;
//
//
//     }(n);
//
//     cout << "result1, 2 : " << result1 << ", " << result2 << endl;
//     cout << "result3, 4 : " << result3 << ", " << result4 << endl;
//    cout << n << endl; //n이 바뀜
//
//    return 0;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main() {
//    std::vector<int> vec { 10, 20, 30, 35, 40, 45, 50, 55};
//    auto strm = std::ostream_iterator<int> (std::cout, ",");
//    std::copy(std::begin(vec), std::end(vec), strm);
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main() {
//    std::vector<int> seq { 2,3,4,5,6,7,8,9,10,11,12};
//    auto is_even = [](int n) {return n%2 == 0;};
//    int even_count = std::count_if(seq.begin(), seq.end(), [](int x) { return x%2 == 0;});
//    std::cout << even_count;
//}


//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <random>
//
//int main() {
//    std::vector<int> vec(20);
//    std::random_device dev;
//    std::mt19937 generator(dev());
//
//    std::shuffle(std::begin(vec), std::end(vec), generator);
//    for (auto x : vec) std::cout << x << " ";
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//int main() {
//    std::vector<int> nums(20);
//    std::iota(std::begin(nums), std::end(nums), 1);
//    std::generate(nums.begin(), nums.end(), []() {return 2;});
//    for (auto x : nums) std::cout << x << " ";
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <numeric>
//int main() {
//    std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int sum = std::accumulate(v.begin(), v.end(), 0); //0은 초기값이다 -> 0부터 더하기 시작
//    int product =
//       std::accumulate(v.begin(), v.end(), 1, std::multiplies<int>()); //중간에 1은 초기값이다 (어디서부터 곱할 것인지!!)
//    std::cout << sum << std::endl;
//    std::cout << product << std::endl;
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//int main() {
//    std::vector<std::string> words { "fred", "ella", "adam", "jo", "pat", "mel", "anna", "ed", "oscar", "will", "tom", "ingrid" };
//    auto it = std::partition(std::begin(words), std::end(words), [](const std::string& w ) { return w.length() > 3; }); //it를 기준으로 두 개의 묶음으로
//
//}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//int main() {
//    std::vector<int> nums1 {1,2,7,8,8};
//    std::vector<int> nums2 {3,4,9,10, 11};
////    std::generate(nums1.begin(), nums1.end(),  []() {return 10;});
//    std::vector<int> merged(nums1.size() + nums2.size());
//    std::merge(std::begin(nums1), std::end(nums1),
//    std::begin(nums2), std::end(nums2), std::begin(merged));
//    for (auto x : merged) std::cout << x << " ";
//
//}

#include <iostream>
#include <vector>
#include <algorithm>
int main() {
    std::vector<int> nums {1,2,7,8,8, 8,10,8,3};
    auto iter = std::remove(std::begin(nums), std::end(nums), 8);
    nums.erase(iter, std::end(nums));
    for (auto i : nums) std::cout << i << " ";
    std::cout << '\n';


    nums.erase(nums.begin()+1, nums.begin()+3); //2번째 3번째 요소 삭제
    for (auto i : nums) std::cout << i << " ";
    std::cout << '\n';

    auto iter1 = std::remove_if(nums.begin(), nums.end(), [](int n){return n%2 == 0;});
    nums.erase(iter1, std::end(nums));
    for (auto i : nums) std::cout << i << " ";
    std::cout << '\n';
}
