#ifndef functions_H
#define functions_H


#include "unorderedArrayListType.h"
#include "queueAsArray.h"
#include <iostream>
#include <string>
#include <fstream>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>


using namespace std;
queueType<string> queue(10);
unorderedArrayListType<string> cart(45);
unorderedArrayListType<string> RAM1(5);
unorderedArrayListType<string> RAM2(5);
unorderedArrayListType<string> RAM3(5);
unorderedArrayListType<string> CPU1(5);
unorderedArrayListType<string> CPU2(5);
unorderedArrayListType<string> CPU3(5);
unorderedArrayListType<string> GPU1(5);
unorderedArrayListType<string> GPU2(5);
unorderedArrayListType<string> GPU3(5);
void gotoxy(int x, int y);
void color(int color);
char key = 'x';
HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);

enum ConsoleColors//This block of code is needed for the colors of the text
{

    PurpleFore = FOREGROUND_RED | FOREGROUND_BLUE,
    FuchsiaFore = FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE,
};
class Info
{
public:
    void AvailItems();
    void CustomerDeliveryProcess();
    
protected:
    string name;
    string address;
    string cPNo;
    char* dt;
};

class MenuDisplay : public Info
{
public:
    void ManagerDeliveryProcess();
    void BuyPhase();
    void LoginManagerPass();
    void LoginManager();
    void AvailItems();
    void StartMenu();
    void loadingBar();
    void ShopName();
    void RemoveAddProduct();
    void Bills();
    void StartIntro();
protected:
    int x = 3;
    int value = 0;
    int UserAnswer = 0;
    string ram1 = "HyperX Fury";
    string ram2 = "F4-2400C17S-4GVR";
    string ram3 = "F4-2666C18D-16GTZN";
    string cpu1 = "Intel® Core™ i5-6500 Processor";
    string cpu2 = "Intel® Core™ i7-10700F Processor";
    string cpu3 = "Intel® Core™ i5-10400F Processor";
    string gpu1 = "NVIDIA® GeForce RTX™ 3080";
    string gpu2 = "GeForce GTX 1060 6 GB";
    string gpu3 = "GEFORCE GTX 1080 Ti";
    int ram1Total = 0;
    int ram2Total = 0;
    int ram3Total = 0;
    int cpu1Total = 0;
    int cpu2Total = 0;
    int cpu3Total = 0;
    int gpu1Total = 0;
    int gpu2Total = 0;
    int gpu3Total = 0;
    int RAMTotal = 0;
    int CPUTotal = 0;
    int GPUTotal = 0;
    int TotalBill = 0;
    int MRAM1 = 5;
    int MRAM2 = 5;
    int MRAM3 = 5;
    int MCPU1 = 5;
    int MCPU2 = 5;
    int MCPU3 = 5;
    int MGPU1 = 5;
    int MGPU2 = 5;
    int MGPU3 = 5;
};

void MenuDisplay::StartIntro()
{
    for (int i = 1; i < 6; i++)
    {
        RAM1.insertEnd(ram1);
        RAM2.insertEnd(ram2);
        RAM3.insertEnd(ram3);
        CPU1.insertEnd(cpu1);
        CPU2.insertEnd(cpu2);
        CPU3.insertEnd(cpu3);
        GPU1.insertEnd(gpu1);
        GPU2.insertEnd(gpu2);
        GPU3.insertEnd(gpu3);
    }   
    for (int i = 0; i < 45; i++)
        cart.insertAt(i, "\0");
    do
    {
        for (int i = 0; i < 25; i++)
            cout << "\n";
        cout << "\0";
        SetConsoleTextAttribute(h, 11);
        ShopName();
        SetConsoleTextAttribute(h, 13);
        cout << "\t\t\t\t\t\t\t\t\t\t\t       ===========================================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t       ===========================================" << endl;
        SetConsoleTextAttribute(h, 10);
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t     W E L C O M E  \2 \3" << endl;
        SetConsoleTextAttribute(h, 13);
        cout << "\t\t\t\t\t\t\t\t\t\t\t       ===========================================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t       ===========================================" << endl;
        SetConsoleTextAttribute(h, 4);
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t    Press Enter to Start";
        SetConsoleTextAttribute(h, 15);
        key = _getch();
        system("cls");
    } while (key != '\r');
    
    
}
void MenuDisplay::StartMenu()
{
    int Set[] = { 7,7,7,7,7 }; // DEFAULT COLORS
    int counter = 0;
    for (int i = 0; i < 26; i++)
        cout << "\n";
    SetConsoleTextAttribute(h, 14);
    cout << setw(87) << right << "  " << "=====================================================================\n" << endl;
    cout << setw(87) << right << "  " << "||";
    SetConsoleTextAttribute(h, 2);
    cout << "  " << "                          START MENU";
    SetConsoleTextAttribute(h, 14);
    cout << "  " << "                         || \n" << endl;
    SetConsoleTextAttribute(h, 14);
    cout << setw(87) << right << "  " << "||";
    SetConsoleTextAttribute(h, 2);
    cout << " " << "          Use arrow keys to choose and enter to confirm";
    SetConsoleTextAttribute(h, 14);
    cout << " " << "        || \n" << endl;
	cout << setw(87) << right << "  " << "=====================================================================\n" << endl;
        
        
    for(int i=0;;)
    {
        gotoxy(10, 5);
        color(Set[0]);
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t1. Customer Access";

        gotoxy(10, 6);
        color(Set[1]);
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t2. Manager Access";

        gotoxy(10, 7);
        color(Set[2]);
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t3. Exit" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t        ";

        key = _getch();

        if (key == 72 && (counter >= 2 && counter <= 3))
        {
            counter--;
        }
        if (key == 80 && (counter >= 0 && counter <= 2))
        {
            counter++;
        }
        if (key == '\r')//carriage return
        {
            if (counter == 1)
            {
                // if enter is click and highlight is on 1 the program will run the code here
                system("cls");
                BuyPhase();
            }

            if (counter == 2)
            {
                system("cls");
                LoginManagerPass();
                
            }
            if (counter == 3)
            {
                system("cls");
                exit(0);      
            }
        }
        Set[0] = 7;
        Set[1] = 7;
        Set[2] = 7;
        if (counter == 1)
        {
            Set[0] = 12;
        }
        if (counter == 2)
        {
           
            Set[1] = 12;
        }
        if (counter == 3)
        {
            Set[2] = 12;
        }
       
    }
    
}
void gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}
void color(int color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
    
}
void MenuDisplay::loadingBar()
{
    // 0 - black background,
    // A - Green Foreground
    system("color 0A");

    // Initialize char for printing
    // loading bar
    char a = 177, b = 219;
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t" "Loading...\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t";
    // Print initial loading bar
    for (int i = 0; i < 20; i++)
        cout << a;
    // Set the cursor again starting
    // point of loading bar
    cout << "\r";
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t";

    // Print loading bar progress
    for (int i = 0; i < 20; i++) {
        cout << b;

        // Sleep for 1 second
        Sleep(250);
    }
}
void MenuDisplay::ShopName()
{
    cout << setw(95) << " " << "###########################################" << endl;
    cout << setw(95) << " " << "#        H A R D W A R E S T O R E        #" << endl;
    cout << setw(95) << " " << "#            Created by Group 7           #" << endl;
    cout << setw(95) << " " << "#                                         #" << endl;
    cout << setw(95) << " " << "#              Ramos  Samonte             #" << endl;
    cout << setw(95) << " " << "#              Ordas  Leynes              #" << endl;
    cout << setw(95) << " " << "#                                         #" << endl;
    cout << setw(95) << " " << "#               //2021//                  #" << endl;
    cout << setw(95) << " " << "###########################################"  << endl;
    
}
void MenuDisplay::BuyPhase()
{
    int Set[] = { 7,7,7,7,7,7,7,7,7,7, 7 }; // DEFAULT COLORS
    int counter = 1;
    if (queue.isFullQueue() == TRUE)
    {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t   We cannot take more orders because the delivery queue is full, come back next time! " << endl;
        Sleep(2500);
        system("cls");
        StartMenu();

    }
    else
    {
        SetConsoleTextAttribute(h, 14);
        cout << setw(87) << right << "  " << "=====================================================================\n" << endl;
        cout << setw(87) << right << "  " << "||";
        SetConsoleTextAttribute(h, 2);
        cout << "  " << "                          BUY PHASE";
        SetConsoleTextAttribute(h, 14);
        cout << "  " << "                          || \n" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << setw(87) << right << "  " << "||";
        SetConsoleTextAttribute(h, 2);
        cout << " " << "   Use arrow keys to choose, enter to add ,backspace to return";
        SetConsoleTextAttribute(h, 14);
        cout << " " << " || \n" << endl;
        cout << setw(87) << right << "  " << "=====================================================================\n" << endl;
        cout << setw(87) << right << "  " << "=====================================================================\n" << endl;
        cout << setw(87) << right << "  " << "||";
        SetConsoleTextAttribute(h, 4);
        cout << "  " << "                          RAM SECTION";
        SetConsoleTextAttribute(h, 14);
        cout << "  " << "                        || \n" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << setw(87) << right << "  " << "=====================================================================\n" << endl;
        SetConsoleTextAttribute(h, 15);
        cout << "1. RAM" << setw(87) << "2.RAM" << setw(87) << "3.RAM" << endl;
        cout << "Name: HyperX Fury" << setw(93) << "Name: F4-2400C17S-4GVR" << setw(89) << "Name: F4-2666C18D-16GTZN" << endl;
        cout << "DDR4 RGB" << setw(85) << " DDR4 " << setw(100) << " DDR4 RGB (2 Piece)" << endl;
        cout << "Capacity: 8GB" << setw(89) << "Capacity: 4GB " << setw(88) << "Capacity: 16GB " << endl;
        cout << "Speed: 2400MHz" << setw(98) << "Speed: 2133MHz - 4000Mhz" << setw(77) << "Speed: 2666Mhz" << endl;
        cout << "Price: 7000 php " << setw(86) << "Price: 5000 php" << setw(90) << "Price: 11,000 php" << endl;
        cout << "Quantity: " << RAM1.listSize() << setw(87) << "Quantity: " << RAM2.listSize() << setw(86) << "Quantity: " << RAM3.listSize() << endl << endl;
        SetConsoleTextAttribute(h, 14);
        cout << setw(87) << right << "  " << "=====================================================================\n" << endl;
        cout << setw(87) << right << "  " << "||";
        SetConsoleTextAttribute(h, 4);
        cout << "  " << "                          CPU SECTION";
        SetConsoleTextAttribute(h, 14);
        cout << "  " << "                        || \n" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << setw(87) << right << "  " << "=====================================================================\n" << endl;
        SetConsoleTextAttribute(h, 15);
        cout << "4. CPU" << setw(87) << "5.CPU" << setw(87) << "6.CPU" << endl;
        cout << "Name: Intel® Core™ i5-6500 Processor" << setw(90) << "Name: Intel® Core™ i7-10700F Processor" << setw(87) << "Name: Intel® Core™ i5-10400F Processor" << endl;
        cout << "# of Cores: 4" << setw(88) << "# of Cores: 8" << setw(87) << "# of Cores: 6" << endl;
        cout << "# of Threads: 4" << setw(89) << "# of Threads: 16" << setw(87) << "# of Threads: 12" << endl;
        cout << "Cache: 6 MB Intel® Smart Cache" << setw(89) << "Cache: 16 MB Intel® Smart Cache" << setw(87) << "Cache: 12 MB Intel® Smart Cache" << endl;
        cout << "Price: 10,000 PHP" << setw(88) << "Price: 15,000 PHP" << setw(86) << "Price: 8,000 PHP" << endl;
        cout << "Quantity: " << CPU1.listSize() << setw(87) << "Quantity: " << CPU2.listSize() << setw(86) << "Quantity: " << CPU3.listSize() << endl << endl;

        SetConsoleTextAttribute(h, 14);
        cout << setw(87) << right << "  " << "=====================================================================\n" << endl;
        cout << setw(87) << right << "  " << "||";
        SetConsoleTextAttribute(h, 4);
        cout << "  " << "                         GPU SECTION";
        SetConsoleTextAttribute(h, 14);
        cout << "  " << "                         || \n" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << setw(87) << right << "  " << "=====================================================================\n" << endl;
        SetConsoleTextAttribute(h, 15);
        cout << "7.GPU" << setw(88) << "8.GPU" << setw(88) << "9.GPU" << endl;
        cout << "Graphic Engine: NVIDIA® GeForce RTX™ 3080" << setw(84) << "Graphic Engine: GeForce GTX 1060 6 GB" << setw(86) << "Graphic Engine: GEFORCE GTX 1080 Ti" << endl;
        cout << "Memory Speed: 19 GBPS" << setw(87) << "Memory Speed: 8 GBPS" << setw(89) << "Memory Speed: 11 GBPS" << endl;
        cout << "OpenGL: 4.6" << setw(88) << "OpenGL: 4.5" << setw(88) << "OpenGL: 4.5" << endl;
        cout << "Memory Interface: 320- bit" << setw(87) << "Memory Interface: 192-bit" << setw(88) << "Memory Interface: 352-bit" << endl;
        cout << "Price: 20,000 PHP" << setw(88) << "Price: 11,000 PHP" << setw(88) << "Price: 15,000 PHP" << endl;
        cout << "Quantity: " << GPU1.listSize() << setw(87) << "Quantity: " << GPU2.listSize() << setw(87) << "Quantity: " << GPU3.listSize() << endl << endl;
        cout << "\t\t\t\t\t\t\t Name of the Product" << setw(45) << "Qty" << setw(40) << "Price" << endl;
        for (int i = 0;;)
        {

            gotoxy(10, 5);
            color(Set[0]);
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t1. RAM: HyperX Fury " << setw(44) << cart.cartRAM1Size() << setw(37) << cart.cartRAM1Size() * 7000 << " PHP";
            ram1Total = cart.cartRAM1Size() * 7000;
            gotoxy(10, 6);
            color(Set[1]);
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t2. RAM: F4-2400C17S-4GVR " << setw(39) << cart.cartRAM2Size() << setw(37) << cart.cartRAM2Size() * 5000 << " PHP";
            ram2Total = cart.cartRAM2Size() * 5000;
            gotoxy(10, 7);
            color(Set[2]);
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t3. RAM: F4 - 2666C18D - 16GTZN " << setw(33) << cart.cartRAM3Size() << setw(37) << cart.cartRAM3Size() * 11000 << " PHP";
            cout << "\t\t\t\t\t\t\t\t\t\t\t        ";
            ram3Total = cart.cartRAM3Size() * 11000;
            gotoxy(10, 8);
            color(Set[3]);
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t4. CPU: Intel® Core™ i5-6500 Processor " << setw(25) << cart.cartCPU1Size() << setw(37) << cart.cartCPU1Size() * 10000 << " PHP";
            cpu1Total = cart.cartCPU1Size() * 10000;
            gotoxy(10, 9);
            color(Set[4]);
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t5. CPU:Intel® Core™ i7-10700F Processor " << setw(24) << cart.cartCPU2Size() << setw(37) << cart.cartCPU2Size() * 15000 << " PHP";
            cpu2Total = cart.cartCPU2Size() * 15000;
            gotoxy(10, 10);
            color(Set[5]);
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t6. CPU:Intel® Core™ i5-10400F Processor " << setw(24) << cart.cartCPU3Size() << setw(37) << cart.cartCPU3Size() * 8000 << " PHP";
            cout << "\t\t\t\t\t\t\t\t\t\t\t        ";
            cpu3Total = cart.cartCPU3Size() * 8000;
            gotoxy(10, 11);
            color(Set[6]);
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t7. GPU: NVIDIA® GeForce RTX™ 3080 " << setw(30) << cart.cartGPU1Size() << setw(37) << cart.cartGPU1Size() * 20000 << " PHP";
            gpu1Total = cart.cartGPU1Size() * 20000;
            gotoxy(10, 12);
            color(Set[7]);
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t8. GPU: GeForce GTX 1060 6 GB " << setw(34) << cart.cartGPU2Size() << setw(37) << cart.cartGPU2Size() * 11000 << " PHP";
            gpu2Total = cart.cartGPU2Size() * 11000;
            gotoxy(10, 13);
            color(Set[8]);
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t9. GPU: GEFORCE GTX 1080 Ti " << setw(36) << cart.cartGPU3Size() << setw(37) << cart.cartGPU3Size() * 15000 << " PHP";
            gpu3Total = cart.cartGPU3Size() * 15000;
            RAMTotal = ram1Total + ram2Total + ram3Total;
            CPUTotal = cpu1Total + cpu2Total + cpu3Total;
            GPUTotal = gpu1Total + gpu2Total + gpu3Total;
            TotalBill = RAMTotal + CPUTotal + GPUTotal;
            gotoxy(10, 14);
            color(Set[9]);
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t10. Total Price (Hover here then press enter for delivery): " << setw(31) << " " << setw(10) << TotalBill << " PHP";
            gotoxy(10, 15);
            color(Set[10]);
            cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t11. Back(Hover here then press enter to go back to menu)" << endl;

            key = _getch();

            if (key == 72 && (counter >= 2 && counter <= 11))
            {
                counter--;
            }
            if (key == 80 && (counter >= 1 && counter <= 10))
            {
                counter++;
            }
            if (key == '\r')//carriage return
            {
                if (counter == 1)
                {
                    // if enter is click and highlight is on 1 the program will run the code here

                    system("cls");
                    for (int i = 0; i < 5; i++)
                    {
                        if (cart.isItemAtEqual(i, "\0") == TRUE)
                        {
                            if (!RAM1.isEmpty())
                            {
                                RAM1.remove(ram1);
                                cart.replaceAt(i, ram1);
                                break;
                            }
                        }
                    }
                    BuyPhase();

                }
                if (counter == 2)
                {

                    system("cls");
                    for (int i = 5; i < 10; i++)
                    {
                        if (cart.isItemAtEqual(i, "\0") == TRUE)
                        {
                            if (!RAM2.isEmpty())
                            {
                                cart.replaceAt(i, ram2);
                                RAM2.remove(ram2);
                                break;
                            }

                        }
                    }
                    BuyPhase();
                }
                if (counter == 3)
                {

                    system("cls");
                    for (int i = 10; i < 15; i++)
                    {
                        if (cart.isItemAtEqual(i, "\0") == TRUE)
                        {
                            if (!RAM3.isEmpty())
                            {
                                cart.replaceAt(i, ram3);
                                RAM3.remove(ram3);
                                break;
                            }
                        }
                    }
                    BuyPhase();
                }
                if (counter == 4)
                {

                    system("cls");
                    for (int i = 15; i < 20; i++)
                    {
                        if (cart.isItemAtEqual(i, "\0") == TRUE)
                        {
                            if (!CPU1.isEmpty())
                            {
                                cart.replaceAt(i, cpu1);
                                CPU1.remove(cpu1);
                                break;
                            }
                        }
                    }
                    BuyPhase();
                }
                if (counter == 5)
                {

                    system("cls");
                    for (int i = 20; i < 25; i++)
                    {
                        if (cart.isItemAtEqual(i, "\0") == TRUE)
                        {
                            if (!CPU2.isEmpty())
                            {
                                cart.replaceAt(i, cpu2);
                                CPU2.remove(cpu2);
                                break;
                            }
                        }
                    }
                    BuyPhase();
                }
                if (counter == 6)
                {

                    system("cls");
                    for (int i = 25; i < 30; i++)
                    {
                        if (cart.isItemAtEqual(i, "\0") == TRUE)
                        {
                            if (!CPU3.isEmpty())
                            {
                                cart.replaceAt(i, cpu3);
                                CPU3.remove(cpu3);
                                break;
                            }
                        }
                    }
                    BuyPhase();
                }
                if (counter == 7)
                {

                    system("cls");
                    for (int i = 30; i < 35; i++)
                    {
                        if (cart.isItemAtEqual(i, "\0") == TRUE)
                        {
                            if (!GPU1.isEmpty())
                            {
                                cart.replaceAt(i, gpu1);
                                GPU1.remove(gpu1);
                                break;
                            }
                        }
                    }
                    BuyPhase();
                }
                if (counter == 8)
                {

                    system("cls");
                    for (int i = 35; i < 40; i++)
                    {
                        if (cart.isItemAtEqual(i, "\0") == TRUE)
                        {
                            if (!GPU2.isEmpty())
                            {
                                cart.replaceAt(i, gpu2);
                                GPU2.remove(gpu2);
                                break;
                            }
                        }
                    }
                    BuyPhase();
                }
                if (counter == 9)
                {

                    system("cls");
                    for (int i = 40; i < 45; i++)
                    {
                        if (cart.isItemAtEqual(i, "\0") == TRUE)
                        {
                            if (!GPU3.isEmpty())
                            {
                                cart.replaceAt(i, gpu3);
                                GPU3.remove(gpu3);
                                break;
                            }
                        }
                    }
                    BuyPhase();
                }
                if (counter == 10)
                {
                    if (TotalBill == 0)
                    {
                        SetConsoleTextAttribute(h, 4);
                        cout << "\t\t\t\t\t\t\t\t\t\t\t\tCannot proceed to delivery, you haven't ordered anything yet" << endl;
                        Sleep(2500);
                        system("cls");
                        BuyPhase();
                    }
                    else
                    {
                        system("cls");
                        Bills();
                    }
                       
                    
                }
                if (counter == 11)
                {
                    system("cls");
                    StartMenu();

                }

                break;
            }
            else if (key == '\b')
            {
                if (counter == 1)
                {
                    system("cls");
                    if (RAM1.listSize() != MRAM1)
                    {
                        RAM1.insertEnd(ram1);
                    }
                    for (int i = 0; i < 5; i++)
                    {
                        if (cart.isItemAtEqual(i, "\0") == FALSE)
                        {
                            cart.replaceAt(i, "\0");
                            break;
                        }
                    }
                    BuyPhase();
                }
                if (counter == 2)
                {

                    system("cls");
                    if (RAM2.listSize() != MRAM2)
                    {
                        RAM2.insertEnd(ram2);
                    }
                    for (int i = 5; i < 10; i++)
                    {
                        if (cart.isItemAtEqual(i, "\0") == FALSE)
                        {
                            cart.replaceAt(i, "\0");
                            break;
                        }
                    }
                    BuyPhase();
                }
                if (counter == 3)
                {

                    system("cls");
                    if (RAM3.listSize() != MRAM3)
                    {
                        RAM3.insertEnd(ram3);
                    }
                    for (int i = 10; i < 15; i++)
                    {
                        if (cart.isItemAtEqual(i, "\0") == FALSE)
                        {
                            cart.replaceAt(i, "\0");
                            break;
                        }
                    }
                    BuyPhase();
                }
                if (counter == 4)
                {

                    system("cls");
                    if (CPU1.listSize() != MCPU1)
                    {
                        CPU1.insertEnd(cpu1);
                    }
                    for (int i = 15; i < 20; i++)
                    {
                        if (cart.isItemAtEqual(i, "\0") == FALSE)
                        {
                            cart.replaceAt(i, "\0");
                            break;
                        }
                    }
                    BuyPhase();
                }
                if (counter == 5)
                {

                    system("cls");
                    if (CPU2.listSize() != MCPU2)
                    {
                        CPU2.insertEnd(cpu2);
                    }
                    for (int i = 20; i < 25; i++)
                    {
                        if (cart.isItemAtEqual(i, "\0") == FALSE)
                        {
                            cart.replaceAt(i, "\0");
                            break;
                        }
                    }
                    BuyPhase();
                }
                if (counter == 6)
                {

                    system("cls");
                    if (CPU3.listSize() != MCPU3)
                    {
                        CPU3.insertEnd(cpu3);
                    }
                    for (int i = 25; i < 30; i++)
                    {
                        if (cart.isItemAtEqual(i, "\0") == FALSE)
                        {
                            cart.replaceAt(i, "\0");
                            break;
                        }
                    }
                    BuyPhase();
                }
                if (counter == 7)
                {

                    system("cls");
                    if (GPU1.listSize() != MGPU1)
                    {
                        GPU1.insertEnd(gpu1);
                    }
                    for (int i = 30; i < 35; i++)
                    {
                        if (cart.isItemAtEqual(i, "\0") == FALSE)
                        {
                            cart.replaceAt(i, "\0");
                            break;
                        }
                    }
                    BuyPhase();
                }
                if (counter == 8)
                {

                    system("cls");
                    if (GPU2.listSize() != MGPU2)
                    {
                        GPU2.insertEnd(gpu2);
                    }
                    for (int i = 35; i < 40; i++)
                    {
                        if (cart.isItemAtEqual(i, "\0") == FALSE)
                        {
                            cart.replaceAt(i, "\0");
                            break;
                        }
                    }
                    BuyPhase();
                }
                if (counter == 9)
                {

                    system("cls");
                    if (GPU3.listSize() != MGPU3)
                    {
                        GPU3.insertEnd(gpu3);
                    }
                    for (int i = 40; i < 45; i++)
                    {
                        if (cart.isItemAtEqual(i, "\0") == FALSE)
                        {
                            cart.replaceAt(i, "\0");
                            break;
                        }
                    }
                    BuyPhase();
                }

            }
            Set[0] = 7;
            Set[1] = 7;
            Set[2] = 7;
            Set[3] = 7;
            Set[4] = 7;
            Set[5] = 7;
            Set[6] = 7;
            Set[7] = 7;
            Set[8] = 7;
            Set[9] = 7;
            Set[10] = 7;
            if (counter == 1)
            {
                Set[0] = 12;
            }
            if (counter == 2)
            {
                Set[1] = 12;
            }
            if (counter == 3)
            {
                Set[2] = 12;
            }
            if (counter == 4)
            {
                Set[3] = 12;
            }
            if (counter == 5)
            {
                Set[4] = 12;
            }
            if (counter == 6)
            {
                Set[5] = 12;
            }
            if (counter == 7)
            {
                Set[6] = 12;
            }
            if (counter == 8)
            {
                Set[7] = 12;
            }
            if (counter == 9)
            {
                Set[8] = 12;
            }
            if (counter == 10)
            {
                Set[9] = 11;
            }
            if (counter == 11)
            {
                Set[10] = 11;
            }
        }
    }
}



void MenuDisplay::LoginManagerPass()
{
    // Variable Declaration
    string password;
    bool Decide = false;
    while (Decide != true)
    {
        for (int i = 0; i < 20; i++)
            cout << "\n";
        SetConsoleTextAttribute(h, 13);
        cout << "\t\t\t\t\t\t\t\t\t\t\t       ===========================================" << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t       ===========================================" << endl;
        SetConsoleTextAttribute(h, 10);
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t     Login as 'MANAGER' \n";
        SetConsoleTextAttribute(h, 13);
        cout << "\t\t\t\t\t\t\t\t\t\t\t       ===========================================" << endl;
        SetConsoleTextAttribute(h, 4);
        cout << "\t\t\t\t\t\t\t\t\t\t\t\t    Enter the password (in lowercase): "; //password is seven
        getline(cin, password);

        if (password != "seven")
        {
            system("cls");
            do
            {
                for (int i = 0; i < 20; i++)
                    cout << "\n";
                cout << "\0";
                SetConsoleTextAttribute(h, 13);
                cout << "\t\t\t\t\t\t\t\t\t\t\t       ===========================================" << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t\t       ===========================================" << endl;
                SetConsoleTextAttribute(h, 10);
                cout << "\t\t\t\t\t\t\t\t\t\t\t        ~ I N C O R R E C T  P A S S W O R D ~ \2 \3" << endl;
                SetConsoleTextAttribute(h, 13);
                cout << "\t\t\t\t\t\t\t\t\t\t\t       ===========================================" << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t\t       ===========================================" << endl;
                SetConsoleTextAttribute(h, 4);
                cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t    Press Enter to Return";
                SetConsoleTextAttribute(h, 15);
                key = _getch();
                system("cls");
            } while (key != '\r');
            StartMenu();
        }
        else if (password == "seven")
        {
            system("cls");
            do
            {
                for (int i = 0; i < 20; i++)
                    cout << "\n";
                cout << "\0";
                SetConsoleTextAttribute(h, 13);
                cout << "\t\t\t\t\t\t\t\t\t\t\t       ===========================================" << endl;
                SetConsoleTextAttribute(h, 10);
                cout << "\t\t\t\t\t\t\t\t\t\t\t         ~ C O R R E C T  P A S S W O R D ~ \2 \3" << endl;
                cout << "\t\t\t\t\t\t\t\t\t\t\t            ~ A C C E S S  G R A N T E D  ~ " << endl;
                SetConsoleTextAttribute(h, 13);
                cout << "\t\t\t\t\t\t\t\t\t\t\t       ===========================================" << endl;
                SetConsoleTextAttribute(h, 4);
                cout << "\t\t\t\t\t\t\t\t\t\t\t\t        Press Enter to Continue";
                SetConsoleTextAttribute(h, 15);
                key = _getch();
                system("cls");
            } while (key != '\r');
            Decide = true;
            LoginManager();
            break;
        }
    }


}

void MenuDisplay::LoginManager()
{
    int Set[] = {7,7,7,7}; // DEFAULT COLORS
    int counter = 1;
    for (int i = 0; i < 26; i++)
        cout << "\n";
    SetConsoleTextAttribute(h, 13);
    cout << "\t\t\t\t\t\t\t\t\t\t\t       |===========================================|" << endl;
    SetConsoleTextAttribute(h, 10);
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t LOGGED IN AS 'MANAGER':" << endl;
    SetConsoleTextAttribute(h, 13);
    cout << "\t\t\t\t\t\t\t\t\t\t\t       |===========================================|" << endl;
    SetConsoleTextAttribute(h, 4);
    cout << "\t\t\t\t\t\t\t\t\t\t\t\t  use arrow keys then press enter to confirm ";
    for (int i = 0;;)
    {
        gotoxy(10, 5);
        color(Set[0]);
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t   1. Show Product List" << endl;
        gotoxy(10, 6);
        color(Set[1]);
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t   2. Remove/Add Products" << endl;
        gotoxy(10, 7);
        color(Set[2]);
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t   3. Logout " << endl;
        gotoxy(10, 8);
        color(Set[3]);
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t   4. Delivery Queue " << endl;
        key = _getch();
        if (key == 72 && (counter >= 2 && counter <= 4))
        {
            counter--;
        }
        if (key == 80 && (counter >= 1 && counter <= 3))
        {
            counter++;
        }
        if (key == '\r')//carriage return
        {
            if (counter == 1)
            {
                system("cls");
                AvailItems();
                break;
            }
            if (counter == 2)
            {
                system("cls");
                RemoveAddProduct();
                break;
            }
            if (counter == 3)
            {
                system("cls");
                StartMenu();
                break;
            }
            if (counter == 4)
            {
                system("cls");
                ManagerDeliveryProcess();
                break;
            }
            
        }
        Set[0] = 7;
        Set[1] = 7;
        Set[2] = 7;
        Set[3] = 7;
        if (counter == 1)
            Set[0] = 12;
        if (counter == 2)
            Set[1] = 12;
        if (counter == 3)
            Set[2] = 12;
        if (counter == 4)
            Set[3] = 12;
    }
}
void MenuDisplay::AvailItems()
{
    do
    {

        SetConsoleTextAttribute(h, 14);
        cout << setw(60) << right << "  " << "==================================================================================================\n" << endl;
        cout << setw(60) << right << "  " << "||";
        SetConsoleTextAttribute(h, 2);
        cout << "  " << "                              A V A I L A B L E  P R O D U C T S";
        SetConsoleTextAttribute(h, 14);
        cout << "  " << "                          || \n" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << setw(60) << right << "  " << "||";
        SetConsoleTextAttribute(h, 14);
        cout << "  " << "                                                                                            || \n" << endl;
        cout << setw(60) << right << "  " << "==================================================================================================\n" << endl;


        cout << "\t\t\t\t\t\t\t Name of the Product" << setw(45) << "Qty" << setw(40) << "Price" << endl;

        // RAM
        cout << "\n\t\t\t\t\t\t\t1. RAM: HyperX Fury " << setw(44) << RAM1.listSize() << setw(37) << "\t 7000 PHP";
        cout << "\n\t\t\t\t\t\t\t2. RAM: F4-2400C17S-4GVR " << setw(39) << RAM2.listSize() << setw(37) << "\t 5000 PHP";
        cout << "\n\t\t\t\t\t\t\t3. RAM: F4 - 2666C18D - 16GTZN " << setw(33) << RAM3.listSize() << setw(37) << "\t 11000 PHP";
        cout << "\t\t\t\t\t\t\t\t\t\t\t        ";

        // CPU
        cout << "\n\t\t\t\t\t\t\t4. CPU: Intel® Core™ i5-6500 Processor " << setw(25) << CPU1.listSize() << setw(37) << "\t 10000 PHP";
        cout << "\n\t\t\t\t\t\t\t5. CPU:Intel® Core™ i7-10700F Processor " << setw(24) << CPU2.listSize() << setw(37) << "\t 15000 PHP";
        cout << "\n\t\t\t\t\t\t\t6. CPU:Intel® Core™ i5-10400F Processor " << setw(24) << CPU3.listSize() << setw(37) << "\t 8000 PHP";
        cout << "\t\t\t\t\t\t\t\t\t\t\t        ";

        // GPU
        cout << "\n\t\t\t\t\t\t\t7. GPU: NVIDIA® GeForce RTX™ 3080 " << setw(30) << GPU1.listSize() << setw(37) << "\t 20000 PHP";
        cout << "\n\t\t\t\t\t\t\t8. GPU: GeForce GTX 1060 6 GB " << setw(34) << GPU2.listSize() << setw(37) << "\t 11000 PHP";
        cout << "\n\t\t\t\t\t\t\t9. GPU: GEFORCE GTX 1080 Ti " << setw(36) << GPU3.listSize() << setw(37) << "\t 15000 PHP";
        cout << endl;
        cout << setw(60) << right << "  " << "==================================================================================================\n" << endl;
        cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t    Press Enter to Return";
        SetConsoleTextAttribute(h, 15);
        key = _getch();
        system("cls");
    } while (key != '\r');

    LoginManager();
}

