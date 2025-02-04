#include <iostream>
#include <ranges>
#include <vector>
using std::vector;
using std::cout;
using std::endl;

auto main(int argc, char** argv) -> int {

    void* memory = operator new(sizeof(point));
    point* ptr = static_cast<point*>(memory);
    new (memory) point();

    ptr->print();
    vector<int> v{1,2,3,4,5};
    
    auto io = std::ranges::views::iota(0,5)

    std::print(sizeof(io));


    for (int i=0; i<5; ++i);
    for (const auto& i : std::ranges::views::iota(0,5));



for (const auto& item : io) cout << item << " ";    }
 
 
   return EXIT_SUCCESS;
}
