

// typedef double * iterator;

// iterator find_ar(iterator start, iterator end, const double val) {
//     for (iterator i = start; i != end; i++)
//     {
//         if(*iterator == val) {
//             return start;
//         }
//     }

//     return end;

// }

struct Node
{
    double item;
    Node *next;
};


class Iterator {
private:
    Node *pt;
public:
    Iterator() : pt(nullptr) {}
    Iterator(Node * pn) : pt(pn) {}

    double operator*() {
        return pt->item;
    }

    Iterator & operator++() { //++i
        pt = pt->next;
        return *this;
    }


    Iterator operator++(int) { // i++
        Iterator tmp = *this;
        pt = pt->next;
        return tmp;
    }


    friend bool operator==(Iterator & i1, Iterator & i2) {
        return i1.pt->item == i2.pt->item;
    }
};


int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