void MenuDisplay::RemoveAddProduct()
{
    int Set[] = {7,7,7,7,7,7,7,7,7,7 };
    int counter = 1;
    SetConsoleTextAttribute(h, 14);
    cout << setw(60) << right << "  " << "==================================================================================================\n" << endl;
    cout << setw(60) << right << "  " << "||";
    SetConsoleTextAttribute(h, 2);
    cout << "  " << "                              R E M O V E/ A D D  P R O D U C T S";
    SetConsoleTextAttribute(h, 14);
    cout << "  " << "                         || \n" << endl;
    SetConsoleTextAttribute(h, 14);
    cout << setw(60) << right << "  " << "||";
    SetConsoleTextAttribute(h, 14);
    cout << "  " << "                                                                                            || \n" << endl;
    cout << setw(60) << right << "  " << "==================================================================================================\n" << endl;
    cout << "\t\t\t\t\t\t\t Name of the Product" << setw(45) << "\tQty (Max = 5)" << setw(35) << "Price" << endl;
    for (int i = 0;;)
    {
        // RAM
        gotoxy(10, 5);
        color(Set[0]);
        cout << "\n\n\n\n\n\t\t\t\t\t\t\t1. RAM: HyperX Fury " << setw(44) << RAM1.listSize() << setw(37) << "\t 7000 PHP" << endl;
        gotoxy(10, 6);
        color(Set[1]);
        cout << "\n\n\n\n\n\t\t\t\t\t\t\t2. RAM: F4-2400C17S-4GVR " << setw(39) << RAM2.listSize() << setw(37) << "\t 5000 PHP" << endl;
        gotoxy(10, 7);
        color(Set[2]);
        cout << "\n\n\n\n\n\t\t\t\t\t\t\t3. RAM: F4 - 2666C18D - 16GTZN " << setw(33) << RAM3.listSize() << setw(37) << "\t 11000 PHP" << endl;
        // CPU
        gotoxy(10, 8);
        color(Set[3]);
        cout << "\n\n\n\n\n\t\t\t\t\t\t\t4. CPU: Intel® Core™ i5-6500 Processor " << setw(25) << CPU1.listSize() << setw(37) << "\t 10000 PHP" << endl;
        gotoxy(10, 9);
        color(Set[4]);
        cout << "\n\n\n\n\n\t\t\t\t\t\t\t5. CPU:Intel® Core™ i7-10700F Processor " << setw(24) << CPU2.listSize() << setw(37) << "\t 15000 PHP" << endl;
        gotoxy(10, 10);
        color(Set[5]);
        cout << "\n\n\n\n\n\t\t\t\t\t\t\t6. CPU:Intel® Core™ i5-10400F Processor " << setw(24) << CPU3.listSize() << setw(37) << "\t 8000 PHP" << endl;
        // GPU
        gotoxy(10, 11);
        color(Set[6]);
        cout << "\n\n\n\n\n\t\t\t\t\t\t\t7. GPU: NVIDIA® GeForce RTX™ 3080 " << setw(30) << GPU1.listSize() << setw(37) << "\t 20000 PHP" << endl;
        gotoxy(10, 12);
        color(Set[7]);
        cout << "\n\n\n\n\n\t\t\t\t\t\t\t8. GPU: GeForce GTX 1060 6 GB " << setw(34) << GPU2.listSize() << setw(37) << "\t 11000 PHP" << endl;
        gotoxy(10, 13);
        color(Set[8]);
        cout << "\n\n\n\n\n\t\t\t\t\t\t\t9. GPU: GEFORCE GTX 1080 Ti " << setw(36) << GPU3.listSize() << setw(37) << "\t 15000 PHP" << endl;
        gotoxy(10, 14);
        color(Set[9]);
        cout << "\n\n\n\n\n\t\t\t\t\t\t\t10. Return to Manager Menu " << endl;
        
        key = _getch();

        if (key == 72 && (counter >= 2 && counter <= 10))
        {
            counter--;
        }
        if (key == 80 && (counter >= 1 && counter <= 9))
        {
            counter++;
        }
        if (key == '\b')
        {
            if (counter == 1)
            {
                system("cls");
                RAM1.remove(ram1);
                cart.cartRAM1Size();
                MRAM1 = MRAM1 - 1;
                RemoveAddProduct();
            }
            if (counter == 2)
            {
                system("cls");
                RAM2.remove(ram2);
                MRAM2 = MRAM2 - 1;
                RemoveAddProduct();
            }
            if (counter == 3)
            {
                system("cls");
                RAM3.remove(ram3);
                MRAM3 = MRAM3 - 1;
                RemoveAddProduct();
            }
            if (counter == 4)
            {
                system("cls");
                CPU1.remove(cpu1);
                MCPU1 = MCPU1 - 1;
                RemoveAddProduct();
            }
            if (counter == 5)
            {
                system("cls");
                CPU2.remove(cpu2);
                MCPU2 = MCPU2 - 1;
                RemoveAddProduct();
            }
            if (counter == 6)
            {
                system("cls");
                CPU3.remove(cpu3);
                MCPU3 = MCPU3 - 1;
                RemoveAddProduct();
            }
            if (counter == 7)
            {
                system("cls");
                GPU1.remove(gpu1);
                MGPU1 = MGPU1 - 1;
                RemoveAddProduct();
            }
            if (counter == 8)
            {
                system("cls");
                GPU2.remove(gpu2);
                MGPU2 = MGPU2 - 1;
                RemoveAddProduct();
            }
            if (counter == 9)
            {
                system("cls");
                GPU3.remove(gpu3);
                MGPU3 = MGPU3 - 1;
                RemoveAddProduct();
            }
        }
        else if (key == '\r')
        {
            if (counter == 1)
            {
                system("cls");
                RAM1.insertEnd(ram1);
                RemoveAddProduct();
            }
            if (counter == 2)
            {
                system("cls");
                RAM2.insertEnd(ram2);
               
                RemoveAddProduct();
            }
            if (counter == 3)
            {
                system("cls");
                RAM3.insertEnd(ram3);
                RemoveAddProduct();
            }
            if (counter == 4)
            {
                system("cls");
                CPU1.insertEnd(cpu1);
                RemoveAddProduct();
            }
            if (counter == 5)
            {
                system("cls");
                CPU2.insertEnd(cpu2);
                RemoveAddProduct();
            }
            if (counter == 6)
            {
                system("cls");
                CPU3.insertEnd(cpu3);
                RemoveAddProduct();
            }
            if (counter == 7)
            {
                system("cls");
                GPU1.insertEnd(gpu1);
                RemoveAddProduct();
            }
            if (counter == 8)
            {
                system("cls");
                GPU2.insertEnd(gpu2);
                RemoveAddProduct();
            }
            if (counter == 9)
            {
                system("cls");
                GPU3.insertEnd(gpu3);
                RemoveAddProduct();
            }
            if (counter == 10)
            {
                system("cls");
                LoginManager();
            }
        }
        Set[0] = 7;
        Set[1] = 7;
        Set[2] = 7;
        Set[3] = 7;
        Set[4] = 7;
        Set[5] = 7;
        Set[6] = 7;
        Set[7] = 7;
        Set[8] = 7;
        Set[9] = 7;
        if (counter == 1)
            Set[0] = 12;
        if (counter == 2)
            Set[1] = 12;
        if (counter == 3)
            Set[2] = 12;
        if (counter == 4)
            Set[3] = 12;
        if (counter == 5)
        
            Set[4] = 12;
        if (counter == 6)
            Set[5] = 12;
        if (counter == 7)
            Set[6] = 12;
        if (counter == 8)
            Set[7] = 12;
        if (counter == 9)
            Set[8] = 12;
        if (counter == 10)
            Set[9] = 11;
    }
}
void MenuDisplay::Bills()
{
    ofstream receipt;
    string item = ".";
    time_t now = time(0);
    dt = ctime(&now);
    for (int i = 0; i < 26; i++)
        cout << "\n";
    cout << "\0";
    SetConsoleTextAttribute(h, 14);
    cout << setw(87) << right << "  " << "=====================================================================\n" << endl;
    cout << setw(87) << right << "  " << "=====================================================================\n" << endl;
    cout << setw(87) << right << "  " << "||";
    SetConsoleTextAttribute(h, 4);
    cout << "  " << "               D E L I V E R Y  P R O C E S S";
    SetConsoleTextAttribute(h, 14);
    cout << "  " << "               || \n" << endl;
    SetConsoleTextAttribute(h, 14);
    cout << setw(87) << right << "  " << "=====================================================================\n" << endl << endl << endl;
    SetConsoleTextAttribute(h, 15);
    cout << "\t\t\t\t\t\t\t\t\t\t\t\tPlease enter your contact details." << endl;
    cout << "\t\t\t\t\t\t\t\t\t\t\t\tFull name: ";
    getline(cin, name);
    cout << "\t\t\t\t\t\t\t\t\t\t\t\tAddress: ";
    getline(cin, address);
    cout << "\t\t\t\t\t\t\t\t\t\t\t\tContact number: ";
    getline(cin, cPNo);

    system("cls");
    cart.sort();
    do
    {
        for (int i = 0; i < 26; i++)
            cout << "\n";
        SetConsoleTextAttribute(h, 14);
        cout << setw(87) << right << "  " << "=====================================================================\n" << endl;
        cout << setw(87) << right << "  " << "=====================================================================\n" << endl;
        cout << setw(87) << right << "  " << "||";
        SetConsoleTextAttribute(h, 4);
        cout << "  " << "                      S U M M A R Y";
        SetConsoleTextAttribute(h, 14);
        cout << "  " << "                          || \n" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << setw(87) << right << "  " << "=====================================================================\n" << endl << endl << endl;
        SetConsoleTextAttribute(h, 15);
        cout << "\t\t\t\t\t\t\t\t\t\t\t\tName of Customer: " << name << endl << "\t\t\t\t\t\t\t\t\t\t\t\tAddress: " << address << endl << "\t\t\t\t\t\t\t\t\t\t\t\tContact Number: " << cPNo << endl
            << "\t\t\t\t\t\t\t\t\t\t\t\tDate of purchase: " << dt << endl;

        cout << "\t\t\t\t\t\t\t\t\t\t\t\tPRODUCTS BOUGHT" << endl;
        for (int i = 0; i < 45; i++)
        {
            if (cart.isItemAtEqual(i, "\0") == FALSE)
            {
                cart.retrieveAt(i, item);
                cout << "\t\t\t\t\t\t\t\t\t\t\t\t" << item << endl;
            }
        }
        cout << "\t\t\t\t\t\t\t\t\t\t\t\tTotal Bill: " << TotalBill << endl;
        cout << "\t\t\t\t\t\t\t\t\t\t\t\tYour order has been added to the delivery queue. Thanks for shopping with us! (Press Enter to return to start menu)" << endl;
        key = _getch();
        system("cls");
    } while (key != '\r');
    receipt.open("receipt.txt");
    receipt << "Name of Customer: " << name << endl << "Address: " << address << endl << "Contact Number: " << cPNo << endl
        << "Date of purchase: " << dt << endl;

    receipt << "PRODUCTS BOUGHT" << endl;
    for (int i = 0; i < 45; i++)
    {
        if (cart.isItemAtEqual(i, "\0") == FALSE)
        {
            cart.retrieveAt(i, item);
            receipt << item << endl;
        }
    }
    receipt << "Total Bill: " << TotalBill << endl;
    receipt.close();
    CustomerDeliveryProcess();

    for (int i = 0; i < 45; i++)
        cart.replaceAt(i, "\0");
    loadingBar();
    system("cls");
    StartMenu();
}

