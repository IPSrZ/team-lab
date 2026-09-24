#include "pichugin.h"

double toForeign(double rub, double rate) {
    return rub / rate;
}

double toRub(double amount, double rate) {
    return amount * rate;
}
