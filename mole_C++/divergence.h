#ifndef DIVERGENCE_H
#define DIVERGENCE_H

#include <cassert>
#include "utils.h"

class Divergence : public sp_mat
{

public:
    using sp_mat::operator=;

    // 1-D Constructor
    Divergence(u16 k, u32 m, double dx);
    // 2-D Constructor
    Divergence(u16 k, u32 m, u32 n, double dx, double dy);
    // 3-D Constructor
    Divergence(u16 k, u32 m, u32 n, u32 o, double dx, double dy, double dz);
    // Returns weights
    vec getQ();

private:
    vec Q;
};

#endif // DIVERGENCE_H