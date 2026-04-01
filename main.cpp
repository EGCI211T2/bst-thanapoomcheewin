#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

#include "BST.h"

int main(int argc, char **argv) {
    BST b;

    for (int i = 1; i < argc; ++i) {
        b.insert_node(atoi(argv[i]));
    }

    b.print(4); // print everything + tree

    return 0;
}