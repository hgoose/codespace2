#include <iostream>
#include <ranges>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

const int MAX_LOG = 20;
int log[MAX_LOG];

auto main(int argc, char** argv) -> int {

    void* memory = operator new(sizeof(point));
    point* ptr = static_cast<point*>(memory);
    new (memory) point();

    ptr->print();
    vector<int> v{1,2,3,4,5};
    
    auto io = std::ranges::views::iota(0,5)



    for (int i=0; i<5; ++i);
    for (const auto& i : std::ranges::views::iota(0,5));


    for (int i = 2; i < 19; ++i) {
        log[i] = log[i/2] + 1;
    }

    cout << "add some shit" << endl;

cannot open source file "ranges". Please run the 'Select IntelliSense Configuration...' command to locate your system headers.    


for (const auto& item : io) cout << item << " ";    }
 
 
   return EXIT_SUCCESS;
}
