int fact(int x)
{
    int i, fact = 1;
    for (i = x; i > 1; i--)
    {
        fact = fact * i;
    }
    return fact;
}