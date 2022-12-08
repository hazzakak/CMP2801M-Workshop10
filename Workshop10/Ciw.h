#pragma once

#include "Ciw.g.h"

namespace winrt::Workshop10::implementation
{
    struct Ciw : CiwT<Ciw>
    {
        Ciw();

        int32_t MyProperty();
        void MyProperty(int32_t value);

        void ClickHandler(Windows::Foundation::IInspectable const& sender, Windows::UI::Xaml::RoutedEventArgs const& args);
    };
}

namespace winrt::Workshop10::factory_implementation
{
    struct Ciw : CiwT<Ciw, implementation::Ciw>
    {
    };
}
