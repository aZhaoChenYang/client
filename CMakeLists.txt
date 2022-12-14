cmake_minimum_required(VERSION 3.23)
project(client)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

set(CMAKE_PREFIX_PATH "D:/Qt/6.4.1/msvc2019_64")

find_package(Qt6 COMPONENTS
        Core
        Gui
        Widgets
        Core5Compat
        Sql
        Network
        REQUIRED)

set(PROJECT_SOURCE
        main.cpp
        manageDialog.cpp
        manageDialog.h
        manageDialog.ui
        loginDialog.cpp
        loginDialog.h
        loginDialog.ui
        setDialog.cpp
        setDialog.h
        setDialog.ui
        struct.h)

add_executable(client ${PROJECT_SOURCE})
target_link_libraries(client
        Qt::Core
        Qt::Gui
        Qt::Widgets
        Qt::Sql
        Qt::Network
        Qt::Core5Compat
        )

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E make_directory
        "$<TARGET_FILE_DIR:${PROJECT_NAME}>/resource/")

foreach (RESOURCE xue.ico adminlog.png studentlog.png teacherlog.png)
    add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
            COMMAND ${CMAKE_COMMAND} -E copy_if_different
            "${CMAKE_SOURCE_DIR}/resource/${RESOURCE}"
            "$<TARGET_FILE_DIR:${PROJECT_NAME}>/resource/")
endforeach (RESOURCE)

add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
        COMMAND ${CMAKE_COMMAND} -E copy_if_different
        "${CMAKE_SOURCE_DIR}/config.ini"
        "$<TARGET_FILE_DIR:${PROJECT_NAME}>/")

if (WIN32)
    set(MYSQL_INSTALL_PATH "C:/Program Files/MySQL/MySQL Server 8.0")
    set(DEBUG_SUFFIX)
    if (MSVC AND CMAKE_BUILD_TYPE MATCHES "Debug")
        set(DEBUG_SUFFIX "d")
    endif ()
    set(QT_INSTALL_PATH "${CMAKE_PREFIX_PATH}")
    if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
        set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        if (NOT EXISTS "${QT_INSTALL_PATH}/bin")
            set(QT_INSTALL_PATH "${QT_INSTALL_PATH}/..")
        endif ()
    endif ()
    if (EXISTS "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E make_directory
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "${QT_INSTALL_PATH}/plugins/platforms/qwindows${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/platforms/")
    endif()
    if(EXISTS "${QT_INSTALL_PATH}/plugins/tls/qschannelbackend${DEBUG_SUFFIX}.dll")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E make_directory
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/tls/")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "${QT_INSTALL_PATH}/plugins/tls/qschannelbackend${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/tls/")
    endif ()
    if (EXISTS "${QT_INSTALL_PATH}/plugins/sqldrivers/qsqlmysql${DEBUG_SUFFIX}.dll")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E make_directory
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/sqldrivers/")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "${QT_INSTALL_PATH}/plugins/sqldrivers/qsqlmysql${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/plugins/sqldrivers/")
    endif()
    if (EXISTS "${MYSQL_INSTALL_PATH}/lib/libmysql.dll")
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy_if_different
                "${MYSQL_INSTALL_PATH}/lib/libmysql.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>/")
    endif()
    foreach (QT_LIB Core Gui Widgets Network Sql Core5Compat)
        add_custom_command(TARGET ${PROJECT_NAME} POST_BUILD
                COMMAND ${CMAKE_COMMAND} -E copy
                "${QT_INSTALL_PATH}/bin/Qt6${QT_LIB}${DEBUG_SUFFIX}.dll"
                "$<TARGET_FILE_DIR:${PROJECT_NAME}>")
    endforeach (QT_LIB)
endif ()
