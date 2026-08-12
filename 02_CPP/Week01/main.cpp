#include <iostream>

int main()
{
    std::cout << "Project Horizon C++ Week01\n";

    int device_id;
    std::cout << "Enter device ID: ";
    std::cin >> device_id;
    std::cout << "Device ID: " << device_id << "\n";
    if (device_id > 0)
        std::cout << "Valid device ID\n";
    else
        std::cout << "Invalid device ID\n";
    return 0;
}