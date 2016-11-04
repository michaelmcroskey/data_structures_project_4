// open.cpp: Open Addressing Map

#include "map.h"

#include <stdexcept>

// Methods --------------------------------------------------------------------

OpenMap::OpenMap(double load_factor, int size){
    
}

OpenMap::~OpenMap(){
    
}

void            OpenMap::insert(const std::string &key, const std::string &value) {
    
}

const Entry     OpenMap::search(const std::string &key) {
    
    return NONE;
}

void            OpenMap::dump(std::ostream &os, DumpFlag flag) {
//    for (auto entry : entries) {
//        switch (flag) {
//            case DUMP_KEY:          os << entry.first  << std::endl; break;
//            case DUMP_VALUE:        os << entry.second << std::endl; break;
//            case DUMP_KEY_VALUE:    os << entry.first  << "\t" << entry.second << std::endl; break;
//            case DUMP_VALUE_KEY:    os << entry.second << "\t" << entry.first  << std::endl; break;
//        }
//    }
}

size_t          OpenMap::locate(const std::string &key) {
    
    return 0;
}

void            OpenMap::resize(const size_t new_size) {
    
}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
