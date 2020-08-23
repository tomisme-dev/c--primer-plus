#include <iostream>
#include <string>

using namespace std;

void trunc_tail(istream &in)
{
    while (cin.get() != '\n')
    {
        /* code */
    }
    
}

class Worker
{
private:
    string fullName;
    long id;

public:
    Worker() : fullName("no one"), id(0L)
    {
    }

    Worker(const string &fullName, long id) : fullName(fullName), id(id)
    {
    }

    virtual ~Worker() = 0;

    virtual void set()
    {
        cout << "enter worker's name: " << endl;
        getline(cin, fullName);
        cout << "entry work id: " << endl;
        cin >> id;
        trunc_tail(cin);
    }

    virtual void show() const
    {
        cout << "name: " << fullName << "; employee id: " << id << endl;
    }
};

class Waiter : public Worker
{
private:
    int panache;

public:
    Waiter() : Worker(), panache(0)
    {
    }

    Waiter(const string &fullName, long id, int panache) : Worker(fullName, id), panache(panache)
    {
    }

    Waiter(const Worker &worker, int panache) : Worker(worker), panache(panache)
    {
    }
    ~Waiter();

    void set()
    {
        Worker::set();
        cout << "enter panche: " << endl;
        cin >> panache;
        trunc_tail(cin);
    }
};

class Singer : public Worker
{
protected:
    enum
    {
        other,
        alto,
        contralto,
        soprano,
        bass,
        baritone,
        tenor
    };

    const static int VTYPES = 7;

private:
    static char *pv[VTYPES];
    int voice;

public:
    Singer() : Worker(), voice(other)
    {
    }

    Singer(const string &fullName, long id, int voice = other) : Worker(fullName, id), voice(voice)
    {
    }

    Singer(const Worker &worker, int voice = other) : Worker(worker), voice(other)
    {
    }
    ~Singer();
};

int main(int argc, char const *argv[])
{
    Waiter w();
    return 0;
}
