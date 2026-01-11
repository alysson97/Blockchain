cmake_minimum_required(VERSION 3.14)

project(Blockchain)

set(CMAKE_CXX_STANDARD 17)

# --------- Dependências ----------
include(FetchContent)

# cpp-httplib
FetchContent_Declare(
  httplib
  GIT_REPOSITORY https://github.com/yhirose/cpp-httplib.git
  GIT_TAG v0.18.3 # Use the latest stable release
)
FetchContent_MakeAvailable(httplib)

# system-glitch/SHA256
FetchContent_Declare(
  sha256
  GIT_REPOSITORY https://github.com/System-Glitch/SHA256.git
  GIT_TAG master
)
FetchContent_MakeAvailable(sha256)


add_executable(Blockchain
    main.cpp
    Blockchain.cpp
    rest.cpp
)

target_include_directories(Blockchain PRIVATE headers ${sha256_SOURCE_DIR}/src ${sha256_SOURCE_DIR}/include)

target_link_libraries(Blockchain PRIVATE httplib sha256)

