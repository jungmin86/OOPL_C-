/* #include <iostream>
int main() {
	int x, y, sum, subtraction, multiplication, remainder, quotient;
	std::cout << "Enter the two integer numbers.\n";
	std::cin >> x >> y;
	sum = x + y; // ����
	subtraction = x - y; // ����
	multiplication = x * y; // ����
	quotient = x / y; // �������� ��
	remainder = x % y; // �������� ������

	std::cout << x << "�� " << y << "�� ������ " << sum << '\n';
	std::cout << x << "�� " << y << "�� ������ " << subtraction << '\n';
	std::cout << x << "�� " << y << "�� ���� " << multiplication << '\n';
	std::cout << x << "�� " << y << "�� ���� ���� " << quotient << '\n';
	std::cout << x << "�� " << y << "�� ���� �������� " << remainder << '\n';
} */

/*#include <iostream>
int main() {
	double x, y, sum, subtraction, multiplication, division;
	std::cout << "Enter the two integer numbers.\n";
	std::cin >> x >> y; // �� ���� �Ǽ� �Է¹ޱ�
	sum = x + y; // ����
	subtraction = x - y; // ����
	multiplication = x * y; // ����
	division = x / y; // ������
	
	std::cout << x << "�� " << y << "�� ������ " << sum << '\n';
	std::cout << x << "�� " << y << "�� ������ " << subtraction << '\n';
	std::cout << x << "�� " << y << "�� ���� " << multiplication << '\n';
	std::cout << x << "�� " << y << "�� ���� ���� " << division << '\n';
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
	std::cout << "�� ��������� " << x << "�Դϴ�.\n"; 
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
	float x; // �Ǽ��� �ش��ϴ� ��
	int first_num; // x�� ������ ���� �ڸ�
	std::cout << "�Ǽ��� �Է��Ͻÿ�.\n";
	std::cin >> x; // �Ǽ��� �ش��ϴ� �� �Է�
	first_num = (int)x % 10; // ���� �ڸ��� int�� ������ ���� (������ �Ͻ������� ����ȯ�ؼ� ���� �ڸ� ����)
	std::cout << first_num << std::endl; // ���

} */

#include <iostream>
int main() {
	double width, height, area, round; // ���� ����
	std::cout << "���簢���� ���� �Է����ּ���.\n";
	std::cin >> width; // �� �Է¹ޱ�
	std::cout << "���簢���� ���̸� �Է����ּ���.\n";
	std::cin >> height; // ���� �Է¹ޱ�
	area = width * height; // ���� ����
	round = 2 * (height + width); // �ѷ� ����
	std::cout << "���簢���� ������ " << area << "�Դϴ�.\n"; // ���
	std::cout << "���簢���� �ѷ��� " << round << "�Դϴ�.\n"; // ���
} 