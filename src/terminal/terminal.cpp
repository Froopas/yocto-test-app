#include "terminal.h"

namespace TERM {

    void Terminal::setoutput(int x, int y) {
        if (x < 0 || y < 0) {
            return;
        }

        std::cout << "\x1b[" << x << ";" << y << "f";
    }

    void Terminal::setfontcolor(const Color& color) {
        std::cout << color;
    }

    void Terminal::setbackgroundcolor(const Color& color) {
        std::cout << color;
    }

    void Terminal::restore() {
        setfontcolor(white_f);
        setbackgroundcolor(black_b);
        std::cout << "\x1b[0m" << std::flush;
    }

    Terminal::~Terminal() {
        restore();
    }
}
