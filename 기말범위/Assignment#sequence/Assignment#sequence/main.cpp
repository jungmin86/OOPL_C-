//
//  main.cpp
//  Assignment#sequence
//
//  Created by Jungmin Kim on 2022/11/01.
//

//#include <iostream>
//int sum1(int n) {
//    int s = 0;
//    while (n > 0) {
//        s++;
//        n--;
//    }
//    return s;
//}
//int input;
//int sum2() {
//    int s = 0;
//    while (input > 0) {
//        s++;
//        input--; //인풋이 0이 됨
//    }
//    return s;
//}
//
//int sum3() {
//    int s = 0;
//    for (int i = input; i > 0; i--)
//        s++;
//    return s;
//}
//
//int main() {
//   input = 5; //global variable
//   std::cout << sum1(input) << '\n';
//   std::cout << sum2() << '\n'; // 여기서 인풋이 0이 됨
//   std::cout << sum3() << '\n'; //인풋 직접적으로 안 건드림
//}


//#include <iostream>
//int sum1(int n) {
//    int s = 0;
//    while (n > 0) {
//        s++;
//        n--;
//    }
//    return s;
//}
//int input;
//int sum2() {
//    int s = 0;
//    while (input > 0) {
//        s++;
//        input--;
//    }
//    return s;
//}
//int sum3() {
//    int s = 0;
//    for (int i = input; i > 0; i--)
//        s++;
//    return s;
//}
//int main() {
//   input = 5;
//   std::cout << sum1(input) << '\n';
//   std::cout << sum3() << '\n';
//   std::cout << sum2() << '\n';
//}


//#include <iostream>
//int max(int n) {
//    return n;
//}
//int max(int m, int n) {
//    return (m >= n)? m : n; // 큰 수
//}
//int max(int m, int n, int r) {
//    int x = m; //첫번째 수 기준
//    if (n > x)
//        x = n; //큰 수로 바꿈
//    if (r > x)
//        x = r; // 큰 수로 바꿈
//    return x; //가장 큰 수
//}
//int main() {
//    std::cout << max(4) << '\n';
//    std::cout << max(4, 5) << '\n';
//    std::cout << max(5, 4) << '\n';
//    std::cout << max(1, 2, 3) << '\n';
//    std::cout << max(2, 1, 3) << '\n';
//    std::cout << max(2, 1, 2) << '\n';
//}

//#include <iostream>
//int main() {
////    int x, y, *p, *q;
////    p = &x;
////    x = 5;
////    std::cout << *p << '\n';
//
////    int x, y, *p, *q;
////    x = 5;
////    p = &x;
////    std::cout << *p << '\n';
//
////    int x, y, *p, *q;
////    p = &x;
////    *p = 8;
////    std::cout << *p << '\n';
//
//    int x, y, *p, *q;
//    p = &x;
//    q = &y;
//    x = 100;
//    y = 200;
//    *q = *p; //*p는 100, *q는 200
//    std::cout << x << ' ' << y << '\n'; //y도 같이 움직임
//    std::cout << *p << ' ' << *q << '\n';
//
//
//}

//#include <iostream>
//void Fn1(int *a, int* b){
//    int t = *a;
//    *a = *b;
//    *b = t;
//    std::cout << *a << *b << std::endl;
//}
//void Fn2(int *a, int* b){
//    int* t = a; //여기서 a는 주소를 가리키는 것뿐 -> 값만 전달됨
//    a = b;
//    b = t;
//    std::cout << *a << *b << std::endl; //마지막에 역참조연산자로 실체 호출
//}
//void Fn3(int &a, int& b){
//    int t = a;
//    a = b;
//    b = t;
//    std::cout << a << b << std::endl; //마지막에 역참조연산자로 실체 호출
//}
//int main(){
//    int a = 0;
//    int b = 1;
//    std::cout << a << b << std::endl;
////    Fn1(&a,&b); //실체 바뀜
//    Fn2(&a,&b); //실체 안바뀜
////    Fn3(a,b); //실체 바뀜
////    Fn2(a,b); //이건 안됨
//    std::cout << a << b << std::endl;
//}

//#include <iostream>
//int main() {
////    int x, y, *p, *q;
////    p = &x;
////    q = &y;
////    x = 100;
////    y = 200;
////    q = p; //주소만 바꿈 -> p의 값이 q에 대입될 뿐;
////    std::cout << x << ' ' << y << '\n';
////    std::cout << *p << ' ' << *q << '\n';
//
//    int x, y, *p, *q;
//    x = 5;
//    y = 10;
//    p = q = &y;//p와 q는 y의 값이 가지고 있는 주소를 가리킴
//    std::cout << *p << ' ' << *q << '\n';// 10. 10
//    *p = 100;
//    *q = 1;
//    std::cout << x << ' ' << y << '\n'; // 5. 1
//
//}

//#include <iostream>
//int sum(int x, int y) {
//    return x + y;
//}
//void sum(int x, int y, int* s) {
//    *s = x+y;
//}
//void sum(int x, int y, int& s) {
//    s = x + y;
//}
//int main() {
//    int x, y, s1, s2, s3;
//    std::cin >> x >> y;
//    s1 = sum(x, y);
//    sum(x, y, &s2);
//    sum(x, y, s3);
//    std::cout << s1 << ' ' << s2 << ' ' << s3 << '\n';
//
//}

//#include <iostream>
//void Hanoi(int m, char start, char middle, char end){
//    if(m == 1){
//        std::cout << "Move disc " << m << " from " << start << " to " << end
//<< std::endl;
//    }
//    else{
//        Hanoi(m-1, start, end, middle);
//        std::cout << "Move disc " << m << " from " << start << " to " << end
//<< std::endl;
//        Hanoi(m-1, middle, start, end);
//    }
//}
//int main(){
//    int discs = 3;
//    Hanoi(discs, 'A', 'B', 'C');
//}

//#include <iostream>
//#include <vector>
//
//int main() {
//    std::vector<int> list{2, 3, 1, 14, 4};
//    int x = 2;
//
//    std::cout << list[list.size() - 1] << std::endl;
//}

//#include <iostream>
//#include <vector>
//
//int main() {
//    std::vector<int> list1(5), list2{ 3, 3, 3, 3, 3 };
//    list1 = list2; // 값만 복사? -> 주소는 다름
//    list1[0] = 2;
//    for (auto elem : list1)
//        std::cout << elem << " ";
//    for (auto elem: list2)
//        std::cout << elem << " ";
////    std::cout << list1 << " " << list2;
//}

//#include <iostream>
//#include <vector>
//int sum_positive(const std::vector<int>& v) {
//    int result = 0;
//    for (auto& elem : v) {
//        if (elem > 0)
//            result += elem;
//    }
//    return result;
//}
//
//int count_evens(const std::vector<int>& v) {
//    int count = 0;
//    for (auto& elem : v) {
//        if (elem %2 == 0)
//            count++;
//    }
//    return count;
//}
//
//
//int main() {
//    const std::vector<int> v {-1,0,-2,1,2,3,4,5,6};
//    std::cout << sum_positive(v) << std::endl;
//    std::cout << count_evens(v) << std::endl;
//}

//#include <iostream>
//#include <vector>
//int main() {
//    std::vector<std::vector<int>> collection(100, std::vector<int>(200));
//    int count1 = 0;
//    int count2 = 0;
////    for (auto row: collection) {
//////        count1 ++;
////        for (auto col : row)
//////            count2++;
//////            std::cout << col << " ";
////    }
//    std::cout << collection[15] << " ";
//        
////    std::cout << count1 << " " << count2;
//}


