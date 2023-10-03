#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
    // Set console title using escape sequence.
    std::cout << "\033]0;" << "Roblox Mutliple Instance" << "\007";
    std::cout << "Please close all Roblox instances before running this program for the best results!\n";
    CreateMutexA(NULL, TRUE, "ROBLOX_singletonMutex");
    std::cout << "If you want to quit, please press enter or close the application.\n";
    std::getchar(); // Disgusting but works
    return 1;
}