//
// detail/dev_poll_reactor_fwd.hpp
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2011 Christopher M. Kohlhoff (chris at kohlhoff dot com)
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#ifndef ASIO_DETAIL_DEV_POLL_REACTOR_FWD_HPP
#define ASIO_DETAIL_DEV_POLL_REACTOR_FWD_HPP

#if defined(_MSC_VER) && (_MSC_VER >= 1200)
# pragma once
#endif // defined(_MSC_VER) && (_MSC_VER >= 1200)

#include "RCF/external/asio/asio/detail/config.hpp"

#if defined(ASIO_HAS_DEV_POLL)

namespace asio {
namespace detail {

class dev_poll_reactor;

} // namespace detail
} // namespace asio

#endif // defined(ASIO_HAS_DEV_POLL)

#endif // ASIO_DETAIL_DEV_POLL_REACTOR_FWD_HPP
