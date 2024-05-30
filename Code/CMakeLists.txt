cmake_minimum_required(VERSION 3.5)

project(Quan_Li_Thu_Phi_Quoc_Lo_1A_Nhom2 VERSION 0.1 LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets )
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)
set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        mainwindow.h
        mainwindow.ui
)

if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Quan_Li_Thu_Phi_Quoc_Lo_1A_Nhom2
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
        giaodienchinh.h giaodienchinh.cpp giaodienchinh.ui
        dnhap.h dnhap.cpp dnhap.ui
        dki.h dki.cpp dki.ui
        taikhoan.h taikhoan.cpp
        nguoidung.h nguoidung.cpp
        giaodiennguoidung.h giaodiennguoidung.cpp giaodiennguoidung.ui
        taikhoannganhang.h taikhoannganhang.cpp
        noptien.h noptien.cpp noptien.ui
        danhsachtramthuphi.h danhsachtramthuphi.cpp
        giaodienthanhtoan.h giaodienthanhtoan.cpp giaodienthanhtoan.ui
        giaodienthanhtoan.h giaodienthanhtoan.cpp giaodienthanhtoan.ui
        lichsugiaodich.h lichsugiaodich.cpp lichsugiaodich.ui
        doimatkhau.h doimatkhau.cpp doimatkhau.ui
        quanlilichsu.h quanlilichsu.cpp quanlilichsu.ui
        quanlinguoidung.h quanlinguoidung.cpp
        lichsunguoidung.h lichsunguoidung.cpp lichsunguoidung.ui
        Thongkedoanhthu.h Thongkedoanhthu.cpp Thongkedoanhthu.ui
        danhthu.h danhthu.cpp
        phanhoi.h phanhoi.cpp phanhoi.ui
        homthu.h homthu.cpp homthu.ui
        hienthiykiien.h hienthiykiien.cpp hienthiykiien.ui


    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Quan_Li_Thu_Phi_Quoc_Lo_1A_Nhom2 APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Quan_Li_Thu_Phi_Quoc_Lo_1A_Nhom2 SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Quan_Li_Thu_Phi_Quoc_Lo_1A_Nhom2
            ${PROJECT_SOURCES}
        )
    endif()
endif()

target_link_libraries(Quan_Li_Thu_Phi_Quoc_Lo_1A_Nhom2 PRIVATE Qt${QT_VERSION_MAJOR}::Widgets )
# Qt for iOS sets MACOSX_BUNDLE_GUI_IDENTIFIER automatically since Qt 6.1.
# If you are developing for iOS or macOS you should consider setting an
# explicit, fixed bundle identifier manually though.
if(${QT_VERSION} VERSION_LESS 6.1.0)
  set(BUNDLE_ID_OPTION MACOSX_BUNDLE_GUI_IDENTIFIER com.example.Quan_Li_Thu_Phi_Quoc_Lo_1A_Nhom2)
endif()
set_target_properties(Quan_Li_Thu_Phi_Quoc_Lo_1A_Nhom2 PROPERTIES
    ${BUNDLE_ID_OPTION}
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

include(GNUInstallDirs)
install(TARGETS Quan_Li_Thu_Phi_Quoc_Lo_1A_Nhom2
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Quan_Li_Thu_Phi_Quoc_Lo_1A_Nhom2)
endif()
