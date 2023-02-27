#include <iostream>

int main() {
#ifdef local_machine
    std::string_view s {local_machine};
    std::cout << "RUNNING " << s << " ON LOCAL MACHINE\n";
    freopen("test_for_tasks", "r", stdin);
#endif
    return 0;
}