cmake_minimum_required(VERSION 3.16)

project(linkedlisit_searching LANGUAGES C)

add_executable(linkedlisit_searching main.c)

include(GNUInstallDirs)
install(TARGETS linkedlisit_searching
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
