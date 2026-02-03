#include <sqlcipher/sqlite3.h>
#include <iostream>

int main() {
    std::cout << sqlite3_libversion() << '\n';
}
