
//TM Pokemon battle project

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <windows.h>
#include <gdiplus.h>
#pragma comment (lib, "gdiplus.lib")
using namespace Gdiplus;
using namespace std;  

struct Mon{ 
    string name;
    int ATK;
    int DEF;
    int SPD;
    int agility;
    string title;
    string type;
    string dualType = "none";
    string desc;
    int mondex(){
        MessageBoxA(NULL, (name + " " + title + " a " + type + " and " + dualType + " type\n\n" + desc).c_str(), "Mon Dex Entry", MB_OK | MB_ICONINFORMATION);
        return 0;
    }
};

struct Player{
    Mon mon;
};
LRESULT CALLBACK DialogProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    switch (msg) {
        case WM_COMMAND:
            switch (LOWORD(wParam)) {
                case 1: // Button 1
                    MessageBox(hwnd, "You clicked Option 1!", "Info", MB_OK);
                    EndDialog(hwnd, 1);
                    return TRUE;
                case 2: // Button 2
                    MessageBox(hwnd, "You clicked Option 2!", "Info", MB_OK);
                    EndDialog(hwnd, 2);
                    return TRUE;
                case 3: // Button 3
                    MessageBox(hwnd, "You clicked Option 3!", "Info", MB_OK);
                    EndDialog(hwnd, 3);
                    return TRUE;
            }
            break;
        case WM_CLOSE:
            EndDialog(hwnd, 0);
            return TRUE;
    }
    return FALSE;
}
// Window procedure function
LRESULT CALLBACK WindowProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam) {
    Player user;
    switch (msg) {
        case WM_COMMAND:
            switch (LOWORD(wParam)) {
                case 1: // Button 1 clicked
                    user.mon = {"Nick", 5, 5, 5, 5, "The tickler mon", "Zombie", "Humor", "While slow, they get stronger the more damage they have done. To stun their prey they will tickle...that's it"};
                    user.mon.mondex();
                    // Or call your custom function here
                    break;
                case 2: // Button 2 clicked
                    user.mon = {"Luke", 5, 5, 5, 5, "The man mon", "Spirit", "Light", "After spending most of their life in haunted areas has infused them with many curses and possesions but unlike many spirit types they are uneffected to light and will use flashlights to blind it's prey before attacking"};
                    user.mon.mondex();
                    break;
                case 3: // Button 3 clicked
                    user.mon = {"Cecily", 5, 5, 5, 5, "The name stealer mon", "Fae", "Trickster", "Dave. There are many daves in the world, it is the fault of this mon, with a nasty habit of stealing and replacing names of people they meet they have many names but everyone they meet only has one, Dave."};
                    user.mon.mondex();
                    break;
                case 4: // Button 4 clicked
                    user.mon = {"Johnas", 5, 5, 5, 5, "The two dimensional mon", "Poletgiest", "Reprehensible", "Ever wonder who is at fault, it is this mon's fault, they are reprehensible"};
                    user.mon.mondex();
                    break;
                case 5: // Button 5 clicked
                    user.mon = {"Darius", 5, 5, 5, 5, "The presidential mon", "Political", "Spirit", "Anybody who has been within the white house would know it is unnaturally cold, the reason for that is this mon always watching over his successors and making sure the ones he doesnt like dont get re-elected"};
                    user.mon.mondex();
                    break;
                case 6: // Button 6 clicked
                    user.mon = {"Vincent", 5, 5, 5, 5, "The strongest climbing mon", "Climber", "Swole", "The only living humon left, it spends eternity climbing random ledges"};
                    user.mon.mondex();
                    break;
                case 7: // Button 7 clicked
                    user.mon = {"Voncent", 5, 5, 5, 5, "The golfer mon", "Golfer", "Stupoid", "Plays golf all day everyday which is stupid, golf is stupid"};
                    user.mon.mondex();
                    break;
                // Add more cases for more buttons
            }
            break;
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
    }
    return DefWindowProc(hwnd, msg, wParam, lParam);
}


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int nCmdShow) {
    Mon mon0 = {"Larose", 5, 5, 5, 5, "", "Normal", "Fae", "Youre adding descriptions to them?"};
    Mon mon1 = {"Luke", 5, 5, 5, 5, "The lost man mon", "Spirit", "Light", "After spending most of their life in haunted areas has infused them with many curses and possesions but unlike many spirit types they are uneffected to light and will use flashlights to blind it's prey before attacking"};
    Mon mon2 = {"Nick", 5, 5, 5, 5, "The tickler mon", "Zombie", "Humor", "While slow, they get stronger the more damage they have done. To stun their prey they will tickle...that's it"};
    Mon mon3 = {"Johnas", 5, 5, 5, 5, "The two dimensional mon", "Poletgiest", "Reprehensible", "Ever wonder who is at fault, it is this mon's fault, they are reprehensible"};
    Mon mon4 = {"Cecily", 5, 5, 5, 5, "The name stealer mon", "Fae", "Trickster", "Dave. There are many daves in the world, it is the fault of this mon, with a nasty habit of stealing and replacing names of people they meet they have many names but everyone they meet only has one, Dave."};
    Mon mon5 = {"Darius", 5, 5, 5, 5, "The presidential mon", "Political", "Spirit", "Anybody who has been within the white house would know it is unnaturally cold, the reason for that is this mon always watching over his successors and making sure the ones he doesnt like dont get re-elected"};
    Mon mon6 = {"Vincent", 5, 5, 5, 5, "The strongest climbing mon", "Climber", "Swole", "The only living mon left, it spends eternity climbing random ledges"};
    Mon mon7 = {"Voncent", 5, 5, 5, 5, "The golfer mon", "Golfer", "Stupoid", "Plays golf all day everyday which is stupid, golf is stupid"};
    const char CLASS_NAME[] = "CustomButtonWindow";
    WNDCLASS wc = {};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = hInstance;
    wc.lpszClassName = CLASS_NAME;

    RegisterClass(&wc);

    HWND hwnd = CreateWindowEx(
        0, CLASS_NAME, "Custom Options",
        WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 5000, 5000,
        NULL, NULL, hInstance, NULL
    );

    if (hwnd == NULL) return 0;

    // Create three buttons
    CreateWindow("BUTTON", "Nick", WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        1000, 500, 100, 30, hwnd, (HMENU)1, hInstance, NULL);
    CreateWindow("BUTTON", "Luke", WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        1100, 500, 100, 30, hwnd, (HMENU)2, hInstance, NULL);
    CreateWindow("BUTTON", "Cecily", WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        1200, 500, 100, 30, hwnd, (HMENU)3, hInstance, NULL);
    CreateWindow("BUTTON", "Johnas", WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        1000, 530, 100, 30, hwnd, (HMENU)4, hInstance, NULL);
    CreateWindow("BUTTON", "Darius", WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        1100, 530, 100, 30, hwnd, (HMENU)5, hInstance, NULL);
    CreateWindow("BUTTON", "Vincent", WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        1200, 530, 100, 30, hwnd, (HMENU)6, hInstance, NULL);
    CreateWindow("BUTTON", "Voncent", WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        1300, 530, 100, 30, hwnd, (HMENU)7, hInstance, NULL);
    ShowWindow(hwnd, nCmdShow);

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }


    //Battle system here
    CreateWindowEx(
        0, CLASS_NAME, "Battle System",
        WS_OVERLAPPEDWINDOW, CW_USEDEFAULT, CW_USEDEFAULT, 5000, 5000,
        NULL, NULL, hInstance, NULL
    );
    if (hwnd == NULL) return 0;
    ShowWindow(hwnd, nCmdShow);
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    DestroyWindow(hwnd);
    
    return 0;
}
    
    
