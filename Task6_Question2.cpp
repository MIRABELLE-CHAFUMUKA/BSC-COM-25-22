#include <iostream>

using namespace std;

int main() {
    //Variables to keep rows and columns
    //Selected based matrix representation
  int rows, cols;

  // Get valid dimensions from the user
  do {
      //Asking the user to enter rows and storing input
    cout << "Enter the number of rows (must be between 1 and 3): ";
    cin >> rows;
  } 
  //This validates the required input.
  while (rows < 1 || rows >3);

  do {
      //Asking the user to enter columns and storing input
    cout << "Enter the number of columns (must be between 1 and 3): ";
    cin >> cols;
  } 
  //This validates the required input.
  while (cols < 1 || cols > 3);

  // Dynamically allocate the 2D array.
  double** arr = new double* [rows];
  for (int i = 0; i < rows; ++i) {
    arr[i] = new double[cols];
  }

  // Assign values to each element using nested for loops
  //the outer for loop is for the rows
  //Inner for loop for the columns
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
      cout << "Enter value for row " << i + 1 << ", column " << j + 1 << ": ";
      cin >> arr[i][j];
    }
  }

  // Printing the arra
  cout << "\nThe array:\n";
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < cols; ++j) {
        // Printing the array
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  // Deallocate memory to avoid leaks
  //Maybe necesarry 
  for (int i = 0; i < rows; ++i) {
    delete[] arr[i];
  }
  delete[] arr;

  return 0;
}
