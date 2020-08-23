typedef struct blot
{
    int val;
} blot;


// void recycle(blot){}; // #1 blot-to-blot
// void recycle(const blot){}; // #2 blot-to-(const blot)
void recycle(blot &){}; // #3 blot-to-(blot &)
void recycle(const blot &){}; // #4 blot-to-(const blot &)

int main(int argc, char const *argv[])
{
    blot b;
    recycle(b);

    const blot bconst = {12};
    recycle(bconst);

    return 0;
}
