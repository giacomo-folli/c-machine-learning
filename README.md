# c-machine-learning

This project contains several small C programs that demonstrate machine learning concepts.

## Files

- `main.c`: A simple linear regression example that attempts to learn the relationship between x and 2x.
- `gates.c`: A neural network implementation that learns the OR gate using the sigmoid activation function.
- `twice.c`: An incomplete attempt to implement a neural network for the OR gate. It calculates the cost but does not train the network.
- `Makefile`: Basic makefile to compile all the code.

## Build

To build the project, run the following command:

```bash
make
```

This will compile all the C files and create executable files in the current directory.
To clean the project, run the following command:

```bash
make clean
```

This will remove all the object files and executable files.

## Outputs

The `outputs/` directory is intended to store the output of the programs. However, it is not currently used by any of the programs.

## Contributing

Please read [CONTRIBUTING.md](CONTRIBUTING.md) for guidelines on how to contribute to this project.

## Next Steps and New Ideas

Here are some propositions for the next steps and new ideas to implement:

- Implement the backpropagation algorithm in `twice.c` to train the neural network for the OR gate.
- Add more activation functions to the neural network implementation in `gates.c`, such as ReLU and tanh.
- Implement other logic gates, such as AND, XOR, and NOT.
- Create a visualization of the neural network's training process.
- Implement a simple classification algorithm, such as logistic regression or k-nearest neighbors.
- Use the `outputs/` directory to store the output of the programs, such as the trained weights and biases.
- Add comments to the code to explain the different steps and concepts.
