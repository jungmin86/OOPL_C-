//
//  main.cpp
//  Exception
//
//  Created by Jungmin Kim on 2022/12/19.
//

#include <iostream>
#include <vector>
int main() {
std::vector<double> nums{ 1.0, 2.0, 3.0 }; int input;
std::cout << "Enter an index: ";
std::cin >> input;
try {
std::cout << nums.at(input) << '\n';
}
catch (std::exception& e) { //레퍼런스 -> std::exception이라는 클래스가 있따 -> 파생클래스 통해서 exception 생성 가능 (virtual 활용하면 이대로 써도 커스텀 exception 활용 가능 -> 다이내믹 디스패치)
     std::cout << e.what() << '\n'; //5 넣으면 vector 출력
  }
}
