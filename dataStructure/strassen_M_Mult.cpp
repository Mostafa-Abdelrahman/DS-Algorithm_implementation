#include <iostream>
using namespace std;
const int max=100;
void cal_P(int A[2][max],int B[2][max],int c[2][2])
{
    
    int p1,p2,p3,p4,p5,p6,p7;
    p1=A[0][0]*(B[0][1]-B[1][1]);
    p2=(A[0][0]+A[0][1])*B[1][1];
    p3=(A[1][0]+A[1][1])*B[0][0];
    p4=A[1][1]*(B[1][0]-B[0][0]);
    p5=(A[0][0]+A[1][1])*(B[0][0]+B[1][1]);
    p6=(A[0][1]-A[1][1])*(B[1][0]+B[1][1]);
    p7=(A[0][0]-A[1][0])*(B[0][0]+B[0][1]);
    c[0][0]=p5+p4-p2+p6;
    c[0][1]=p1+p2;
    c[1][0]=p3+p4;
    c[1][1]=p1+p5-p3-p7;
}
void matrix(int A[][],int B[][],int C[][])
{
    
}



int main(){
    int p1,p2,p3,p4,p5,p6,p7;
   
}