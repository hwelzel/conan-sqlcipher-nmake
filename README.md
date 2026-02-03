Run from the top:

$ cmake -B build -S src -DCMAKE_PROJECT_TOP_LEVEL_INCLUDES=<path_to>/conan_provider.cmake -DCMAKE_BUILD_TYPE=Release -DCONAN_INSTALL_ARGS="--build=sqlcipher/4.6.1"
