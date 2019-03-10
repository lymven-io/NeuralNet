#ifndef _NEURAL_NETWORK_HPP_
#define _NEURAL_NETWORK_HPP_

#include <iostream>
#include <vector>
#include "Mathix.hpp"
#include "Layer.hpp"

using namespace std;

class NeuralNetwork
{
public:
  NeuralNetwork(vector<int> topology);
  void setCurrentInput(vector<double> input);
  void printToConsole();

private:
  int topologySize;
  vector<int> topology;
  vector<Layer *> layers;
  vector<Matrix *> weightMatrices;
  vector<double> input;
};

#endif