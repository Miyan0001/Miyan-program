#include <iostream>
#include <vector>

void displayMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int elem : row) {
            std::cout << elem << " ";
        }
        std::cout << std::endl;
    }
}

std::vector<std::vector<int>> addMatrices(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    int rows = A.size();
    int cols = A[0].size();
    std::vector<std::vector<int>> result(rows, std::vector<int>(cols));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = A[i][j] + B[i][j];
        }
    }
    return result;
}

std::vector<std::vector<int>> multiplyMatrices(const std::vector<std::vector<int>>& A, const std::vector<std::vector<int>>& B) {
    int rows = A.size();
    int cols = B[0].size();
    std::vector<std::vector<int>> result(rows, std::vector<int>(cols, 0));

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            for (int k = 0; k < A[0].size(); ++k) {
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    return result;
}

int main() {
    std::vector<std::vector<int>> matrixA = {{1, 2}, {3, 4}};
    std::vector<std::vector<int>> matrixB = {{5, 6}, {7, 8}};
    
    std::cout << "Matrix A:" << std::endl;
    displayMatrix(matrixA);

    std::cout << "Matrix B:" << std::endl;
    displayMatrix(matrixB);

    std::vector<std::vector<int>> sum = addMatrices(matrixA, matrixB);
    std::cout << "Sum of Matrix A and B:" << std::endl;
    displayMatrix(sum);

    std::vector<std::vector<int>> product = multiplyMatrices(matrixA, matrixB);
    std::cout << "Product of Matrix A and B:" << std::endl;
    displayMatrix(product);

    return 0;
}