int mx_gcd(int a, int b) {
    int gcd;

    if (b != 0) {
        gcd = mx_gcd(b, a % b);
        if(gcd < 0)
            gcd = gcd * -1;
        
        return gcd;
    }
    else
        return a;
}

