#include <efi.h>

static efi_system_table_t system_table = {
	.hdr = {
		.signature	= EFI_SYSTEM_TABLE_SIGNATURE,
		.revision	= 0,
		.headersize	= 0,
		.crc32		= 0,
		.reserved	= 0
	},
	.fw_vendor	    = INVALID_ADDRESS,
	.fw_revision	=  0,
	.con_in_handle	= INVALID_ADDRESS,
	.con_in		    = nullptr,
	.con_out_handle	= INVALID_ADDRESS,
	.con_out	    = nullptr,
	.stderr_handle	= INVALID_ADDRESS,
	.stderr		    = INVALID_ADDRESS,
	.runtime	    = INVALID_ADDRESS,
	.boottime	    = INVALID_ADDRESS,
	.nr_tables	    = 0,
	.tables		    = INVALID_ADDRESS
};

static void build_system_table() {
    system_table;
}

void xen_efi_init() {

}