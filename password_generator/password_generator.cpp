#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

// Function to generate a random password
std::string generatePassword(int length = 4) {
    // Possible characters include letters, numbers, and symbols
    const std::string chars = "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "0123456789"
        "!@#$%^&*()";

    std::string password = ""; // Start with an empty password

    // Use current time as seed for random generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Build password with random characters
    for (int i = 0; i < length; ++i) {
        int randomIndex = std::rand() % chars.length(); // Generate a random index
        password += chars[randomIndex]; // Append the character at the random index
    }

    return password; // Return the generated password
}

int main() {
    // Call generatePassword function and store the result
    std::string password = generatePassword(17);

    // Print the generated password
    std::cout << "Generated Password: " << password << std::endl;

    return 0;
}
