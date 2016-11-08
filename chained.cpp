// chained.cpp: Separate Chaining Map

#include "map.h"

#include <stdexcept>

#define DEBUG false

// Methods --------------------------------------------------------------------

ChainedMap::ChainedMap(double load_factor, int size){
//    lfactor = load_factor;
//    tsize = size;
//
//	table = new std::map<std::string, std::string>[size];
//	
//	StringHasher hfunc;
//	if (DEBUG) std::cout << "Constructor success" << std::endl;
}

ChainedMap::~ChainedMap(){
    delete [] table; 
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
//    	table[bucket][key] = value;
//	if (DEBUG) std::cout << "Insert success" << std::endl;
}

//	table 				= array of map<key, value>
//	table[bucket] 		= map<key,value> 
//	table[bucket][key] 	= value;

const Entry     ChainedMap::search(const std::string &key) {
//    int bucket = hfunc(key);
//	return std::make_pair(table[bucket].first, table[bucket][key]);
//	if (DEBUG) std::cout << "Search fail" << std::endl;
//    return NONE;
}

void            ChainedMap::dump(std::ostream &os, DumpFlag flag) {
//    for (auto bucket : table) {
//		for (auto entry : bucket){
//			switch (flag) {
//				case DUMP_KEY:          os << entry.first  << std::endl; break;
//				case DUMP_VALUE:        os << entry.second << std::endl; break;
//				case DUMP_KEY_VALUE:    os << entry.first  << "\t" << entry.second << std::endl; break;
//				case DUMP_VALUE_KEY:    os << entry.second << "\t" << entry.first  << std::endl; break;
//				if (DEBUG) std::cout << "Dump success" << std::endl;
//			 }
//		}
//    }
}

void            ChainedMap::resize(const size_t new_size) {
//	if (DEBUG) std::cout << "Resize function" << std::endl;
//    
//	// allocate new table of size new_size
//	new std::map<std::string, std::string> newtable[new_size];
//
//	for (auto bucket : table){
//		for (auto entry : bucket){
//			int newbucket = hfunc(entry);
//			newtable[newbucket][entry.first] = entry.second;
//		}
//	}
//	
//    // copy all entries from old table to new table
//	entries = newtable;
//	
//	tsize = new_size;
}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
