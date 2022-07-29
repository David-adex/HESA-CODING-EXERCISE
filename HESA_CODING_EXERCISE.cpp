// HESA_CODING_EXERCISE.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//worker health class
class worker{
private:
    float health = 100;
    int x;
    int y;
public:
    void Damage() {
        std::cout << "\n\"THE WORKER\""<<std::endl;
        std::cout << "Input a number between 0 and 100" << std::endl;
        std::cin >> x;
        y = health - x;
        std::cout << "\nHEALTH STATUS:" << y;
        if (y < 70) {
            std::cout << "\n\"THE WORKER IS DEAD\"";
        }
        else {
            std::cout << "\n\"THE WORKER IS ALIVE\"";
        };
    };
};

//Queen health class
class Queen{
private:
    float health = 100;
    int x;
    int y;
public:
    void Damage() {
        std::cout << "\n\"THE QUEEN\""<<std::endl;
        std::cout << "Input a number between 0 and 100" << std::endl;
        std::cin >> x;
        y = health - x;
        std::cout << "\nHEALTH STATUS:" << y;
        if (y < 20) {
            std::cout << "\n\"THE QUEEN IS DEAD\"";
        }
        else {
            std::cout << "\n\"THE QUEEN IS ALIVE\"";
        };
    };
};

//Drone health class
class drone{
private:
    float health = 100;
    int x;
    int y;
public:
    void Damage() {
        std::cout << "\n\"THE DRONE\""<< std::endl;
        std::cout << "Input a number between 0 and 100" << std::endl;
        std::cin >> x;
        y = health - x;
        std::cout << "\nHEALTH STATUS:"<<y;
        if (y < 50) {
            std::cout << "\n\"THE DRONE IS DEAD\"";
        }
        else {
            std::cout << "\n\"THE DRONE IS ALIVE\"";
        };
    };
};


int main()
{
    //10 instances of each type of bee
    worker a;
    worker b;
    worker c;
    worker d;
    worker e;
    worker f;
    worker g;
    worker h;
    worker i;
    worker j;
    a.Damage();
    b.Damage();
    c.Damage();
    d.Damage();
    e.Damage();
    f.Damage();
    g.Damage();
    h.Damage();
    i.Damage();
    j.Damage();
    
    Queen x;
    Queen y;
    Queen z;
    Queen t;
    Queen u;
    Queen o;
    Queen v;
    Queen l;
    Queen k;
    Queen m;
    x.Damage();
    y.Damage();
    z.Damage();
    t.Damage();
    u.Damage();
    o.Damage();
    v.Damage();
    l.Damage();
    k.Damage();
    m.Damage();

    drone n;
    drone p;
    drone q;
    drone r;
    drone s;
    drone w;
    drone gl;
    drone hx;
    drone ik;
    drone j_1;
    n.Damage();
    p.Damage();
    q.Damage();
    r.Damage();
    s.Damage();
    w.Damage();
    gl.Damage();
    hx.Damage();
    ik.Damage();
    j_1.Damage();
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu


