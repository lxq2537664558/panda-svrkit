
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

#ifndef INCLUDE_RCF_HTTPSSERVERTRANSPORT_HPP
#define INCLUDE_RCF_HTTPSSERVERTRANSPORT_HPP

#include <RCF/TcpAsioServerTransport.hpp>

namespace RCF {

    class HttpsEndpoint;

    class HttpsServerTransport : public TcpAsioServerTransport
    {
    public:
        HttpsServerTransport(const HttpsEndpoint & httpsEndpoint);
        TransportType getTransportType();
    };

} // namespace RCF

#endif // ! INCLUDE_RCF_HTTPSSERVERTRANSPORT_HPP
