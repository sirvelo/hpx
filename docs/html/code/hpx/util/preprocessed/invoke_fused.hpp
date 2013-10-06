//  Copyright (c) 2007-2013 Hartmut Kaiser
//  Copyright (c) 2012-2013 Thomas Heller
//
//  Distributed under the Boost Software License, Version 1.0. (See accompanying
//  file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)

#if !defined(HPX_PREPROCESSED_UTIL_INVOKE_FUSED_HPP)
#define HPX_PREPROCESSED_UTIL_INVOKE_FUSED_HPP

#if HPX_FUNCTION_ARGUMENT_LIMIT  <= 5
#include <hpx/util/preprocessed/invoke_fused_5.hpp>
#elif HPX_FUNCTION_ARGUMENT_LIMIT <= 10
#include <hpx/util/preprocessed/invoke_fused_10.hpp>
#elif HPX_FUNCTION_ARGUMENT_LIMIT <= 15
#include <hpx/util/preprocessed/invoke_fused_15.hpp>
#elif HPX_FUNCTION_ARGUMENT_LIMIT <= 20
#include <hpx/util/preprocessed/invoke_fused_20.hpp>
/*
#elif HPX_FUNCTION_ARGUMENT_LIMIT <= 25
#include <hpx/util/preprocessed/invoke_fused_25.hpp>
#elif HPX_FUNCTION_ARGUMENT_LIMIT <= 30
#include <hpx/util/preprocessed/invoke_fused_30.hpp>
#elif HPX_FUNCTION_ARGUMENT_LIMIT <= 35
#include <hpx/util/preprocessed/invoke_fused_35.hpp>
#elif HPX_FUNCTION_ARGUMENT_LIMIT <= 40
#include <hpx/util/preprocessed/invoke_fused_40.hpp>
#elif HPX_FUNCTION_ARGUMENT_LIMIT <= 45
#include <hpx/util/preprocessed/invoke_fused_45.hpp>
#elif HPX_FUNCTION_ARGUMENT_LIMIT <= 50
#include <hpx/util/preprocessed/invoke_fused_50.hpp>
*/
#else
#error "HPX_FUNCTION_ARGUMENT_LIMIT out of bounds for preprocessed headers"
#endif

#endif
