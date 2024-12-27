#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << fixed << setprecision(2);
    cout << "Arithmetic Mean = " << B[0] << endl;
    cout << "Standard Deviation = " << B[1] << endl;
    cout << "Geometric Mean = " << B[2] << endl;
    cout << "Harmonic Mean = " << B[3] << endl;
    cout << "Max = " << B[4] << endl;
    cout << "Min = " << B[5];
    return 0;
}

void stat(const double A[], int N, double B[]){
    for(int i=0 ; i < N ; i++){
        B[0] += A[i];
    }double uy = B[0]/N;
    B[0] = uy;
    
    double io = 0.00;
    for(int j=0; j < N; j++){
        io += pow(A[j]-B[0],2);
        B[1] = sqrt(io/N);
    }

    double pp = 1.00;
    for(int k=0; k < N; k++){
        pp *= A[k];
        B[2] = pow(pp, 1.0 / N);
    }
    
    double ty = 0.00;
    for(int r=0; r < N; r++){
        ty += 1.0 / A[r];
        B[3] = N / ty;
    }

    double maxVal = 0;
    double minVal = 1;
    for(int o=0; o < N; o++){
        if (A[o] > maxVal) maxVal = A[o];
        if (A[o] < minVal) minVal = A[o];
        B[4] = maxVal;
        B[5] = minVal;
    }
}
