#include "sinehead.h"

namespace {
    double mypow(double w, int l) {
        double w1=w;
        if (l == 0) {
            w1 = 1;
        }
        for (int m = 1; m < l; m++) {
            w1 *= w;
        }
        return w1;
    }
    double factorial(int N) {
        if (N < 0)
            return 0;
        if (N == 0)
            return 1;
        else
            return N * factorial(N - 1);
    }
}
namespace forsine {


    double forsine::sine(double x) {
        double y = (x * PI / 180);
        double sinx = 0;
        for (int n = 0; n < 20; ++n) {
            sinx += (mypow((-1), n)) * mypow((y), (2 * n + 1)) / (factorial(2 * n + 1));
        }
        return sinx;
    }
}
