// chained.cpp: Separate Chaining Map

#include "map.h"

#include <stdexcept>

#define DEBUG false

//	table 				= array of map<key, value>
//	table[bucket] 		= map<key,value> 
//	table[bucket][key] 	= value;

// Methods --------------------------------------------------------------------

ChainedMap::ChainedMap(double load_factor_limit, size_t size){
    lfactor = load_factor_limit;
    tsize = size;
	n_items = 0;

	table = new std::map<std::string, std::string>[size];
	
	if (DEBUG) std::cout << "Constructor success" << std::endl;
}

ChainedMap::~ChainedMap(){
    delete [] table; 
}

void            ChainedMap::insert(const std::string &key, const std::string &value) {
    n_items++;
    
	double loadFactor = (double)n_items / tsize;
	if (loadFactor > lfactor)
		resize(2*tsize);
    
    size_t bucket = hfunc(key) % tsize;
    	table[bucket][key] = value;

	if (DEBUG) std::cout << "Inserted " << key << "::" << value << std::endl;
}

const Entry     ChainedMap::search(const std::string &key) {
    size_t bucket = hfunc(key) % tsize;
	if (table[bucket][key] != ""){
		if (DEBUG) std::cout << "Search success" << std::endl;
		return std::make_pair(key, table[bucket][key]);
	} else {
		if (DEBUG) std::cout << "Search fail" << std::endl;
		return NONE;
	}
}

void            ChainedMap::dump(std::ostream &os, DumpFlag flag) {
    for (size_t bucket = 0; bucket < tsize; bucket++){
		for (auto entry : table[bucket]){
			switch (flag) {
				case DUMP_KEY:          os << entry.first  << std::endl; break;
				case DUMP_VALUE:        os << entry.second << std::endl; break;
				case DUMP_KEY_VALUE:    os << entry.first  << "\t" << entry.second << std::endl; break;
				case DUMP_VALUE_KEY:    os << entry.second << "\t" << entry.first  << std::endl; break;
				if (DEBUG) std::cout << "Dump success" << std::endl;
			 }
		}
	}
}

void            ChainedMap::resize(const size_t new_size) {
	if (DEBUG) std::cout << "Resize function" << std::endl;

	// allocate new table of size new_size
	auto newtable = new std::map<std::string, std::string>[new_size];
	
	for (size_t bucket = 0; bucket < tsize; bucket++){
		for (auto entry : table[bucket]){
			int newbucket = hfunc(entry.first) % new_size;
			newtable[newbucket][entry.first] = entry.second;
		}
	}
	
    // copy all entries from old table to new table
	delete [] table;
	table = newtable;
	
	tsize = new_size;
}

// vim: set sts=4 sw=4 ts=8 expandtab ft=cpp:
