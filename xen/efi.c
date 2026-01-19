#include <efi.h>

static efi_system_table_t system_table = {
	.hdr = {
		.signature	= EFI_SYSTEM_TABLE_SIGNATURE,
		.revision	= 0,
		.headersize	= 0,
		.crc32		= 0,
		.reserved	= 0
	},
	.fw_vendor	    =  EFI_INVALID_TABLE_ADDR,
	.fw_revision	=  0,
	.con_in_handle	= EFI_INVALID_TABLE_ADDR,
	.con_in		    = nullptr,
	.con_out_handle	= EFI_INVALID_TABLE_ADDR,
	.con_out	    = nullptr,
	.stderr_handle	= EFI_INVALID_TABLE_ADDR,
	.stderr		    = EFI_INVALID_TABLE_ADDR,
	.runtime	    = EFI_INVALID_TABLE_ADDR,
	.boottime	    = EFI_INVALID_TABLE_ADDR,
	.nr_tables	    = 0,
	.tables		    = EFI_INVALID_TABLE_ADDR
};

static void build_system_table() {
    system_table;
}

void xen_efi_init() {

}