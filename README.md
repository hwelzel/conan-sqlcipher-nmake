Setup VS env for cmake

$ vcvarsall x64

Configure poiting to local conan_provider.cmake and forcing the build of sqlcipher to trigger the error

$ cmake -B build -S src -G Ninja -DCMAKE_PROJECT_TOP_LEVEL_INCLUDES=<path_to>/conan_provider.cmake -DCMAKE_BUILD_TYPE=Release -DCONAN_INSTALL_ARGS="--build=sqlcipher/4.6.1"
