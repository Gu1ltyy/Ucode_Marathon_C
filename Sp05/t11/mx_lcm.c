int mx_gcd(int a, int b);
int mx_lcm(int a, int b) {
    int gcd = mx_gcd(a, b);
    int res = (a * b) / gcd;
    
    if (res < 0)
        res = res * -1;
    
    return res;
}

