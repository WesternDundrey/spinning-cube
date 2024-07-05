#include <math.h>

float A,B,C;

float calculate(int i, int j, int k){
    return j *sin(A)*sin(B)*cos(C)-k*cos(A)*sin(B)*cos(C)+j*cos(A)*sin(C)+
    k*sin(A)*sin(C)+i*cos(B)*cos(C);
}


float calculateY(int i, int j, int k) {
    return j*cos(A)*cos(C)+k*sin(A)*cos(C)-
    j*sin(A)*sin(B)*sin(C)+k*cos(A)*sin(B)*sin(C)-i*cos(B)*sin(C)
}
int main() { return 0; }
