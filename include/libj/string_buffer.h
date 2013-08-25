// Copyright (c) 2012 Plenluno All rights reserved.

#ifndef LIBJ_STRING_BUFFER_H_
#define LIBJ_STRING_BUFFER_H_

#include <libj/mutable.h>
#include <libj/string.h>

namespace libj {

class StringBuffer : LIBJ_MUTABLE(StringBuffer)
 public:
    static Ptr create();

    virtual Size length() const = 0;

    virtual Char charAt(Size index) const = 0;

    virtual Ptr append(const Value& val) = 0;

    virtual Ptr appendChar(Char c) = 0;

    virtual Ptr appendStr(const char* str) = 0;

    virtual Ptr appendStr(const Char* str) = 0;

    virtual Boolean setCharAt(Size index, Char c) = 0;

    virtual const Char* data() const = 0;
};

}  // namespace libj

#endif  // LIBJ_STRING_BUFFER_H_
