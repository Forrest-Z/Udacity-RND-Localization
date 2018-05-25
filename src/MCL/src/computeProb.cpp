#include <iostream>

using namespace std;

double w[] = { 0.6, 1.2, 2.4, 0.6, 1.2 };//You can also change this to a vector


//Define a  ComputeProb function and compute the Probabilities
double sum(double x[],int n);

void ComputeProb(double w[], int n);




int main()
{
    //Print Probabilites each on a single line:
    int n = sizeof(w) / sizeof(w[0]);
    ComputeProb(w, n);
    //P1=Value
    //:
    //P5=Value
    for (int i = 0; i < n; i++){
        cout << "P" << i + 1 << "=" << w[i] << endl;

    }
    return 0;
}


double sum(double x[],int n){
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += x[i];
    }
    return sum;
}

void ComputeProb(double w[], int n){
    double W = sum(w,n);
    for (int i = 0; i < n; i++) {
        w[i] = w[i]/W;
    }
}
