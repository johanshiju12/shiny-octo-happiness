#pragma once

#include "pch.h"
#include "App.xaml.g.h"

namespace winrt::NceaHubApp::implementation
{
    struct App : AppT<App>
    {
        App();

        void OnLaunched(Microsoft::UI::Xaml::LaunchActivatedEventArgs const&);

    private:
        winrt::Microsoft::UI::Xaml::Window m_window{ nullptr };
    };
}

namespace winrt::NceaHubApp::factory_implementation
{
    struct App : AppT<App, winrt::NceaHubApp::implementation::App>
    {
    };
}
