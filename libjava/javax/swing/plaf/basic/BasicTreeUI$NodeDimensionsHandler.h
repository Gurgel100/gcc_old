
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_plaf_basic_BasicTreeUI$NodeDimensionsHandler__
#define __javax_swing_plaf_basic_BasicTreeUI$NodeDimensionsHandler__

#pragma interface

#include <javax/swing/tree/AbstractLayoutCache$NodeDimensions.h>
extern "Java"
{
  namespace java
  {
    namespace awt
    {
        class Rectangle;
    }
  }
  namespace javax
  {
    namespace swing
    {
      namespace plaf
      {
        namespace basic
        {
            class BasicTreeUI;
            class BasicTreeUI$NodeDimensionsHandler;
        }
      }
    }
  }
}

class javax::swing::plaf::basic::BasicTreeUI$NodeDimensionsHandler : public ::javax::swing::tree::AbstractLayoutCache$NodeDimensions
{

public:
  BasicTreeUI$NodeDimensionsHandler(::javax::swing::plaf::basic::BasicTreeUI *);
  virtual ::java::awt::Rectangle * getNodeDimensions(::java::lang::Object *, jint, jint, jboolean, ::java::awt::Rectangle *);
public: // actually protected
  virtual jint getRowX(jint, jint);
public: // actually package-private
  ::javax::swing::plaf::basic::BasicTreeUI * __attribute__((aligned(__alignof__( ::javax::swing::tree::AbstractLayoutCache$NodeDimensions)))) this$0;
public:
  static ::java::lang::Class class$;
};

#endif // __javax_swing_plaf_basic_BasicTreeUI$NodeDimensionsHandler__