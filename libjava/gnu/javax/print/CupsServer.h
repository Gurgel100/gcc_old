
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_CupsServer__
#define __gnu_javax_print_CupsServer__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace print
      {
          class CupsServer;
        namespace ipp
        {
            class IppPrintService;
        }
      }
    }
  }
  namespace java
  {
    namespace net
    {
        class URI;
    }
  }
}

class gnu::javax::print::CupsServer : public ::java::lang::Object
{

public:
  CupsServer(::java::lang::String *, ::java::lang::String *);
  CupsServer(::java::net::URI *, ::java::lang::String *, ::java::lang::String *);
  virtual ::gnu::javax::print::ipp::IppPrintService * getDefaultPrinter();
  virtual ::java::util::List * getAllPrinters();
  virtual ::java::util::List * getAllClasses();
private:
  ::java::net::URI * __attribute__((aligned(__alignof__( ::java::lang::Object)))) uri;
  ::java::lang::String * username;
  ::java::lang::String * password;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_print_CupsServer__
