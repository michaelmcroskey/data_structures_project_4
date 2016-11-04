// unordered.cpp: Unordered Map

#include "map.h"

#include <algorithm>

// Methods --------------------------------------------------------------------

void            UnorderedMap::insert(const std::string &key, const std::string &value) {
    entries[key] = value;
}

const Entry     UnorderedMap::search(const std::string &key) {
    auto result = entries.find(key);
    if (result == entries.end())
        return NONE;
    else
        return *result;
}

void            UnorderedMap::dump(std::ostream &os, DumpFlag flag) {
    for (auto entry : entries) {
        switch (flag) {
            case DUMP_KEY:          os << entry.first  << std::endl; break;
            case DUMP_VALUE:        os << entry.second << std::endl; break;
            case DUMP_KEY_VALUE:    os << entry.first  << "\t" << entry.second << std::endl; break;
            case DUMP_VALUE_KEY:    os << entry.second << "\t" << entry.first  << std::endl; break;
        }
    }
}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
