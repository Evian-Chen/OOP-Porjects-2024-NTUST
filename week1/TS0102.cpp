#include <iostream>

int main() {
    long long sec, minute, hour, left_s, left_m;
    while (std::cin >> sec) {
        minute = sec / 60;
        left_s = sec % 60;
        hour = minute / 60;
        left_m = minute % 60;
        std::cout << hour << " hours " << left_m << " minutes and " << left_s << " seconds" << std::endl;
    }
    return 0;
}
