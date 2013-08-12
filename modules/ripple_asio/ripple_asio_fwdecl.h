//------------------------------------------------------------------------------
/*
    Copyright (c) 2011-2013, OpenCoin, Inc.
*/
//==============================================================================

#ifndef RIPPLE_ASIO_FWDECL_H_INCLUDED
#define RIPPLE_ASIO_FWDECL_H_INCLUDED

/** Forward declarations for boost::asio.

    These allow the header material for boost::asio to be omitted for
    most translation units.
*/

namespace boost {

namespace asio {

class io_service;

namespace ssl {

class context;

}

}

}

#endif