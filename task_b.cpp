#include <iostream>

int main() {
#ifdef local_machine
    std::string_view s {local_machine};
    std::cout << "RUNNING " << s << " ON LOCAL MACHINE\n";
    freopen("test_for_tasks", "r", stdin);
#endif
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << a + b + c << '\n';
    return 0;
}