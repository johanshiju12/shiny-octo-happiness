#pragma once

#include "pch.h"
#include "MainWindow.xaml.g.h"

namespace winrt::NceaHubApp::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();
    };
}

namespace winrt::NceaHubApp::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, winrt::NceaHubApp::implementation::MainWindow>
    {
    };
}
