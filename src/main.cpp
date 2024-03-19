#include "terminal/terminal.h"

int main() {
    TERM::Terminal term{};

    term.setfontcolor(TERM::green_f);
    term.setbackgroundcolor(TERM::cyan_b);
    std::cout << "Hello World!";
    term.restore();

    std::cout << std::endl;
}