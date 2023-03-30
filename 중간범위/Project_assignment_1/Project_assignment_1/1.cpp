/* #include <iostream>
int main() {
	int x, y, sum, subtraction, multiplication, remainder, quotient;
	std::cout << "Enter the two integer numbers.\n";
	std::cin >> x >> y;
	sum = x + y; // 덧셈
	subtraction = x - y; // 뺄셈
	multiplication = x * y; // 곱셈
	quotient = x / y; // 나눗셈의 몫
	remainder = x % y; // 나눗셈의 나머지

	std::cout << x << "와 " << y << "의 덧셈은 " << sum << '\n';
	std::cout << x << "와 " << y << "의 뺄셈은 " << subtraction << '\n';
	std::cout << x << "와 " << y << "의 곱셈 " << multiplication << '\n';
	std::cout << x << "를 " << y << "로 나눈 몫은 " << quotient << '\n';
	std::cout << x << "를 " << y << "로 나눈 나머지는 " << remainder << '\n';
} */

/*#include <iostream>
int main() {
	double x, y, sum, subtraction, multiplication, division;
	std::cout << "Enter the two integer numbers.\n";
	std::cin >> x >> y; // 두 개의 실수 입력받기
	sum = x + y; // 덧셈
	subtraction = x - y; // 뺄셈
	multiplication = x * y; // 곱셈
	division = x / y; // 나눗셈
	
	std::cout << x << "와 " << y << "의 덧셈은 " << sum << '\n';
	std::cout << x << "와 " << y << "의 뺄셈은 " << subtraction << '\n';
	std::cout << x << "와 " << y << "의 곱셈 " << multiplication << '\n';
	std::cout << x << "를 " << y << "로 나눈 값은 " << division << '\n';
} */

/* #include <iostream>
int main() {
	int x = 5;
	double r = 5;
	char c = 65;
	unsigned char u1 = 250, u2;
	std::cout << x / 2 << std::endl;
	std::cout << r / 2 << std::endl;
	std::cout << (x + 2.) / 2 << std::endl;
	std::cout << (r + 2) / 2 << std::endl;
	std::cout << x / (1 + 1.) << std::endl;
	std::cout << r / (1 + 1) << std::endl;
	std::cout << static_cast<char>(c + 2) << std::endl;
	std::cout << (c + 2) << std::endl;
	std::cout << c << std::endl;
	std::cout << static_cast<int>(u2 = u1 + 5) << std::endl;
	std::cout << static_cast<int>(u2 = u1 + 15) << std::endl;
} */

/*#include <iostream>
int main() {
	int x = 980806;
	std::cout << "제 생년월일은 " << x << "입니다.\n"; 
} */

/*#include <iostream>
int main() {
	double C;
	double r = 0;
	const double PI = 3.14159;
	// Formula for the area of a circle given its radius
	
	// Get the radius from the user
	std::cout << "Please enter the circle's radius: ";
	std::cin >> r;
	C = 2 * PI * r;
	// Print the circumference
	std::cout << "Circumference is " << C << '\n';
} */

/*#include <iostream>
int main() {
	float x; // 실수에 해당하는 수
	int first_num; // x의 정수의 일의 자리
	std::cout << "실수를 입력하시오.\n";
	std::cin >> x; // 실수에 해당하는 수 입력
	first_num = (int)x % 10; // 일의 자리를 int형 변수에 저장 (정수로 일시적으로 형변환해서 일의 자리 추출)
	std::cout << first_num << std::endl; // 출력

} */

#include <iostream>
int main() {
	double width, height, area, round; // 변수 선언
	std::cout << "직사각형의 폭을 입력해주세요.\n";
	std::cin >> width; // 폭 입력받기
	std::cout << "직사각형의 높이를 입력해주세요.\n";
	std::cin >> height; // 높이 입력받기
	area = width * height; // 면적 공식
	round = 2 * (height + width); // 둘레 공식
	std::cout << "직사각형의 면적은 " << area << "입니다.\n"; // 출력
	std::cout << "직사각형의 둘레는 " << round << "입니다.\n"; // 출력
} 