//  Copyright (c) 2007-2012 Hartmut Kaiser
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(HPX_TRAITS_IS_FUTURE_RANGE_HPP)
#define HPX_TRAITS_IS_FUTURE_RANGE_HPP

#include <hpx/traits/is_future.hpp>

#include <boost/mpl/bool.hpp>
#include <boost/range/iterator_range.hpp>

#include <vector>

namespace hpx { namespace traits
{
    template <typename Range, typename Enable>
    struct is_future_range
      : boost::mpl::false_
    {};

    template <typename T>
    struct is_future_range<std::vector<T> >
      : is_future<T>
    {};

    template <typename Iterator>
    struct is_future_range<boost::iterator_range<Iterator> >
      : is_future<typename std::iterator_traits<Iterator>::value_type>
    {};
}}

#endif
