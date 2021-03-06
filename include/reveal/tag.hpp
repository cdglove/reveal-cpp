// *****************************************************************************
// 
// reveal/tag.hpp
//
// Tag type. Used in reflect function signatures to get ADL to work.
//
// Copyright Chris Glover 2016
//
// Distributed under the Boost Software License, Version 1.0.
// See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt
//
// ****************************************************************************
#pragma once
#ifndef REVEAL_TAG_HPP_
#define REVEAL_TAG_HPP_

namespace reveal {

// -----------------------------------------------------------------------------
// Tag type. Used in reflect function signatures to get ADL to work.
template <typename T>
struct tag
{
	typedef T type;
};

}

#endif // REVEAL_TAG_HPP_
