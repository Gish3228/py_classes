set(DATA_TYPES_SOURCES
        "${CMAKE_CURRENT_SOURCE_DIR}/src/base_type.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/integer.cpp"
        "${CMAKE_CURRENT_SOURCE_DIR}/src/float.cpp"
)


set(DATA_TYPES_INCLUDE
        "${CMAKE_CURRENT_SOURCE_DIR}/include/base_type.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/integer.h"
        "${CMAKE_CURRENT_SOURCE_DIR}/include/float.h"
)


add_library(data_types
    ${DATA_TYPES_SOURCES} ${DATA_TYPES_INCLUDE})


target_include_directories(data_types PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include")
