
/*
# Copyright (c) 2015 Bingchun Feng. All rights reserved.
*/

#include<bits/stdc++.h>
#include<utility>
void swap(int &a , int&b) {
    printf("%d %d", &a, a);
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int a = 10, b = 20;
    swap(a, b);
    printf("a = %d , b = %d", a, b);
    return 0;
}
