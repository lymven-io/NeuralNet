#ifndef _LAYER_HPP_
#define _LAYER_HPP_

#include <iostream>
#include <vector>
#include "Neuron.hpp"
#include "Matrix.hpp"

using namespace std;

class Layer
{
public:
    Layer(int size);
    void setVal(int i, double v);

    Matrix *matrixifyVals();
    Matrix *matrixifyActivatedVals();
    Matrix *matrixifyDeridedVals();

    vector<Neuron *> getNeurons() { return this->neurons; };
    void setNeurons(vector<Neuron *> neurons) { this->neurons = neurons; };
    
private:
    int size;
    vector<Neuron *> neurons;
};

#endif