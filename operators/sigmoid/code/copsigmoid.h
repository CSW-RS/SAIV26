#ifndef COPSIGMOID_H_INCLUDED

#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include "cindex.h"
#include "ctensor.h"

void csigmoid(struct ctensor x, struct ctensor r);

#define COPSIGMOID_H_INCLUDED
#endif // COPSIGMOID_H_INCLUDED
