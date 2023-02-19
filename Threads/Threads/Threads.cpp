#include <iostream>
#include <thread>


static bool is_finished = false;

void DoWork()
{
    using namespace std::literals::chrono_literals;
    while (!is_finished)
    {
        std::cout << "Working ...\n";
        std::this_thread::sleep_for(1s);
    }
}




int main()
{
    std::thread worker(DoWork);

    std::cin.get();
    is_finished = true;

    worker.join();
    std::cout << "Finished." << std::endl;

    std::cin.get();


    
}

