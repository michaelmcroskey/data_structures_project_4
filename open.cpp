// open.cpp: Open Addressing Map

#include "map.h"

#include <stdexcept>

#define DEBUG false

// Methods --------------------------------------------------------------------

OpenMap::OpenMap(double load_factor, size_t size){
    lfactor = load_factor;
    tsize = size;
    n_items = 0;
    table = new Entry[tsize];
    for(size_t i=0;i<tsize;i++)
        table[i] = NONE;   


    if (DEBUG) std::cout << "Constructor success" << std::endl;
    
}

OpenMap::~OpenMap(){
    delete [] table;
}

void            OpenMap::insert(const std::string &key, const std::string &value) {
    n_items++;
    
    if (n_items >= tsize)
        resize(2*tsize);

    double loadFactor = (double)n_items / tsize;
    if (loadFactor > lfactor)
        resize(2*tsize);
    
    size_t bucket = locate(key);
    table[bucket].first = key;
    table[bucket].second = value;

    if (DEBUG) std::cout << "Inserted " << key << "::" << value << std::endl;
}

const Entry     OpenMap::search(const std::string &key) {

    if (DEBUG) {
        if(table[locate(key)]==NONE) std::cout <<  key << " not found.\n";
            else std::cout << key << " found.\n";
    }

    return table[locate(key)];

}

void            OpenMap::dump(std::ostream &os, DumpFlag flag) {
    for (size_t i=0;i<tsize;i++)
        if(table[i] != NONE)
            switch (flag) {
                case DUMP_KEY:          os << table[i].first  << std::endl; break;
                case DUMP_VALUE:        os << table[i].second << std::endl; break;
                case DUMP_KEY_VALUE:    os << table[i].first  << "\t" << table[i].second << std::endl; break;
                case DUMP_VALUE_KEY:    os << table[i].second << "\t" << table[i].first  << std::endl; break;
            }
}

size_t          OpenMap::locate(const std::string &key) {
    int bucket = hfunc2(key) % tsize;

    for(size_t i = 0;i<tsize;i++) {
        // find empty space or matching key
        if( table[bucket]==NONE || table[bucket].first==key)
            return bucket;

        bucket++;
        bucket %= tsize;
    }

    // no empty space found, resize
    resize(tsize*2);

    return locate(key);
}

void            OpenMap::resize(const size_t new_size) {
    if (DEBUG) std::cout << "Resize function" << std::endl;

    size_t old_size = tsize;
    tsize = new_size;
    Entry* oldTable = table;

    // allocate new table of size new_size
    table = new Entry[tsize];
    n_items=0;

    for(size_t i = 0; i < tsize; i++)
        table[i] = NONE;
    
    for (size_t bucket = 0; bucket < old_size; bucket++)
        if(oldTable[bucket] != NONE)
            insert(oldTable[bucket].first, oldTable[bucket].second);
    
    // deallocate old
    delete [] oldTable;
    
    tsize = new_size;
}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
