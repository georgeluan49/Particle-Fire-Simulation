#include <iostream>
#include <SDL2/SDL.h>
using namespace std;

int main() {
    if (SDL_Init(SDL_INIT_VIDEO < 0)) {
        cout << "SDL initialization failed!" << endl;
        return 1;
    }
    cout << "SDL initialization succeeded!" << endl;
    SDL_Quit();
    return 0;
}
