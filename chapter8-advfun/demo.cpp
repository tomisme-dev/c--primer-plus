template <class T>
void Swap(T &, T &); // template prototype

typedef struct job
{
    int val;
} job;


template <>
void Swap<job>(job &, job &); // explicit specialization for job

int main(void)
{
    // template void Swap<char>(char &, char &); // explicit instantiation for char
    short a, b;
    Swap(a, b); // implicit template instantiation for shorts
    job n, m;

    Swap(n, m); // use explicit specialization for job
    char g, h;

    Swap(g, h); // use explicit template instantiation for char
}