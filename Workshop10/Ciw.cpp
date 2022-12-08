#include "pch.h"
#include "Ciw.h"
#if __has_include("Ciw.g.cpp")
#include "Ciw.g.cpp"
#endif

using namespace winrt;
using namespace Windows::UI::Xaml;

namespace winrt::Workshop10::implementation
{
    Ciw::Ciw()
    {
        InitializeComponent();
    }

    int32_t Ciw::MyProperty()
    {
        throw hresult_not_implemented();
    }

    void Ciw::MyProperty(int32_t /* value */)
    {
        throw hresult_not_implemented();
    }

    void Ciw::ClickHandler(IInspectable const&, RoutedEventArgs const&)
    {
        Button().Content(box_value(L"Clicked"));
    }
}
