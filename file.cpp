#include <iostream>
#include <fstream>

int main() {
    std::ofstream file("example.txt"); // Create and open a file
    file << "Hello, file!\n"; // Write to the file
    file.close(); // Close the file

    std::ifstream inputFile("example.txt"); // Open file for reading
    std::string line;
    while (getline(inputFile, line)) {
        std::cout << line << std::endl; // Print file content
    }
    inputFile.close();

    return 0;
}
