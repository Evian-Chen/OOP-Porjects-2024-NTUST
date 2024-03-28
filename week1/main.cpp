#include <iostream>
//#include <D:\boost_1_66_0\boost\multiprecision/cpp_int.hpp>
/*
This program connot process 18446544175407471631, it will exit instead.
18446544175407471631 should be a 64-bit integer, but how come it connot be excuted?
*/

int main() {
    //boost::multiprecision::cpp_int sec, minute, hour, left_s, left_m;
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