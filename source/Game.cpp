#include <windows.h>

// Window Procedure, message that is retreived from Window's API and gets sent to the game application 
LRESULT CALLBACK MainWindowCallback(
    HWND Window,
    UINT Message,
    WPARAM WParam,
    LPARAM LParam
)
{
    LRESULT Result = 0;

    switch(Message)
    {
    // When window is resized  
    case WM_SIZE:
    {
        OutputDebugStringA("WM_SIZE");
        break;
    }
    // ...is closed 
    case WM_CLOSE:
    {
        OutputDebugStringA("WM_CLOSE");
        break;
    }
    // ...is closed 
    case WM_DESTROY:
    {
        OutputDebugStringA("WM_DESTROY");
        break;
    }
    // ...is started 
    case WM_ACTIVATEAPP:
    {
        OutputDebugStringA("WM_ACTIVATEAPP");
        break;
    }
    // ...is anything else 
    default:
        break;
    }
    
    return(Result);
}

// Window's Entry Point for Window's application, similar to the int main() function 
int CALLBACK WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow)
{
    // Window that will be display the game to the screen 
    WNDCLASS WindowClass = {};

    // Attributes that are applied to window, "CS_CLASSDC" is a device context that allows for rendering graphics into the window, the other two are for redrawing the window based of the user resizing
    WindowClass.style = CS_CLASSDC | CS_HREDRAW | CS_VREDRAW;
    // Window Procedure 
    WindowClass.lpfnWndProc = MainWindowCallback;
    WindowClass.hInstance = hInstance;
    // Name of WindowClass
    WindowClass.lpszClassName = "GameWindowClass";

    return (0);
}