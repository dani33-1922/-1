#include <iostream>

class spiral_matrix{
private:
    int size_of_matrix;
    int **matrix;

public:
    spiral_matrix();
    void spiral();
    void print_matrix();
    ~spiral_matrix();
};