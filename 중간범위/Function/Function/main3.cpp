//
//  main3.cpp
//  Function
//
//  Created by Jungmin Kim on 2022/10/31.
//

#include "main3.hpp"
#include <cmath>
bool is_prime(int n) {
    bool result = true;
    double r = n, root = sqrt(r);
    for (int trial_factor = 2; result && trial_factor <= root; trial_factor++)
        result = (n%trial_factor != 0);
    return result;
}
