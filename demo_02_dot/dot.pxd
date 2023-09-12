cdef extern from "_dot.cpp":
    pass

cdef extern from "_dot.h":
    cdef cppclass _Dot:
        _Dot()
        _Dot(int n, float *w)
        void _dot(float ** in_, float * out, int m)