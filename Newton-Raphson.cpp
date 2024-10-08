#include <iostream>
#include <cmath>

using namespace std;

double f(double x) {
    return x * x * x - 6 * x + 2;
}

double df(double x) {
    return 3 * x * x - 6;
}

double newtonRaphson(double x0, double tol) {
    double x1;
    while(true) {
        x1 = x0 - f(x0) / df(x0);
        if (fabs(x1 - x0) < tol) {
            break;
        }
        x0 = x1;
    }
    return x1;
}

int main() {
    double x0 = 2, tol = 0.00001;
    double root = newtonRaphson(x0, tol);
    cout << "Akar: " << root << endl;
    return 0;
}