#include "common.hpp"

#ifndef PCH_INCLUDED
#include <vector>
#endif

int main() {
    std::vector<int> xs = { 1, 2, 3, 4};
    return common(xs.size());
}
