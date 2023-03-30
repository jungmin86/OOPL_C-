//
//  main.cpp
//  Sequence
//
//  Created by Jungmin Kim on 2022/10/24.
//

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
//10개의 엘리먼트 ㅂ
//출제
//치팅페이퍼 A4 1장
//int main() {
//    std::vector<int> x(10);
//    srand((unsigned)time(nullptr));
//    for (int i = 0; i < 10; i++) {
//        int k;
//        do {
//            x[i] = rand() % 10;
//            for(k = 0; k < i; ++k) {
//                if (x[i] == x[k])
//                    break; //++k가 동작하지 않음 + 중복값 없으면 k는 결국 i가 됨 (k == i)
//        }
//        } while(k < i); //break를 했다는 얘기 -> 같은 값 있음 -> 새로운 i로 가지 않고 다시 do 실행
//
//
//    }
////    for (int i = 0; i < 10; ++i)
//    for(int &ele : x) // 시퀀스는 자동으로 0번부터 size -1번까지의 반복 가능
////        std::cout << x[i] << std::endl;
//        std::cout << ele << std::endl;
//}
//int main() {
//    std::vector<int> x {1,2,3,4};
//    std::cout << x.at(2);
//}
//p.150
//출제!!!
//#include <iostream>
//#include <vector>
//int main() {
//    std::vector<double> vec(5);
//    std::cout << "Please enter 5 numbers: ";
//
////    for (double elem : vec)// 모두 0이 출력
//    for(double &elem : vec) //벡터 안에 있는 요소의 실체를 가져와야 함 -> 실체를 바꿔야 하니까
//        std::cin >> elem;
//    for (double elem : vec) //값만 가져와도 되니까 그냥 elem
//      std::cout << elem << '\n'; //실체를 안 가져오면 0만 출력됨
//}

//p.151
//레퍼런스 & 무조건 출제된다

//#include <iostream>
//#include <vector>
//void print(std::vector<int> v) {
//   for (int elem : v) // 출력은 실체와 상관ㅇ 없다 -> 값만 가져오면 됨
//       std::cout << elem << " ";
//    std::cout << '\n';
//
//}
//void square(std::vector<int>& v) {
//   for (int& elem : v) // 값을 바꿔야 하니까 레퍼런스 연산자
//       elem *= elem; //제곱
//}
//int sum(std::vector<int> v) {
//    int result = 0;
//    for (int elem : v)
//        result += elem;
//    return result;
//}
//int main() {
//    std::vector<int> list{ 2, 4, 6, 8, };
//    print(list);
//    std::cout << sum(list) << '\n';
//    square(list);
//    print(list);
//    std::cout << sum(list) << '\n';
//}

//#include <vector>
//#include <cstdlib>
//#include <ctime>
//
//int main() {
//    std::vector<int> v1(10), v2;
//    v2 = v1; //대입일 뿐 실체가 같아지는 게 아님 -> 값만 이동
//    v1[0] = 50;
//
//    std::cout << v2[0] << std::endl; //50? 0?
//}

//void make_random(std::vector<int>& v, int size) {
//    v.clear();
//
//    int n = rand() % size + 1; // 1,2,3,4,5 5개 경우의 수
//    for (int i = 0; i < n ; i++)
//        v.push_back(rand());
//}
//int main() {
//    srand((unsigned) time(0));
//    std::vector<int> list {1,2,3,4};
//    make_random(list, 5);
//    for (auto elem : list)
//        std::cout << elem << " ";
//}

//ㅔ.152
//#include <iostream>
//#include <vector>
//

//bool is_prime(int n) {
//    for (int trial_factor = 2; trial_factor < n ; trial_factor ++) {
//        if (n % trial_factor == 0)
//            return false;
//    }
//    return true;
//}
//
//std::vector<int> primes (int begin, int end) {
//    std::vector<int> result;
//    for (int i = begin; i <= end; i++) {
//        if (is_prime(i)) result.push_back(i);
//    }
//    return result;
//}
//int main() {
//    int low, high;
//    std::cin >> low >> high;
//    std::vector<int> prime_list = primes(low, high);
//    for (auto elem : prime_list)
//        std::cout << elem << " ";
//}
//void Fn(std::vector<int>& v) { //레퍼런스 붙이면 아규먼트로 전달된 인스턴스에 대해서 별명을 지어주는 것 -> 메인에 있는 v 수정
//    v.push_back(10); //메인함수에 있는 v는 바뀌지 않음
//}
//void Print(std::vector<int> v) {
//    for (auto e : v) {
//        std::cout << e <<std::endl;
//    }
//}
//
//int main() {
//    std::vector<int> v;
//    Fn(v);
//    Print(v);
//}

