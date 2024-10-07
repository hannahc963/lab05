#include <iostream>
#include "StringData.h"
#include <string>
#include <vector>
#include <chrono>

int linear_search(const std::vector<std::string>&container, const std::string& element) {
    for(int index=0; index<container.size();index++) {
        if(element==container[index]) {
            return index;
        }
    }
    return -1;
}

int binary_search(const std::vector<std::string>&container, const std::string& element) {
    int first=0;
    int last= container.size()-1;
    while(first<=last) {
        int index=(first+last)/2;
        if(container[index]<element) {
            first=index+1;
        } else if(container[index]>element) {
            last=index-1;
        } else {
            return index;
        }
    }
    return -1;
}

int main() {
    std::vector<std::string> dataset = getStringData();
    std::string searched = "not here";

    // linear search for not_here
    std::cout << "Linear search for "<<searched<<std::endl;
    auto begin_time = std::chrono::system_clock::now();
    std::cout << "Index: "<< linear_search(dataset,searched)<<std::endl;
    auto end_time = std::chrono::system_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - begin_time).count();
    std::cout << "Elapsed time: "<< elapsed << " milliseconds\n"<<std::endl;

    // binary search for not_here
    std::cout << "Binary search for "<<searched<<std::endl;
    begin_time = std::chrono::system_clock::now();
    std::cout << "Index: "<< binary_search(dataset,searched)<<std::endl;
    end_time = std::chrono::system_clock::now();
    elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - begin_time).count();
    std::cout << "Elapsed time: "<< elapsed << " milliseconds"<<std::endl;
    std::cout<<"\n----------------\n" <<std::endl;

    searched = "mzzzz";

    // linear search for mzzzz
    std::cout << "Linear search for "<<searched<<std::endl;
    begin_time = std::chrono::system_clock::now();
    std::cout << "Index: "<< linear_search(dataset,searched)<<std::endl;
    end_time = std::chrono::system_clock::now();
    elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - begin_time).count();
    std::cout << "Elapsed time: "<< elapsed << " milliseconds\n"<<std::endl;

    // binary search for mzzzz
    std::cout << "Binary search for "<<searched<<std::endl;
    begin_time = std::chrono::system_clock::now();
    std::cout << "Index: "<< binary_search(dataset,searched)<<std::endl;
    end_time = std::chrono::system_clock::now();
    elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - begin_time).count();
    std::cout << "Elapsed time: "<< elapsed << " milliseconds"<<std::endl;
    std::cout<<"\n----------------\n" <<std::endl;

    searched = "aaaaa";

    // linear search for aaaaa
    std::cout << "Linear search for "<<searched<<std::endl;
    begin_time = std::chrono::system_clock::now();
    std::cout << "Index: "<< linear_search(dataset,searched)<<std::endl;
    end_time = std::chrono::system_clock::now();
    elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - begin_time).count();
    std::cout << "Elapsed time: "<< elapsed << " milliseconds\n"<<std::endl;

    // binary search for aaaaa
    std::cout << "Binary search for"<<searched<<std::endl;
    begin_time = std::chrono::system_clock::now();
    std::cout << "Index: "<< binary_search(dataset,searched)<<std::endl;
    end_time = std::chrono::system_clock::now();
    elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - begin_time).count();
    std::cout << "Elapsed time: "<< elapsed << " milliseconds"<<std::endl;
    std::cout<<"\n----------------\n" <<std::endl;

    return 0;
}