void Info::CustomerDeliveryProcess()
{
    string item, orderInfo, customerInfo;

    for (int j = 0; j < 45; j++)
    {
        if (cart.isItemAtEqual(j, "\0") == FALSE)
            {
                cart.retrieveAt(j, item);
                orderInfo = orderInfo + " / " + item;
            }
    }
    customerInfo = name + " / " + address + " / " + cPNo + " / Orders: " + orderInfo;
    queue.addQueue(customerInfo);
    system("cls");
} //return to start

void MenuDisplay::ManagerDeliveryProcess()
{
    int Set[] = { 7,7,7 };
    int counter = 1;
    ofstream DeliveryQueue;
    if (queue.isEmptyQueue() == FALSE)
    {
        for (int i = 0; i < 26; i++)
            cout << "\n";
        cout << setw(87) << right << "  " << "=====================================================================\n" << endl;
        cout << setw(87) << right << "  " << "=====================================================================\n" << endl;
        cout << setw(87) << right << "  " << "||";
        SetConsoleTextAttribute(h, 4);
        cout << "  " << "               D E L I V E R Y  Q U E U E ";
        SetConsoleTextAttribute(h, 14);
        cout << "  " << "               || \n" << endl;
        SetConsoleTextAttribute(h, 14);
        cout << setw(87) << right << "  " << "=====================================================================\n" << endl << endl << endl;
        for (int i = 0;;)
        {
            gotoxy(10, 5);
            color(Set[0]);
            cout << "\n\n\n\n\n\t\t\t\t\t\t\t1. Display Delivery Queue" << endl;
            gotoxy(10, 6);
            color(Set[1]);
            cout << "\n\n\n\n\n\t\t\t\t\t\t\t2. Finalize Delivery Queue (This would print the queue into an external file and empty its contents.)" << endl;
            gotoxy(10, 7);
            color(Set[2]);
            cout << "\n\n\n\n\n\t\t\t\t\t\t\t3. Return to Start Menu" << endl;
            key = _getch();
            if (key == 72 && (counter >= 2 && counter <= 3))
            {
                counter--;
            }
            if (key == 80 && (counter >= 1 && counter <= 2))
            {
                counter++;
            }
            if (key == '\r')//carriage return
            {
                if (counter == 1)
                {
                    system("cls");
                    queue.displayQueue();
                    ManagerDeliveryProcess();
                }
                if (counter == 2)
                {
                    system("cls");
                    DeliveryQueue.open("DeliveryQueue.txt");
                    DeliveryQueue << dt << endl << "ORDERS FOR DELIVERY" << endl;
                    while (!queue.isEmptyQueue()) {
                        DeliveryQueue << queue.front() << endl;
                        queue.deleteQueue();
                    }
                    DeliveryQueue.close();
                    cout << "\n\n\n\n\n\t\t\t\t\t\t\tDelivery queue for " << dt << "\t\t\t\t\t\t\thas been finalized.";
                    ManagerDeliveryProcess();
                }
                if (counter == 3)
                {
                    system("cls");
                    StartMenu();
                    break;
                }

            }
            Set[0] = 7;
            Set[1] = 7;
            Set[2] = 7;
            if (counter == 1)
                Set[0] = 12;
            if (counter == 2)
                Set[1] = 12;
            if (counter == 3)
                Set[2] = 12;
        }
    }
    else
    {
        cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t   Delivery queue is now empty" << endl;
        Sleep(2000);
        system("cls");
        LoginManager();
    }
        
           
} //return to main menu
#endif
