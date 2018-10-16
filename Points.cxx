#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

class Point {
private:
  float xcoor, ycoor; 

public:
  Point  (float x, float y){
    xcoor = x; ycoor = y;};

  float distance_to_origin() {return sqrt(xcoor*xcoor+ycoor*ycoor); };
  void printout() {cout << xcoor << "  " << ycoor << endl;};
  float angle() {return atan(ycoor/xcoor);};
  float distance(Point q) {return sqrt((xcoor-q.xcoor)*(xcoor-q.xcoor)+(ycoor-q.ycoor)*(ycoor-q.ycoor));};


};

int main() {
  Point p1{1,1}, p2{4,5};
    cout << p1.distance_to_origin() << endl;
    p1.printout();
    cout << p1.angle() << endl;
    cout << p1.distance(p2) << endl;
    return 0;
}