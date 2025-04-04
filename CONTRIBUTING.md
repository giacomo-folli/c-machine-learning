# Contributing to c-machine-learning

We welcome contributions to the c-machine-learning project! This guide provides information on how to contribute to the project, including setting up your environment, coding style guidelines, and submitting pull requests.

## Project Overview

The c-machine-learning project contains several small C programs that demonstrate machine learning concepts.

### Files

- `main.c`: A simple linear regression example that attempts to learn the relationship between x and 2x.
- `gates.c`: A neural network implementation that learns the OR gate using the sigmoid activation function.
- `twice.c`: An incomplete attempt to implement a neural network for the OR gate. It calculates the cost but does not train the network.
- `build.sh`: A script to compile all the C files.

## Setting Up Your Environment

To set up your environment, you will need to install the following dependencies:

- A C compiler, such as GCC or Clang
- Make (optional, but recommended)

### Building the Project

To build the project, run the `build.sh` script:

```bash
./build.sh
```

This will compile all the C files and create executable files in the `outputs/` directory.

Alternatively, you can compile the files manually using GCC:

```bash
gcc gates.c -o ./outputs/gates -lm
gcc twice.c -o ./outputs/twice -lm
```

## Contributing

We welcome contributions of all kinds, including bug fixes, new features, and documentation improvements.

### Coding Style Guidelines

Please follow these coding style guidelines when contributing to the project:

- Use a consistent indentation style (e.g., 4 spaces).
- Write clear and concise comments to explain your code.
- Follow the existing coding style in the project.

### Submitting Pull Requests

To submit a pull request, follow these steps:

1.  Fork the repository.
2.  Create a new branch for your changes.
3.  Make your changes and commit them to your branch.
4.  Submit a pull request to the main branch.

We will review your pull request and provide feedback. Once your pull request is approved, we will merge it into the main branch.

Thank you for contributing to the c-machine-learning project!
