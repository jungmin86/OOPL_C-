#include <iostream>
#include <cmath>
#include <vector>
#include <functional>

//1.
class CLine;
class CPoint {
public:
    int X, Y;
public:
    CPoint(): X(0), Y(0) {}
    CPoint(int xx, int yy):X(xx), Y(yy) {}
    int getX() const { return X; }
    int getY() const { return Y; }
    CPoint operator+(const CPoint& p) {
        int x = this->X + p.X;
        int y = this->Y + p.Y;
        return {x,y};
    }
    CPoint operator+=(const CPoint& p3) {
        this->X += p3.X;
        this-> Y += p3.Y;
        return {this->X, this->Y};
    }

    friend class CLine;
};

class CLine : public CPoint {
    CPoint P1, P2;
public:
    CLine(CPoint p1, CPoint p2) :P1(p1), P2(p2) {}
    CLine(int x, int y, int xx, int yy): P1(x,y), P2(xx,yy) {}

    friend std::ostream& operator<< (std::ostream& os, const CLine& l);
};

class CRect : public CPoint {
    CPoint P1, P2;
public:
    CRect() : P1(0,0), P2(0,0) {}
    CRect(int x, int y, int xx, int yy) : P1(x,y), P2(xx, yy) {}

    CPoint Center() const{
        int x = (P1.X + P2.X) / 2.;
        int y = (P1.Y + P2.Y) / 2.;
        return {x,y};
    }

    CRect& Union(const CRect r) {
        this-> P1.X = (this->P1.X < r.P1.X)? this-> P1.X : r.P1.X;
        this-> P1.Y = (this->P1.Y < r.P1.Y)? this-> P1.Y : r.P1.Y;
        this-> P2.X = (this->P2.X > r.P2.X)? this-> P2.X : r.P2.X;
        this-> P2.Y = (this->P2.Y > r.P2.Y)? this-> P2.Y : r.P2.Y;
        return *this;
    }
    CRect Intersect(const CRect r) {
        this->P1.X = (this->P1.X > r.P1.X)? this-> P1.X : r.P1.X;
        this->P1.Y = (this->P1.Y > r.P1.Y)? this-> P1.Y : r.P1.Y;
        this->P2.X = (this->P2.X < r.P2.X)? this-> P2.X : r.P2.X;
        this->P2.Y = (this->P2.Y < r.P2.Y)? this-> P2.Y : r.P2.Y;
        return *this;

    }
    int Width() const{
        return abs(P1.X - P2.X);
    }
    int Height() const{
        return abs(P1.Y - P2.Y);
    }

    bool IsRect() {
        if ((this->P1.X > this->P2.X) || (this->P1.Y > this->P2.Y)) return false;
        else return true;
    }


    friend std::ostream& operator<< (std::ostream& os, const CRect& r);
};

std::ostream& operator<<(std::ostream& out, const CPoint& p)
  {
    out << "(" << p.getX() << ", " << p.getY() << ")";
    return out;
  }
std::ostream& operator<<(std::ostream& out, const CLine& l)  {
    out << l.P1 << " - " << l.P2;
    return out;
}
std::ostream& operator<<(std::ostream& out, const CRect& r)  {
    if ((r.P1.X > r.P2.X) || (r.P1.Y > r.P2.Y))
        return out;
    out << r.P1 << "#" << r.P2;
    return out;
}

//2.
//class CVector3D{
//    std::vector<double> vec;
//public:
//    CVector3D(): vec(3) {}
//    CVector3D(double x, double y, double z) {vec.push_back(x); vec.push_back(y); vec.push_back(z);}
//
//    static double abs(CVector3D c);
//
//    double Dot(const CVector3D& c) {
//        return this->vec[0]*c.vec[0] + this->vec[1]*c.vec[1] + this->vec[2]*c.vec[2];
//    }
//
//    CVector3D Cross(const CVector3D& c) {
//        double x = this->vec[1] * c.vec[2] - this->vec[2]*c.vec[1];
//        double y = this->vec[2] * c.vec[0] - this->vec[0] * c.vec[2];
//        double z = this->vec[0] * c.vec[1] - this->vec[1] * c.vec[0];
//        return {x,y,z};
//    }
//
//    CVector3D operator-() {
//        return {-this->vec[0], -this->vec[1], -this->vec[2]};
//    }
//
//    CVector3D operator+(const CVector3D& c) {
//        return {this->vec[0] + c.vec[0], this->vec[1] + c.vec[1], this->vec[2] + c.vec[2]};
//    }
//
//    CVector3D operator-(const CVector3D& c) {
//        return {this->vec[0] - c.vec[0], this->vec[1] - c.vec[1], this->vec[2] - c.vec[2]};
//    }
//
//    CVector3D operator +=(const CVector3D& c) {
//        this->vec[0] += c.vec[0];
//        this->vec[1] += c.vec[1];
//        this->vec[2] += c.vec[2];
//        return {this->vec[0], this-> vec[1], this-> vec[2]};
//    }
//
//
//    friend std::ostream& operator<<(std::ostream& out, const CVector3D& c);
//    friend double abs(CVector3D c);
//    friend CVector3D operator*(int n, CVector3D c);
//};
//
//double CVector3D::abs(CVector3D c) {
//    double result = 0;
//    for (double e : c.vec) result += e;
//    return (result > 0) ? result: -result;
//}
//CVector3D operator*(int n, CVector3D c) {
//    return {n* c.vec[0], n* c.vec[1], n* c.vec[2]};
//}
//
//std::ostream& operator<<(std::ostream& out, const CVector3D& c) {
//    out << "<" << c.vec[0] << ", " << c.vec[1] << ", " <<c.vec[2] << ">";
//    return out;
//}

