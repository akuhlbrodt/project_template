#include "module2.h"

namespace template_project
{
    namespace app_module2
    {
        int RunModule2([[maybe_unused]] int a, [[maybe_unused]] int b)
        {
            std::cout << "Module 2 is running" << std::endl;
            return 0;
        }
    }
}