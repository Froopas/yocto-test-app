cmake_minimum_required(VERSION 3.22.1)

project(TestApp)

add_library(terminal src/terminal/terminal.cpp)

add_executable(${PROJECT_NAME} src/main.cpp)
target_link_directories(${PROJECT_NAME} PRIVATE ${CMAKE_CURRENT_BINARY_DIR}/)
target_link_libraries(${PROJECT_NAME} terminal)

install(TARGETS ${PROJECT_NAME} DESTINATION /usr/bin)