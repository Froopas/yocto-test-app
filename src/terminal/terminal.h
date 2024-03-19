#ifndef __TERM__
#define __TERM__

#include <iostream>

namespace TERM {

    enum Color {
        black_f = 30,
        red_f,
        green_f,
        yellow_f,
        blue_f,
        magenta_f,
        cyan_f,
        white_f,

        black_b = 40,
        red_b,
        green_b,
        yellow_b,
        blue_b,
        magenta_b,
        cyan_b,
        white_b,
    };

    /*class Fontcolor {
        int fontcolor;

    public:
        Fontcolor(int color);
        int get() const;

        friend std::ostream& operator<< (std::ostream& os, const TERM::Fontcolor& color);
    }f_black{30}, f_red{31}, f_green{32}, f_yellow{33}, f_blue{34}, f_magenta{35}, f_cyan{36}, f_white{37};

    class Bkgcolor {
        int backgroundcolor;

    public:
        Bkgcolor(int color);
        int get() const;

        friend std::ostream& operator<< (std::ostream& os, const TERM::Bkgcolor& color);
    }black{40}, red{41}, green{42}, yellow{43}, blue{44}, magenta{45}, cyan{46}, white{47};*/

    class Terminal {
    public:
        ~Terminal();
        void setoutput(int x, int y);

        void setfontcolor(const TERM::Color& color);

        void setbackgroundcolor(const TERM::Color& color);

        void restore();
    };

    inline std::ostream& operator<< (std::ostream& os, const TERM::Color& color) {
        os << "\x1b[" << static_cast<int>(color) << "m";
        return os;
    }

}

#endif