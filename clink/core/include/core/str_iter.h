// Copyright (c) 2015 Martin Ridgers
// License: http://opensource.org/licenses/MIT

#pragma once

#include "str.h"

//------------------------------------------------------------------------------
template <typename T>
class str_iter_impl
{
public:
                str_iter_impl(const T* s);
                str_iter_impl(const str_impl<T>& s);
    const T*    get_pointer() const;
    int         next();

private:
    const T*    m_ptr;
};

//------------------------------------------------------------------------------
template <typename T> str_iter_impl<T>::str_iter_impl(const T* s)
: m_ptr(s)
{
}

//------------------------------------------------------------------------------
template <typename T> str_iter_impl<T>::str_iter_impl(const str_impl<T>& s)
: m_ptr(s.c_str())
{
}

//------------------------------------------------------------------------------
template <typename T> const T* str_iter_impl<T>::get_pointer() const
{
    return m_ptr;
};

//------------------------------------------------------------------------------
typedef str_iter_impl<char>     str_iter;
typedef str_iter_impl<wchar_t>  wstr_iter;