//3.

//std::function<double(double)> Composition (std::function<double(double)> f1, std::function<double(double)> f2) {
//    return [f1,f2] (double x) { return f1(f2(x));};
//}
//
//double f1(double x) {
//    return 3 * x * x + 2 * x + 5;
//}
//
//double f2(double x) {
//    return sin(x);
//}

int main() {
    std::cout << "*** 1 ***" << std::endl;

    CPoint p0, p1(10, 20), p2(100, 200);
    std::cout << p1 << "," << p2 << std::endl; //(10, 20), (100, 200)
    p0 += p1 + p2;
    std::cout << p0 << std::endl; // (110, 220)
//
//    CLine l1(p1, p2), l2(p1.X, p1.Y, p2.X, p2.Y);
//    std::cout << l1 << "," << l2 << std::endl; // (10, 20) - (100, 200), (10, 20) - (100, 200)
//
//    CRect r0;
//    const CRect r1(0, 0, 500, 300), r2(200, 100, 700, 400), r3(550, 350, 750, 400);
//    std::cout << r1 << std::endl;            // (0, 0)#(500, 300)
//    std::cout << r1.Center() << std::endl;    // (250, 150)
////
//    r0 = r1;
//    r0.Union(r2);
//    std::cout << r0 << std::endl;            // (0, 0)#(700, 400)
////
//    r0 = r1;
//    r0.Intersect(r2);
//    std::cout << r0 << ", Width: " << r0.Width() << ", Height: " << r0.Height() << std::endl; // (200, 100)#(500, 300), Width: 300, Height : 200
////
//    r0 = r1;
//    r0.Intersect(r3);
//    std::cout << r0 << std::boolalpha << r0.IsRect() << std::endl;    // false
////
//
//    std::cout << "\n*** 2 ***" << std::endl;
//
//    CVector3D v0, v1(0.5, 7.2, -3.5), v2(-3.4, 6.5, 9.3);
//    std::cout << v1 << ", abs: " << CVector3D::abs(v1) << std::endl;    // <0.5, 7.2, -3.5>, abs: 8.02122
//    v0 = v1;
//
////    v0.Normalize();                            // ≈©±‚∞° 1
////    std::cout << v0 << std::endl;            // < 0.0623346, 0.897619, -0.436343 >
//    std::cout << v1.Dot(v2) << std::endl;    // 12.55
//    v0 = v1.Cross(v2);                        // x = v1.y*v2.z - v1.z*v2.y;        y = v1.z * v2.x - v1.x * v2.z;        z = v1.x * v2.y - v1.y * v2.x;
//    std::cout << v0 << std::endl;            // < 89.71, 7.25, 27.73 >
//    std::cout << -v0 << std::endl;            // <-89.71, -7.25, -27.73>
//    std::cout << v1 + v2 << std::endl;        // <-2.9, 13.7, 5.8>
//    std::cout << v1 - v2 << std::endl;        // <3.9, 0.7, -12.8>
////
//    v0 = CVector3D();
//    v0 += v1 + v2;
//    std::cout << v0 << std::endl;            // <-2.9, 13.7, 5.8>
//    std::cout << 5 * v0 << std::endl;        // <-14.5, 68.5, 29>
//
//
//    std::cout << "\n*** 3 ***" << std::endl;
//    std::function<double(double)> g = Composition(f1, f2); // g = f1(f2) -> 어떤 함수를 캡처할 건지 정해서 할당 -> 변수는 그냥 함수 하나
//    std::cout << g(0) << std::endl;                // 5 //할당한 걸 통해서 실현(파라미터 입력해서 값 구현)
//    std::cout << g(acos(-1.) / 2.) << std::endl;    // 10
//    std::cout << g(acos(-1.)) << std::endl;        // 5
//    std::cout << g(acos(-1) * 3 / 2) << std::endl;    // 6
//
//    std::cout << "*****************" << std::endl;
//    std::cout << sin(acos(-1.)) << std::endl; //0
//    std::cout << sin(acos(-1.) / 2.) << std::endl; // 1
//    std::cout << sin(acos(-1.) * 3 / 2.) << std::endl; // -1
    
}

