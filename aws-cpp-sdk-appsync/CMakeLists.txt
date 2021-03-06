add_project(aws-cpp-sdk-appsync "C++ SDK for the AWS appsync service" aws-cpp-sdk-core)

file(GLOB AWS_APPSYNC_HEADERS
    "include/aws/appsync/*.h"
)

file(GLOB AWS_APPSYNC_MODEL_HEADERS
    "include/aws/appsync/model/*.h"
)

file(GLOB AWS_APPSYNC_SOURCE
    "source/*.cpp"
)

file(GLOB AWS_APPSYNC_MODEL_SOURCE
    "source/model/*.cpp"
)

file(GLOB APPSYNC_UNIFIED_HEADERS
    ${AWS_APPSYNC_HEADERS}
    ${AWS_APPSYNC_MODEL_HEADERS}
)

file(GLOB APPSYNC_UNITY_SRC
    ${AWS_APPSYNC_SOURCE}
    ${AWS_APPSYNC_MODEL_SOURCE}
)

if(ENABLE_UNITY_BUILD)
    enable_unity_build("APPSYNC" APPSYNC_UNITY_SRC)
endif()

file(GLOB APPSYNC_SRC
    ${APPSYNC_UNIFIED_HEADERS}
    ${APPSYNC_UNITY_SRC}
)

if(WIN32)
    #if we are compiling for visual studio, create a sane directory tree.
    if(MSVC)
        source_group("Header Files\\aws\\appsync" FILES ${AWS_APPSYNC_HEADERS})
        source_group("Header Files\\aws\\appsync\\model" FILES ${AWS_APPSYNC_MODEL_HEADERS})
        source_group("Source Files" FILES ${AWS_APPSYNC_SOURCE})
        source_group("Source Files\\model" FILES ${AWS_APPSYNC_MODEL_SOURCE})
    endif(MSVC)
endif()

set(APPSYNC_INCLUDES
    "${CMAKE_CURRENT_SOURCE_DIR}/include/"
)

add_library(${PROJECT_NAME} ${LIBTYPE} ${APPSYNC_SRC})
add_library(AWS::${PROJECT_NAME} ALIAS ${PROJECT_NAME})

if(USE_WINDOWS_DLL_SEMANTICS AND BUILD_SHARED_LIBS)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "AWS_APPSYNC_EXPORTS")
endif()

target_include_directories(${PROJECT_NAME} PUBLIC
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>)

target_link_libraries(${PROJECT_NAME} ${PROJECT_LIBS})


setup_install()

install (FILES ${AWS_APPSYNC_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/appsync)
install (FILES ${AWS_APPSYNC_MODEL_HEADERS} DESTINATION ${INCLUDE_DIRECTORY}/aws/appsync/model)

if(PLATFORM_WINDOWS AND MSVC)
    install (FILES nuget/${PROJECT_NAME}.autopkg DESTINATION nuget)
endif()

do_packaging()


