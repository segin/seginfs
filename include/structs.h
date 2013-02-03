#ifdef  _STRUCTS_H_
#define _STRUCTS_H_

struct seginfs_superblock {
    char            sb_x86_bootjmp[4];  /* Jump to x86 bootstrap */
	char			sb_magic[8];  /* "seginfs\0" */
	uint16_t		sb_fs_majver; /* seginfs major version */
	uint16_t		sb_fs_minver; /* seginfs minor version */
    uint32_t        sb_blksz;	  /* block size in multiples of 512 bytes */
    uint64_t        sb_freeblks;  /* free blocks */
    uint32_t        sb_resblks;   /* superuser reserved blocks */
    uint64_t        sb_itbl_off;  /* block offset for start of inode table */
    uint64_t        sb_etbl_off;  /* block offset for start of extents tbl */
}

struct seginfs_inode {
	uint64_t		in_ino;
	uint32_t		in_mode;
	uint64_t		in_nlink;
	
	
}

#endif
