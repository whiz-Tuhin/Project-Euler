#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

#define PI 3.14159265

typedef struct point{
      int x1;
      int y1;
      int x2;
      int y2;
}POINT;

int main() {
    int n;
    cin>>n;

    POINT point[20];

    for(int i = 0;i < n;i++)
            cin>>point[i].x1>>point[i].y1>>point[i].x2>>point[i].y2;

    for(int i = 0;i < n;i++){
         float m = (point[i].y2 - point[i].y1)/(point[i].x2 - point[i].x1) ;
         float cos = sqrt(1/(1 + m*m));
         float sin = sqrt(1 - (cos*cos));

         //cout<<"slope = "<<m<<" "<<"sin() = "<<(sin)<<" "<<"cos() = "<<(cos)<<" ";
         float dist = sqrt(pow((point[i].x2 - point[i].x1),2) + pow((point[i].y2 - point[i].y1) , 2));
         //cout<<"distace = "<<(dist)<<" ";;

         int x_f = point[i].x2 + (dist*cos);
         int y_f = point[i].y2 + (dist*sin);

         cout<<x_f<<" "<<y_f;
         cout<<endl;
    }

    return 0;
}
