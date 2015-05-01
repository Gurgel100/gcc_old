
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_java_awt_font_opentype_GlyphNamer__
#define __gnu_java_awt_font_opentype_GlyphNamer__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace java
    {
      namespace awt
      {
        namespace font
        {
          namespace opentype
          {
              class GlyphNamer;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace nio
    {
        class ByteBuffer;
        class CharBuffer;
        class IntBuffer;
    }
  }
}

class gnu::java::awt::font::opentype::GlyphNamer : public ::java::lang::Object
{

  GlyphNamer(jint, ::java::nio::ByteBuffer *, ::java::nio::ByteBuffer *);
public:
  static ::gnu::java::awt::font::opentype::GlyphNamer * forTables(jint, ::java::nio::ByteBuffer *, ::java::nio::ByteBuffer *);
public: // actually package-private
  ::java::lang::String * getGlyphName(jint);
private:
  void readZapf(jint);
  void readPost();
  static ::java::lang::String * getAGLFNName(jchar);
  static ::java::lang::String * getGlyphName(JArray< jchar > *);
  ::java::nio::ByteBuffer * __attribute__((aligned(__alignof__( ::java::lang::Object)))) postTable;
  ::java::nio::ByteBuffer * zapfTable;
  ::java::nio::IntBuffer * zapfOffsets;
  jint zapfExtraInfo;
  jint postFormat;
  JArray< ::java::lang::String * > * glyphNames;
  ::java::nio::CharBuffer * glyphCharacterCodes;
  static JArray< ::java::lang::String * > * STANDARD_POSTSCRIPT_GLYPH_NAMES;
  static ::java::lang::String * AGLFN_GLYPHS;
  static ::java::lang::String * AGLFN_NAME_OFFSET;
  static ::java::lang::String * AGLFN_NAMES;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_java_awt_font_opentype_GlyphNamer__
