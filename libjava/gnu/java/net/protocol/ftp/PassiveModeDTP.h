
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_net_protocol_ftp_PassiveModeDTP__
#define __gnu_java_net_protocol_ftp_PassiveModeDTP__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace net
      {
        namespace protocol
        {
          namespace ftp
          {
              class DTPInputStream;
              class DTPOutputStream;
              class PassiveModeDTP;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace net
    {
        class InetAddress;
        class Socket;
    }
  }
}

class gnu::java::net::protocol::ftp::PassiveModeDTP : public ::java::lang::Object
{

public: // actually package-private
  PassiveModeDTP(::java::lang::String *, jint, ::java::net::InetAddress *, jint, jint);
public:
  ::java::io::InputStream * getInputStream();
  ::java::io::OutputStream * getOutputStream();
  void setTransferMode(jint);
  void complete();
  jboolean abort();
  void transferComplete();
public: // actually package-private
  ::java::lang::String * __attribute__((aligned(__alignof__( ::java::lang::Object)))) address;
  jint port;
  ::java::net::Socket * socket;
  ::gnu::java::net::protocol::ftp::DTPInputStream * in;
  ::gnu::java::net::protocol::ftp::DTPOutputStream * out;
  jboolean completed;
  jboolean inProgress;
  jint transferMode;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_net_protocol_ftp_PassiveModeDTP__
