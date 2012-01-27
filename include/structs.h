#ifdef  _STRUCTS_H_
#define _STRUCTS_H_

struct seginfs_sb_fsver {
    uint16_t v_major;
    uint16_t v_minor;
}

struct seginfs_superblock {
    char            sb_x86_bootjump[4];
    struct seginfs_sb_fsver
                    sb_fs_version;
    uint32_t        sb_blksz;
    uint64_t        sb_freeblks;  /* free blocks */
    uint32_t        sb_resblks;   /* superuser reserved blocks */
    uint64_t        sb_itbl_off;  /* block offset for start of inode table */
    uint64_t        sb_etbl_off;  /* block offset for start of extents tbl */
}

struct seginfs_inode {

}

#endif
