#include<stdio.h>
#include<stdlib.h>

int main() {
    int a, b;
    if ((b > 0 && a > b) || (b < 0 && a < b)) {
        return false;
    }
    return true;
}

