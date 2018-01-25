#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>



struct InputData {
  int x,y,r,g,b;
};

struct BBox {
  int minX, maxX, minY, maxY;
};


//part 1 instantiate a main
int main(int argc, char**argv) {


  //part 3 namespace mapping
  using std::cout;
  using std::endl;
  //part 4 Basic terminal I/O part 4a - output
  cout << "\n    Hello World \n" <<  argv[0] <<" " << 1234 << " " << endl;

  //part 4b - input/output

  int ansX, ansY, ansR, ansG, ansB;
  //struct InputData a;

  using std::cin;

  InputData* iArr = new InputData[2];
  cout << ", Enter 3 points (enter a point as x,y:r,g,b)\n" << endl;
  for (int i = 0 ; i < 3; i++) {
    cin >> ansX >> ansY >> ansR >> ansG >> ansB;
    iArr[i].x = ansX;
    iArr[i].y = ansY;
    iArr[i].r = ansR;
    iArr[i].g = ansG;
    iArr[i].b = ansB;
  }

  cout << "You entered: " << endl;
  for (int i = 0 ; i < 3; i ++) {
    cout << iArr[i].x << "," << iArr[i].y << ":" << iArr[i].r << "," << iArr[i].g << "," << iArr[i].b << endl;

  }
  cout << "success\n";

  BBox* view = new BBox;
  int minXt = 999999;
  int maxXt = 0;
  int minYt = 200000;
  int maxYt = 0;

  for (int i = 0 ; i < 3; i ++) {
        if ( iArr[i].x < minXt ) {
          minXt = iArr[i].x;
        } else if (iArr[i].x > maxXt) {
          maxXt = iArr[i].x;
        }
  }
  for (int i = 0 ; i < 3; i ++) {
        if ( iArr[i].y < minYt ) {
          minYt = iArr[i].y;
        } else if (iArr[i].y > maxYt) {
          maxYt = iArr[i].y;
        }
  }


  cout << minXt << "\n";
  cout << maxXt << "\n";
  cout << minYt << "\n";
  cout << maxYt << "\n";
}
