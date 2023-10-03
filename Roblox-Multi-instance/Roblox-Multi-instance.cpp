#include <iostream>
#include <Windows.h>
#include <string>

int main()
{
    std::cout << "Please close all Roblox instances before running this program for the best results!\n";
    CreateMutexA(NULL, TRUE, "ROBLOX_singletonMutex");
    std::cout << "If you want to quit, please press enter or close the application.\n";
    std::getchar(); // Disgusting but works
    return 1;
}