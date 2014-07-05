#include <vector>
#include <string>
#include <sstream>

std::vector<std::string> Lornix::split(std::string s, char delim) {
    std::vector<std::string> elems;
    std::stringstream ss(s);
    std::string item;
    while (std::getline(ss, item, delim)) {
        elems.push_back(item);
    }
    return elems;
}

std::string Lornix::join(std::vector<std::string> v, std::string delim) {
    std::stringstream ss = v[0];
    for (size_t i = 1; i < v.size(); ++i) {
        ss << delim << v[i];
    }
    return ss.str();
}
