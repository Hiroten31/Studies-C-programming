#include <stdio.h>

int main() {
    double c1, c2, a1, a2, b1, b2, x, y, w , wx, wy;
    /*a1 = 7;
    a2 = 3;
    b1 = 2;
    b2 = 4;
    c1 = 1;
    c2 = 2;
    wynik x: 0, y:1/2 - matemaks*/
    a1 = 6;
    a2 = 6;
    b1 = 4;
    b2 = 5;
    c1 = 1;
    c2 = 4;
    w = a1*b2 - a2*b1;
    wx = c1*b2 - c2*b1;
    wy = a1*c2 - a2*c1;
    x = wx/w;
    y = wy/w;
    printf("x: %.2f\ny: %.2f", x, y);
}