//#include <iostream>
//#include <vector>
//
//std::vector<int> Fn(std::vector<int> v1) { //레퍼런스 붙이면 아규먼트로 전달된 인스턴스에 대해서 별명을 지어주는 것 -> 메인에 있는 v 수정
//    std::vector<int> v2 = v1; //값만 복사
//    v2.push_back(10); //메인함수에 있는 v는 바뀌지 않음
//
//    return v2;
//}
//void Print(std::vector<int> v) {
//    for (auto e : v) { //e는 v에 있는 엘리먼트 들과 다른 실체 -> v의 엘레먼트 값을 바꾸고 싶으면? ->e를 레퍼런스로 받기 -> v도 레퍼런스로 받아야 함 p.151 참고
//        std::cout << e <<" ";
//    }
//}
//
//int main() {
//    std::vector<int> v1(2,4), v2; //v1 -> [3,3]
//    v2 = Fn(v1);
//    Print(v2);
//}

//3차원 배열

#include <iostream>
#include <vector>

int main() {
    std::vector<std::vector<std::vector<int>>> v(4, std::vector<std::vector<int>>(3, std::vector<int>(2)));
    int count = 0;
    for (auto one : v) {
        for (auto two : one ) {
            for (auto three : two)
                count ++;
        }
    }
    std::cout << count ;
        
}

//Pass by refe
//#include <iostream>
//#include <vector>
//
//void F(std::vector<int>* p) {
//    (*p).push_back(10); //간접연산자 -> 실체 -> 연산자 우선순위 떄문에 괄호 필수
//    //"."도 멤버를 거리킬 수 있는 연산자이지만, 포인터가 옆에 있을 때에는 아래처럼 써도 됨
//    //.을 쓰면 인스턴스고, ->는 포인터임!!!!!!!!대박ㅂ대박
////    *p -> push_back(5); //이건 왜 간접연산자 안써?
//}
//
//int main() {
//    std::vector<int> v{1,2,3};
//
////    F(y); // 주소를 넘겨줘야 함
//    F(&v);
//    for (auto x : v)
//        std::cout << x << " ";
//}

//#include <iostream>
//#include <vector>
//
//void F(std::vector<int>* p) {
//    (*p).push_back(4); //간접연산자 -> 실체 -> 연산자 우선순위 떄문에 괄호 필수
//    //"."도 멤버를 거리킬 수 있는 연산자이지만, 포인터가 옆에 있을 때에는 아래처럼 써도 됨
//    //.을 쓰면 인스턴스고, ->는 포인터임!!!!!!!!대박ㅂ대박
//    p -> push_back(5); //이건 왜 간접연산자 안써?
//}
//
//int main() {
//    std::vector<int> v{1,2,3};
//
////    F(y); // 주소를 넘겨줘야 함
//    F(&v);
//    for (auto x : v)
//        std::cout << x << " ";
//}

#include <iostream>
#include <vector>
#include <random>

//using std::vector;

//void make_random(std::vector<int> &v, int size)
//// size is maximum size
//{
//v.clear();
//int n = rand() % size + 1; //
//for (int i = 0; i < n; i++)
//    v.push_back(rand());
//
//}
//
//void Print(std::vector<int> &a) {
//    for (auto elem : a)
//        std::cout << elem << std::endl;
//}
//int main() {
//    std::vector<int> a{2,4,6,8,};
//    make_random(a, 5);
//    Print(a);
//}
//
//void Print(const std::vector<std::vector<double>>& m) {
//    for (auto row: m) {
//        for(double elem : row)
//            std::cout << elem << " ";
//    }
//}
//int main () {
//    std::vector<std::vector<double>> list {{1,2,3},{4,7,8}};
//    Print(list);
//}
