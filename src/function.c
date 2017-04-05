#include <stdio.h>

float calc(float result, int days) {
    float one, two, thr;
    
    if(days > 0 && days < 30) {
        result = result * 0.9;
        return result;
    }
    if(result < 100) {
        one = 1.02;
        two = 1.06;
        thr = 1.12;
    } else if(result >= 100) {
        one = 1.03;
        two = 1.08;
        thr = 1.15;
    } else return 0;
    
    if(days > 30 && days <= 120) {
        result = result * one;
    } else if(days > 120 && days <= 240) {
        result = result * two;
    } else if(days > 240 && days <= 365) {
        result = result * thr;
    } else return 0;
    return result;
}