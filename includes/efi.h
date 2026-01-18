#include <types.h>

[[gnu::always_inline]]
static inline void* cast_to_pointer(u64 addr) {
    return (void*)addr;
}

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
} efi_system_table_t;

