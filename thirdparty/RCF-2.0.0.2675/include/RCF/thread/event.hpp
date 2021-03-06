
//******************************************************************************
// RCF - Remote Call Framework
//
// Copyright (c) 2005 - 2012, Delta V Software. All rights reserved.
// http://www.deltavsoft.com
//
// RCF is distributed under dual licenses - closed source or GPL.
// Consult your particular license for conditions of use.
//
// If you have not purchased a commercial license, you are using RCF 
// under GPL terms.
//
// Version: 2.0
// Contact: support <at> deltavsoft.com 
//
//******************************************************************************

//
// detail/event.hpp
// ~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2011 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef RCF_DETAIL_EVENT_HPP
#define RCF_DETAIL_EVENT_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)

#if 0
# include "null_event.hpp"
#elif defined(BOOST_WINDOWS)
# include <RCF/thread/win_event.hpp>
#elif defined(BOOST_HAS_PTHREADS)
# include <RCF/thread/posix_event.hpp>
#else
# error Only Windows and POSIX are supported!
#endif

namespace RCF {
namespace detail {

#if 0
typedef null_event event;
#elif defined(BOOST_WINDOWS)
typedef win_event event;
#elif defined(BOOST_HAS_PTHREADS)
typedef posix_event event;
#endif

} // namespace detail
} // namespace RCF

#endif // RCF_DETAIL_EVENT_HPP
