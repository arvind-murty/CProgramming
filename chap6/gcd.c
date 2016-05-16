


int gcd(int x, int y)
{
    int m = x > y ? x : y;
    int a;
    int b;
    int n = x > y ? y : x;
    do
    {
        a = m;
        b = n;
        m = b;
        n = a % b;
    }
    while (n > 0);
    return b;

}
