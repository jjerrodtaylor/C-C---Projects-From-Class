struct SNeuron
{
   int m_NumInputs;//the number of inputs into the neuron
   vector<double> m_vecWeight;//the weights for each input
   SNeuron(int NumInputs);//constructor declaration
};

SNeuron::SNeuron(int NumInputs): m_NumInputs(NumInputs+1)
{//definition of the neuron constructor
  //we need an additional weight for the bias hence the +1
  for (int i=0; i<NumInputs+1; ++i)
  {
    //set up the weights with an initial random value
    m_vecWeight.push_back(RandomClamped());
  }
}

struct SNeuronLayer
{
  //the number of neurons in this layer
  int m_NumNeurons;
  //the layer of neurons
  vector<SNeuron> m_vecNeurons;
  SNeuronLayer(int NumNeurons, int NumInputsPerNeuron);
}; //Do you need a constructor for SNeuronLayer?

class CNeuralNet
{
private:
  int m_NumInputs;
  int m_NumOutputs;
  int m_NumHiddenLayers;
  int m_NeuronsPerHiddenLyr;
  //storage for each layer of neurons including the output layer
  vector<SNeuronLayer> m_vecLayers;
public:
  CNeuralNet();
  //have a guess... ;0)
  void CreateNet();
  //gets the weights from the NN
  vector<double> GetWeights()const;
  //returns the total number of weights in the net
  int GetNumberOfWeights()const;
  //replaces the weights with new ones
  void PutWeights(vector<double> &weights);
  //calculates the outputs from a set of inputs
  vector<double> Update(vector<double> &inputs);
  //sigmoid response curve
  inline double Sigmoid(double activation, double response);
};

vector<double> CNeuralNet::Update(vector<double> &inputs)
{
  //stores the resultant outputs from each layer
  vector<double> outputs;
  int cWeight = 0;
  //first check that we have the correct amount of inputs
  if (inputs.size() != m_NumInputs)
  {
    //just return an empty vector if incorrect.
    return outputs;
  }
  //For each layer....
  for (int i=0; i<m_NumHiddenLayers + 1; ++i)
  { 
    if ( i > 0 )
    {
      inputs = outputs;
    }
    outputs.clear();
    cWeight = 0;
    //for each neuron sum the (inputs * corresponding weights).Throw 
    //the total at our sigmoid function to get the output.
    for (int j=0; j<m_vecLayers[i].m_NumNeurons; ++j)
    {
      double netinput = 0;
      int NumInputs = m_vecLayers[i].m_vecNeurons[j].m_NumInputs;
      //for each weight
      for (int k=0; k<NumInputs - 1; ++k)
      {
        //sum the weights x inputs
        netinput += m_vecLayers[i].m_vecNeurons[j].m_vecWeight[k] * 
                    inputs[cWeight++];
      }
      //add in the bias
      netinput += m_vecLayers[i].m_vecNeurons[j].m_vecWeight[NumInputs-1] * 
                  CParams::dBias;
      //we can store the outputs from each layer as we generate them. 
      //The combined activation is first filtered through the sigmoid 
      //function
      outputs.push_back(Sigmoid(netinput, CParams::dActivationResponse));
      cWeight = 0;
    }
  }
  return outputs;
}
