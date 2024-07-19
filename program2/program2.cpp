#include <iostream>
#include <sstream>

class program2 {

public:
    void NNallowed();
    void sendName();
    void welcome(const std::string& str);
    void emptyStr();
};

void program2::NNallowed() {
    std::cout << "Nem tartalmazhat a neved szamot/nem adhatsz meg szamot" << std::endl;
}
void program2::sendName() {
    std::cout << "Ird ki a neved!" << std::endl;
}
void program2::welcome(const std::string& str) {
    std::cout << "Szia " << str << "!" << std::endl;
}
void program2::emptyStr() {
    std::cout << "nem adtal meg nevet!" << std::endl;
}


int main() {

    std::string str;
    bool b;
    program2 p2;

    do {
        b = false;
        p2.sendName();
        std::getline(std::cin, str);
        if (str.empty()) {
            b = true;
            p2.emptyStr();
        } else {
            for (char c : str) {
                if (std::isdigit(c)) {
                    b = true;
                    p2.NNallowed();
                    break;
                }
            }
        }
    } while (b);
    p2.welcome(str);
    std::cin.get();
    return 0;
}


 