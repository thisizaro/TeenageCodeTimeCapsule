#include <windows.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    cout << "F - Pause/Resume. ";
    while(true)
    {
        
        if(GetAsyncKeyState(0x38)) // value of 8
        {
            Sleep(1000);
            cout << "Resume? 9";
            while(true)
            {
                Sleep(100);
                if(GetAsyncKeyState(0x39)) // value of 9
                {
                    break;
                }
            }
        }

        if(GetAsyncKeyState(0x01))
        {
            cout << "N";
            keybd_event(0x58, 0, KEYEVENTF_EXTENDEDKEY, 0); // value of x
            Sleep(10);
            keybd_event(0x58, 0, KEYEVENTF_KEYUP, 0);
        }
        if(GetAsyncKeyState(0x02))
        {
            cout << "M";
            keybd_event(0x43, 0, KEYEVENTF_EXTENDEDKEY, 0); // value of c
            Sleep(10);
            keybd_event(0x43, 0, KEYEVENTF_KEYUP, 0);
        }
        // if(GetAsyncKeyState(0x04)) // value of MIDDLE MOUSE BUTTON::: FOR BREAKING STUFF CODE!
        // {
        //     Sleep(500);
        //     cout << "N";
        //     keybd_event(0x58, 0, KEYEVENTF_EXTENDEDKEY, 0); // value of x
        //     while(true)
        //     {
        //         Sleep(500);
        //         if(GetAsyncKeyState(0x04)) // value of MIDDLE mouse button.
        //         {
        //             break;
        //         }
        //     }
        //     keybd_event(0x4E, 0, KEYEVENTF_KEYUP, 0);
        // }
        
        if(GetAsyncKeyState(0x30)) // value of 0
        {
            abort();
        }
        Sleep(5);
    }
    getch();
}