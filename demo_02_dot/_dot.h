#ifndef _DOT_H
#define _DOT_H

class _Dot {
private:
    float * w;
    int n;
public:
    _Dot();
    _Dot(int n, float *w);
    void _dot(float **in_, float* out, int m);
};
#endif