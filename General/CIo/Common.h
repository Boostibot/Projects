#ifndef COMMON_H
#define COMMON_H

#include <memory>

//Operator readability
#ifndef NOT
#define NOT                     !
#endif

#ifndef REF
#define REF                     &
#endif

#ifndef RVALUE_REF
#define RVALUE_REF              &&
#endif

#ifndef MUST_OVERRIDE
#define MUST_OVERRIDE           0
#endif

#ifndef ADDRESS
#define ADDRESS(item)           (std::addressof(item))
#endif

#ifndef PTR
#define PTR                     *
#endif

#ifndef PTR_VAL
#define PTR_VAL(pointer)        (*pointer)
#endif

namespace CIo
{
    using byte  = uint8_t;

    using i8    = int8_t;
    using i16   = int16_t;
    using i32   = int32_t;
    using i64   = int64_t;
    using u8    = uint8_t;
    using u16   = uint16_t;
    using u32   = uint32_t;
    using u64   = uint64_t;

    using char8  = char;
    using char16 = char16_t;
    using char32 = char32_t;
    using charW  = wchar_t;
}

#endif // COMMON_H
