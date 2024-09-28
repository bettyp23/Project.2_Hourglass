# Hourglass Project

## Overview

This repository contains the implementation of an `Hourglass` class in C++ that draws an hourglass shape on the console. The hourglass consists of a top and bottom triangle with customizable border and fill characters. The project also includes functionality to set and validate these characters and compute various properties of the hourglass.

## Project Structure

- `hourglass.h`: Header file containing the declaration of the `Hourglass` class.
- `hourglass.cpp`: Source file containing the implementation of the `Hourglass` class methods.
- `driver.cpp`: Contains the `main` function that demonstrates the usage of the `Hourglass` class.
- `Makefile`: Used to build the project.

## Class Description

### `Hourglass`

The `Hourglass` class includes the following member functions:

- **Constructor**
  - Initializes the hourglass with default size and characters.

- **`SetBorder(char b)`**
  - Sets the border character for the hourglass. If `b` is not within the printable ASCII range (`'!'` to `'~'`), it defaults to `'*'`.

- **`SetFill(char f)`**
  - Sets the fill character for the hourglass. If `f` is not within the printable ASCII range (`'!'` to `'~'`), it defaults to `'#'`.

- **`Draw()`**
  - Draws the hourglass shape on the console with the current size, border, and fill characters.

## Usage

1. **Clone the Repository**
   ```sh
   git clone https://github.com/yourusername/hourglass-project.git
   cd hourglass-project