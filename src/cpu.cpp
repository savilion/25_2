
double compute (double (&arr)[8])
{
    double sum{0};
    for (double i : arr)
    {
        sum+= i;
    }
    return sum;
}
