#include <iostream>
#include <vector>
#include "../include/Neuron.hpp"
#include "../include/Matrix.hpp"

using namespace std;

int main()
{
    Matrix *m = new Matrix(3, 2, true);
    m->printToConsole();
    return 0;
}