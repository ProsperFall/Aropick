#include <types.h>
//TODO:
#define EFI_SUCCESS               0
#define EFI_LOAD_ERROR            ((1)|(1UL<<63))
#define EFI_INVALID_PARAMETER     ((2)|(1UL<<63))
#define EFI_UNSUPPORTED           ((3)|(1UL<<63))
#define EFI_BAD_BUFFER_SIZE       ((4)|(1UL<<63))
#define EFI_BUFFER_TOO_SMALL      ((5)|(1UL<<63))
#define EFI_NOT_READY             ((6)|(1UL<<63))
#define EFI_DEVICE_ERROR          ((7)|(1UL<<63))
#define EFI_WRITE_PROTECTED       ((8)|(1UL<<63))
#define EFI_OUT_OF_RESOURCES      ((9)|(1UL<<63))
#define EFI_VOLUME_CORRUPTED      ((10)|(1UL<<63))
#define EFI_VOLUME_FULL           ((11)|(1UL<<63))
#define EFI_NO_MEDIA              ((12)|(1UL<<63))
#define EFI_MEDIA_CHANGED         ((13)|(1UL<<63))
#define EFI_NOT_FOUND             ((14)|(1UL<<63))
#define EFI_ACCESS_DENIED         ((15)|(1UL<<63))
#define EFI_NO_RESPONSE           ((16)|(1UL<<63))
#define EFI_NO_MAPPING            ((17)|(1UL<<63))
#define EFI_TIMEOUT               ((18)|(1UL<<63))
#define EFI_NOT_STARTED           ((19)|(1UL<<63))
#define EFI_ALREADY_STARTED       ((20)|(1UL<<63))
#define EFI_ABORTED               ((21)|(1UL<<63))
#define EFI_ICMP_ERROR            ((22)|(1UL<<63))
#define EFI_TFTP_ERROR            ((23)|(1UL<<63))
#define EFI_PROTOCOL_ERROR        ((24)|(1UL<<63))
#define EFI_INCOMPATIBLE_VERSION  ((25)|(1UL<<63))
#define EFI_SECURITY_VIOLATION    ((26)|(1UL<<63))
#define EFI_CRC_ERROR             ((27)|(1UL<<63))
#define EFI_END_OF_MEDIA          ((28)|(1UL<<63))

#define EFI_END_OF_FILE           ((31)|(1UL<<63))
#define EFI_INVALID_LANGUAGE      ((32)|(1UL<<63))
#define EFI_COMPROMISED_DATA      ((33)|(1UL<<63))
#define EFI_IP_ADDRESS_CONFLICT   ((34)|(1UL<<63))
#define EFI_HTTP_ERROR            ((35)|(1UL<<63))

#define EFI_WARN_UNKNOWN_GLYPH     1UL
#define EFI_WARN_DELETE_FAILURE    2UL
#define EFI_WARN_WRITE_FAILURE     3UL
#define EFI_WARN_BUFFER_TOO_SMALL  4UL
#define EFI_WARN_STALE_DATA        5UL
#define EFI_WARN_FILE_SYSTEM       6UL
#define EFI_WARN_RESET_REQUIRED    7UL

#define EFI_SYSTEM_TABLE_SIGNATURE          ((u64)0x5453595320494249ULL)
#define EFI_2_100_SYSTEM_TABLE_REVISION     ((2<<16)|(100))
#define EFI_2_90_SYSTEM_TABLE_REVISION      ((2<<16)|(90))
#define EFI_2_80_SYSTEM_TABLE_REVISION      ((2<<16)|(80))
#define EFI_2_70_SYSTEM_TABLE_REVISION      ((2<<16)|(70))
#define EFI_2_60_SYSTEM_TABLE_REVISION      ((2<<16)|(60))
#define EFI_2_50_SYSTEM_TABLE_REVISION      ((2<<16)|(50))
#define EFI_2_40_SYSTEM_TABLE_REVISION      ((2<<16)|(40))
#define EFI_2_31_SYSTEM_TABLE_REVISION      ((2<<16)|(31))
#define EFI_2_30_SYSTEM_TABLE_REVISION      ((2<<16)|(30))
#define EFI_2_20_SYSTEM_TABLE_REVISION      ((2<<16)|(20))
#define EFI_2_10_SYSTEM_TABLE_REVISION      ((2<<16)|(10))
#define EFI_2_00_SYSTEM_TABLE_REVISION      ((2<<16)|(00))
#define EFI_1_10_SYSTEM_TABLE_REVISION      ((1<<16)|(10))
#define EFI_1_02_SYSTEM_TABLE_REVISION      ((1<<16)|(02))
#define EFI_SYSTEM_TABLE_REVISION EFI_2_100_SYSTEM_TABLE_REVISION
#define EFI_SPECIFICATION_VERSION EFI_SYSTEM_TABLE_REVISION

typedef enum {
    AllocateAnyPages,
    AllocateMaxAddress,
    AllocateAddress,
    MaxAllocateType
} efi_allocate_type;

typedef enum {
    EfiReservedMemoryType,
    EfiLoaderCode,
    EfiLoaderData,
    EfiBootServicesCode,
    EfiBootServicesData,
    EfiRuntimeServicesCode,
    EfiRuntimeServicesData,
    EfiConventionalMemory,
    EfiUnusableMemory,
    EfiACPIReclaimMemory,
    EfiACPIMemoryNVS,
    EfiMemoryMappedIO,
    EfiMemoryMappedIOPortSpace,
    EfiPalCode,
    EfiPersistentMemory,
    EfiUnacceptedMemoryType,
    EfiMaxMemoryType
} EFI_MEMORY_TYPE;

typedef u64 efi_status_t;

typedef guid_t efi_guid_t;

typedef void* efi_handle_t;
typedef void* efi_event_t;

typedef u64 efi_tpl_t;

typedef u64 efi_lba_t;
typedef u64 efi_phy_addr_t;
typedef u64 efi_vaddr_t;

typedef	struct {
	u64 signature;
	u32 revision;
	u32 headersize;
	u32 crc32;
	u32 reserved;
} efi_table_hdr_t;

typedef struct {
	efi_table_hdr_t hdr;
	u64 fw_vendor;
	u64 fw_revision;
	u64 con_in_handle;
	u64 con_in;
	u64 con_out_handle;
	u64 con_out;
	u64 stderr_handle;
	u64 stderr;
	u64 runtime;
	u64 boot_services;
	u64 nr_tables;
	u64 tables;
} efi_system_table_64_t;

//TODO  32 bits systable

typedef union {
    struct {
        u64 todo;       //TODO
    }; 
    efi_system_table_64_t accessor;
} efi_system_table_t;

