#include <windows.h>

int CALLBACK WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow)
{
    MessageBox(0, "Test", "Game", MB_OK | MB_ICONINFORMATION);
    return (0);
}