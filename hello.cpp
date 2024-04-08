#include <iostream>
using namespace std;
int main() {
    // your code goes here

int findNthSmallest(std::vector<std::vector<int>>& matrix, int n) {
    // Flattening the matrix into a 1D vector
    std::vector<int> flatMatrix;
    for (const auto& row : matrix) {
        flatMatrix.insert(flatMatrix.end(), row.begin(), row.end());
    }
    
    // Sorting the flattened matrix
    std::sort(flatMatrix.begin(), flatMatrix.end());
    
    // Return the nth smallest number
    return flatMatrix[n - 1];
}

int main() {
    int rows, cols, n;
    
    std::cin >> rows ;
    cols=rows;
    
    // Input matrix elements
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
        }
    }
    
    
    std::cin >> n;
    
    // Find the nth smallest number
    int nthSmallest = findNthSmallest(matrix, n);
    
    // Output the result
    std::cout << nthsmallest;
    
    return 0;
}