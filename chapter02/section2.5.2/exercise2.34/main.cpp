int main()
{
    int i = 0, &r = i;
    auto a = r;
    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;
    auto e = &ci;
    auto &g = ci;

    // Exercise assignments
    a = 42; // valid, int
    b = 42; // valid, int
    c = 42; // valid, int
    d = 42; // invalid, d is a pointer to int
    e = 42; // invalid, e is a pointer to const int
    g = 42; // invalid, g is a reference type

    return 0;
}