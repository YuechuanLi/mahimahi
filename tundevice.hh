/* -*-mode:c++; tab-width: 4; indent-tabs-mode: nil; c-basic-offset: 4 -*- */

#ifndef TUNDEVICE_HH
#define TUNDEVICE_HH

#include <string>

#include "file_descriptor.hh"

class TunDevice
{
private:
    FileDescriptor fd_;
public:
    TunDevice( const std::string & name, const std::string & addr, const std::string & dstaddr );

    const FileDescriptor & fd( void ) const { return fd_; }
};

#endif /* TUNDEVICE_HH */
