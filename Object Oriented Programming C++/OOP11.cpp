#include <iostream>
#include <cmath>
using namespace std;


class point{
    float x1,x2,y1,y2;

    public:
        void firstCord(int a, int b){
            x1=a;
            y1=b;

            
        }


        void secondCord(int c,int d){
             x2=c;
            y2=d;

            
        }


        void distance(float a,float b,float c, float d){
             x1=a;
             y1=b;
             x2=c;
             y2=d;



             float result=sqrt((pow((x2-x1),2))-(pow((y2-y1),2)));

             cout<<"The distance is :   "<<result;
        }
};

int main(){
    point c1,c2,c3;
    

    c1.firstCord(1,0);
    c2.secondCord(70,0);
    c3.distance(1,0,70,0);
    return 0;
}