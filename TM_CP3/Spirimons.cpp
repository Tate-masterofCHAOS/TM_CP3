
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
        cout << name << " " << title << " a " << type << " and " << dualType << endl << endl << desc << endl;
        return 0;
    }
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
LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;
    }
    return DefWindowProc(hwnd, uMsg, wParam, lParam);
}


int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE, LPSTR, int nCmdShow) {
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
        1000, 20, 100, 30, hwnd, (HMENU)1, hInstance, NULL);
    CreateWindow("BUTTON", "Luke", WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        140, 20, 100, 30, hwnd, (HMENU)2, hInstance, NULL);
    CreateWindow("BUTTON", "Cecily", WS_TABSTOP | WS_VISIBLE | WS_CHILD | BS_DEFPUSHBUTTON,
        260, 20, 100, 30, hwnd, (HMENU)3, hInstance, NULL);

    ShowWindow(hwnd, nCmdShow);

    MSG msg;
    while (GetMessage(&msg, NULL, 0, 0)) {
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }
    Mon mon0 = {"Larose", 5, 5, 5, 5, "", "Normal", "", ""};
    Mon mon1 = {"Luke", 5, 5, 5, 5, "The lost man mon", "Spirit", "Light", "After spending most of their life in haunted areas has infused them with many curses and possesions but unlike many spirit types they are uneffected to light and will use flashlights to blind it's prey before attacking"};
    Mon mon2 = {"Nick", 5, 5, 5, 5, "The tickler mon", "Zombie", "Humor", "While slow, they get stronger the more damage they have done. To stun their prey they will tickle...that's it"};
    Mon mon3 = {"Johnas", 5, 5, 5, 5, "The two dimensional mon", "Poletgiest", "Reprehensible", "Ever wonder who is at fault, it is this mon's fault, they are reprehensible"};
    Mon mon4 = {"Cecily", 5, 5, 5, 5, "The name stealer mon", "Fae", "Trickster", "Dave. There are many daves in the world, it is the fault of this mon, with a nasty habit of stealing and replacing names of people they meet they have many names but everyone they meet only has one, Dave."};
    Mon mon5 = {"Darius", 5, 5, 5, 5, "The presidential mon", "Political", "Spirit", "Anybody who has been within the white house would know it is unnaturally cold, the reason for that is this mon always watching over his successors and making sure the ones he doesnt like dont get re-elected"};
    Mon mon6 = {"Vincent", 5, 5, 5, 5, "The strongest climbing mon", "Climber", "Swole", "The only living mon left, it spends eternity climbing random ledges"};
    return 0;
}
    
    
