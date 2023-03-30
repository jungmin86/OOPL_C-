double f1(double x) {
	return 3 * x * x + 2 * x + 5;
}

double f2(double x) {
	return sin(x);
}

int main() {
	std::cout << "*** 1 ***" << std::endl;

	CPoint p0, p1(10, 20), p2(100, 200);
	std::cout << p1 << "," << p2 << std::endl; //(10, 20), (100, 200)
	p0 += p1 + p2;
	std::cout << p0 << std::endl; // (110, 220)

	CLine l1(p1, p2), l2(p1.X, p1.Y, p2.X, p2.Y);
	std::cout << l1 << "," << l2 << std::endl; // (10, 20) - (100, 200), (10, 20) - (100, 200)

	CRect r0;
	const CRect r1(0, 0, 500, 300), r2(200, 100, 700, 400), r3(550, 350, 750, 400);
	std::cout << r1 << std::endl;			// (0, 0)#(500, 300)
	std::cout << r1.Center() << std::endl;	// (250, 150)

	r0 = r1;	
	r0.Union(r2);
	std::cout << r0 << std::endl;			// (0, 0)#(700, 400)

	r0 = r1;	
	r0.Intersect(r2);
	std::cout << r0 << ", Width: " << r0.Width() << ", Height: " << r0.Height() << std::endl; // (200, 100)#(500, 300), Width: 300, Height : 200

	r0 = r1;	
	r0.Intersect(r3);
	std::cout << r0 << std::boolalpha << r0.IsRect() << std::endl;	// false
		

	std::cout << "\n*** 2 ***" << std::endl;

	CVector3D v0, v1(0.5, 7.2, -3.5), v2(-3.4, 6.5, 9.3);

	std::cout << v1 << ", abs: " << CVector3D::abs(v1) << std::endl;	// <0.5, 7.2, -3.5>, abs: 8.02122
	v0 = v1; 
	v0.Normalize();							// ũ�Ⱑ 1				
	std::cout << v0 << std::endl;			// < 0.0623346, 0.897619, -0.436343 >
	std::cout << v1.Dot(v2) << std::endl;	// 12.55
	v0 = v1.Cross(v2);						// x = v1.y*v2.z - v1.z*v2.y;		y = v1.z * v2.x - v1.x * v2.z;		z = v1.x * v2.y - v1.y * v2.x;
	std::cout << v0 << std::endl;			// < 89.71, 7.25, 27.73 >
	std::cout << -v0 << std::endl;			// <-89.71, -7.25, -27.73>
	std::cout << v1 + v2 << std::endl;		// <-2.9, 13.7, 5.8>
	std::cout << v1 - v2 << std::endl;		// <3.9, 0.7, -12.8>

	v0 = CVector3D();
	v0 += v1 + v2;
	std::cout << v0 << std::endl;			// <-2.9, 13.7, 5.8>
	std::cout << 5 * v0 << std::endl;		// <-14.5, 68.5, 29>


	std::cout << "\n*** 3 ***" << std::endl;
	std::function<double(double)> g = Composition(f1, f2); // g = f1(f2)
	std::cout << g(0) << std::endl;				// 5
	std::cout << g(acos(-1.) / 2.) << std::endl;	// 10
	std::cout << g(acos(-1.)) << std::endl;		// 5
	std::cout << g(acos(-1) * 3 / 2) << std::endl;	// 6
}