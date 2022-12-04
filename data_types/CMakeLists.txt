set(DATA_TYPES_SOURCES
        "${CMAKE_CURRENT_SOURCE_DIR}/src/base_type.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/integer.cpp"
)


set(DATA_TYPES_INCLUDE
        "${CMAKE_CURRENT_SOURCE_DIR}/include/base_type.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/integer.h"
)

find_package(Qt5 COMPONENTS Widgets)

add_library(data_types
    ${DATA_TYPES_SOURCES} ${DATA_TYPES_INCLUDE})


target_include_directories(data_types PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")

target_link_libraries(data_types PUBLIC Qt5::Widgets)
