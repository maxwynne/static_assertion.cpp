#include <iostream>
#include "fname.h"
using namespace std;

// constant_expression represents constant expression
// string_literal displayed when constant_expression parameter returns false

static_assert(constant_expression, string_literal);

template <class A, int Size>
class Vector {
    // compile to check if size of vector is more than 3. any vector declared less than 4, assertion fails
    static_assert(Size > 3, "Vector size is too small");

    T m_values[Size];
};
