#include <iostream>
using namespace std;
int main(){
const int r1=2,c1=3;
const int r2=3,c2=2;
int mat1[r1][c1]{1,2,3,4,5,6};
int mat2[r2][c2]{7,8,9,10,11,12};
int mat3[r1][c2];
for(int rone=0;rone<r1;rone++)//for rows
{
    for(int ctwo=0;ctwo<c2;ctwo++)//for column
    {
        mat3[rone][ctwo]=0;
        for(int k=0;k<c1;k++)//for multiplication
        {
            mat3[rone][ctwo]+=mat1[rone][k]*mat2[k][ctwo];

        }
    }
}
    for(int i=0;i<r1;i++) //for pint the matrix
    {
        for(int j=0;j<c2;j++)
        {
            cout<<mat3[i][j]<<" ";
        }
        cout<<endl;
    }

}