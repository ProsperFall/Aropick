#include <efi64.h>

#define EFI_IMAGE_MACHINE_IA32  0x014C
#define EFI_IMAGE_MACHINE_IA64  0x0200
#define EFI_IMAGE_MACHINE_EBC   0x0EBC
#define EFI_IMAGE_MACHINE_X64   0x8664
#define EFI_IMAGE_MACHINE_AARCH64   0xAA64

#define EFI_IMAGE_MACHINE_RISCV32   0x5032
#define EFI_IMAGE_MACHINE_RISCV64   0x5064
#define EFI_IMAGE_MACHINE_RISCV128  0x5128

#define EFI_IMAGE_MACHINE_LOONGARCH32   0x6232
#define EFI_IMAGE_MACHINE_LOONGARCH64   0x6264

typedef struct {
    u16 year;
    u8  month;
    u8  day;
    u8  hour;
    u8  min;
    u16 sec;
    u32 nasec;  //nano
    u16 tz; //time zone
    u16 dst;    //daylight saving time
} efi_time_t;

