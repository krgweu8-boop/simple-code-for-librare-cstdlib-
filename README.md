# C++ Random Number Generator

A simple C++ program that generates and displays an array of random numbers. Perfect for learning basic C++ concepts like arrays, loops, and random number generation.

## 🚀 Features
- Generates 5 random integers between 1 and 100
- Uses `srand()` with current time for seed initialization
- Clean console output
- Simple, educational code structure

## 📁 Code Structure
```cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0));          // Seed random generator
    int randomNum[5]{};      // Initialize array
    
    for (int i = 0; i < 5; i++) {
        randomNum[i] = rand() % 100 + 1;  // Generate 1-100
        std::cout << randomNum[i] << " "; // Display immediately
    }
    
    std::cout << std::endl;
    return 0;
}

## 🛠️ Compilation & Usage
bash
# Compile
g++ main.cpp -o random_generator

# Run
./random_generator

## 🎯 Learning Points

Random Number Generation: Using rand(), srand(), and time()

Arrays: Declaration, initialization, and iteration

Loops: for loop for repetitive tasks

Basic I/O: Console output with std::cout

## 📊 Example Output

74 23 91 5 42

## 🔧 Dependencies

C++ compiler (GCC, Clang, or MSVC)

Standard C++ libraries only

## 📝 Future Enhancements

Command-line arguments for array size

Custom range parameters (min/max)

Statistical analysis (average, min, max)

File output option

## 👨‍💻 Author

Created as part of learning C++ fundamentals.

## 📄 License

Educational use - free to modify and learn from!
