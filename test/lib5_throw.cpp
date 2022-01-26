// Copyright 2018 Peter Dimov
//
// Distributed under the Boost Software License, Version 1.0.
//
// See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt

#include "lib5_throw.hpp"
#include <boost/throw_exception.hpp>

void lib5::f()
{
    BOOST_THROW_EXCEPTION( lib5::exception() );
}