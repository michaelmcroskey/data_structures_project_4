// chained.cpp: Separate Chaining Map

#include "map.h"

#include <stdexcept>

// Methods --------------------------------------------------------------------

ChainedMap::ChainedMap(double load_factor, int size){
//    lfactor = load_factor;
//    tsize = size;
//    entries = new std::map<std::string, std::string>[tsize];
}

ChainedMap::~ChainedMap(){
    
}

void            ChainedMap::insert(const std::string &key, const std::string &value) {
//    n_items++;
//    
//    if (n_items >= tsize){
//        int new_size = 2*tsize;
//        resize(new_size);
//    } 
//    
//    int bucket = hfunc(key);
//    //int bucket = key % tsize;
//    	entries[bucket].insert(value);
}

const Entry     ChainedMap::search(const std::string &key) {
//    int bucket = hfunc(key);
//    //int bucket = key % tsize;
//    	return entries[bucket].count(key);
//    return NONE;
}

void            ChainedMap::dump(std::ostream &os, DumpFlag flag) {
    
}

void            ChainedMap::resize(const size_t new_size) {
//    // allocate new table of size new_size
//    std::map<std::string, std::string>[new_size] newtable;
//    
//    // copy all entries from old table to new table
//    for (auto entry : entries){
//        
//    }
//    
//    // deallocate old table
//    
}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
