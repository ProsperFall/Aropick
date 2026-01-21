#include <llp64.h>
typedef __s8 s8;
typedef __u8 u8;
typedef __s16 s16;
typedef __u16 u16;
typedef __s32 s32;
typedef __u32 u32;
typedef __s64 s64;
typedef __u64 u64;

typedef s8* string_t;
typedef s16* wstring_t;

typedef struct {
  u32    data1;
  u16    data2;
  u16    data3;
  u16    data4[8];
} guid_t;

typedef struct {
  u8  addr[4];
} ipv4_addr_t;


typedef struct {
  u8  addr[16];
} ipv6_addr_t;

typedef struct {
  u8  addr[32];
} mac_addr_t;
