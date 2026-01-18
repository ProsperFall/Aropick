#include <types.h>
//TODO:
#define EFI_SUCCESS               0
#define EFI_LOAD_ERROR            
#define EFI_INVALID_PARAMETER     
#define EFI_UNSUPPORTED           
#define EFI_BAD_BUFFER_SIZE       
#define EFI_BUFFER_TOO_SMALL      
#define EFI_NOT_READY             
#define EFI_DEVICE_ERROR          
#define EFI_WRITE_PROTECTED       
#define EFI_OUT_OF_RESOURCES      
#define EFI_VOLUME_CORRUPTED      
#define EFI_VOLUME_FULL           
#define EFI_NO_MEDIA              
#define EFI_MEDIA_CHANGED         
#define EFI_NOT_FOUND             
#define EFI_ACCESS_DENIED         
#define EFI_NO_RESPONSE           
#define EFI_NO_MAPPING            
#define EFI_TIMEOUT               
#define EFI_NOT_STARTED           
#define EFI_ALREADY_STARTED       
#define EFI_ABORTED               
#define EFI_ICMP_ERROR            
#define EFI_TFTP_ERROR            
#define EFI_PROTOCOL_ERROR        
#define EFI_INCOMPATIBLE_VERSION  
#define EFI_SECURITY_VIOLATION    
#define EFI_CRC_ERROR             
#define EFI_END_OF_MEDIA          
#define EFI_END_OF_FILE           
#define EFI_INVALID_LANGUAGE      
#define EFI_COMPROMISED_DATA      
#define EFI_IP_ADDRESS_CONFLICT   
#define EFI_HTTP_ERROR            

#define EFI_WARN_UNKNOWN_GLYPH     
#define EFI_WARN_DELETE_FAILURE    
#define EFI_WARN_WRITE_FAILURE     
#define EFI_WARN_BUFFER_TOO_SMALL  
#define EFI_WARN_STALE_DATA        
#define EFI_WARN_FILE_SYSTEM       
#define EFI_WARN_RESET_REQUIRED    

typedef u64 efi_status_t;       //may 32

typedef guid efi_guid_t;

typedef void* efi_handle_t;
typedef void* efi_event_t;

typedef u64 efi_tpl_t;            //may 32

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

