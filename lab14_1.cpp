#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double x[],int t,double y[]){
    int i;
    double sum,sum1,sum2,sum3,z;
    //Arithmetic Mean
    for(i = 0;i < t;i++){
        sum += x[i];
    }
    y[0] = (double) sum/t;

    //Standard Deviation
    double sd,j;
    for(i = 0;i < t;i++){
        sum1 += pow(x[i],2);
    }
    j = sum1/t - pow(y[0],2);
    sd = sqrt(j);     
    y[1] = sd;

    //Geometric Mean
    sum2 = 1;
    for(i = 0;i < t;i++){
        sum2 *= x[i];
    }
    z = (double) 1/t;
    y[2] = pow(sum2,z);

    //Harmonic Mean
    for(i = 0;i < t;i++){
        sum3 += 1/x[i];
    }
    y[3] = (double) t/sum3;


    //max
    double max = x[0],min = x[0];
       for(i = 0;i<t;i++){
           if(x[i] > max){
               max = x[i];
           }
           if(x[i] < min){
               min = x[i];
           }
       }
    y[4] = max;
    y[5] = min;

}


