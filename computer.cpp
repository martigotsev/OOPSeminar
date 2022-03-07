#include <iostream>
enum VideoCard
{
    inValideVideoCard = -1,
    GeForceRTX3090,
    GeForceRTX3080,
    RadeonRX6600XT
};

enum Processor
{
    inValideProcessor = -1,
    IntelCoreI5,
    IntelCoreI7,
    IntelCoreI9
};
enum Core
{
    inValideCore = -1,
    dualCore,
    quadCore,
    octaCore
};
struct Computer
{
    int batteryCapacity;
    double screenSize;
    char brandName[32];
    char description[256];
    VideoCard videoCard;
    Processor processor;
    Core core;
    int numberForVideoCard;
    int numberForProsessor;
    int numberForCore;
    Computer enterComputer()
    {
        std::cout << "Enter Computer:" << std::endl;
        std::cout << "Enter battery capasity: ";
        std::cin >> batteryCapacity;
        std::cout << "Enter screen size: ";
        std::cin >> screenSize;
        std::cout << "Enter brand name: ";
        std::cin.ignore();
        std::cin.getline(brandName, 32);
        std::cout << "Enter description: ";
        std::cin.getline(description, 256);

        std::cout << "Enter number for video card\n";
        std::cout << "0 for GeForceRTX3090\n1 for GeForceRTX3080\n2 for RadeonRX6600XT\n";
        std::cin >> numberForVideoCard;
        videoCard = enterVideoCard(numberForVideoCard);
        std::cout << "Enter number for prosessor\n";
        std::cout << "0 for Intel Core I5 \n1 for Intel Core I7 \n2 for Intel Core I9\n";
        std::cin >> numberForProsessor;
        processor = enterProcessor(numberForProsessor);
        std::cout << "Enter number for core\n";
        std::cout << "0 for dualCore \n1 for quadCore\n2 for octaCore\n";
        std::cin >> numberForCore;
        core = enterCore(numberForCore);
    }
    Processor enterProcessor(const int numberForProsessor)
    {
        switch (numberForProsessor)
        {
        case 0:
        {
            return IntelCoreI5;
        }
        case 1:
        {
            return IntelCoreI7;
        }
        case 2:
        {
            return IntelCoreI9;
        }
        default:
            return inValideProcessor;
        }
    }
    Core enterCore(int numberForCore)
    {
        switch (numberForCore)
        {
        case 0:
        {
            return dualCore;
        }
        case 1:
        {
            return quadCore;
        }
        case 2:
        {
            return octaCore;
        }
        default:
            return inValideCore;
        }
    }
VideoCard enterVideoCard(int numberForVideoCard)
    {
        switch (numberForVideoCard)
        {
        case 0:
        {
            return GeForceRTX3090;
        }
        case 1:
        {
            return GeForceRTX3080;
        }
        case 2:
        {
            return RadeonRX6600XT;
        }
        default:
            return inValideVideoCard;
        }
    }

    void printSudent()
    {
        std::cout << "Battery: " << batteryCapacity << std::endl;
        std::cout << "Screen size: " << screenSize << std::endl;
        std::cout << "Brand name: " << brandName << std::endl;
        std::cout << "Description: " << description << std::endl;
        std::cout << "Video card: ";
        switch (videoCard)
        {
        case GeForceRTX3090:
            std::cout << "GeForceRTX3090" << std::endl;
            break;
        case GeForceRTX3080:
            std::cout << "GeForceRTX3080" << std::endl;
            break;
        case RadeonRX6600XT:
            std::cout << "RadeonRX6600XT" << std::endl;
            break;
        default:
            std::cout << "Unknown video card" << std::endl;
            break;
        }
        std::cout << "Prosessor: ";
        switch (processor)
        {
        case IntelCoreI5:
            std::cout << "Intel core I5" << std::endl;
            break;
        case IntelCoreI7:
            std::cout << "Intel core I7" << std::endl;
            break;
        case IntelCoreI9:
            std::cout << "Intel core I9" << std::endl;
            break;
        default:
            std::cout << "Unknown prosessor" << std::endl;
            break;
        }
        std::cout << "Core: ";
        switch (core)
        {
        case dualCore:
            std::cout << "DualCore" << std::endl;
            break;
        case quadCore:
            std::cout << "QuadCore" << std::endl;
            break;
        case octaCore:
            std::cout << "OctaCore" << std::endl;
            break;
        default:
            std::cout << "Unknown core" << std::endl;
            break;
        }
        std::cout<<std::endl;
    }
};
int main()
{
    Computer computer[3];
    for(int i=0 ;i<3 ;i++)

    computer[i].enterComputer();
    for(int i=0 ;i<3 ;i++)
    computer->printSudent();
}