/*
 * Copyright (c) 2020 Gscienty <gaoxiaochuan@hotmail.com>
 *
 * Distributed under the MIT software license, see the accompanying
 * file LICENSE or https://www.opensource.org/licenses/mit-license.php .
 *
 */

#ifndef _FOLK_SONG_CONF_H_
#define _FOLK_SONG_CONF_H_

#include "fs_str.h"
#include "fs_file.h"
#include "fs_arr.h"

#define FS_CONF_FILE_DONE   -10001
#define FS_CONF_ERROR       -10002

#define FS_CONF_BLOCK_START 1
#define FS_CONF_BLOCK_END   2
#define FS_CONF_OK          0

typedef struct fs_conf_s fs_conf_t;
struct fs_conf_s {
    fs_arr_t *tokens;
    fs_file_t *file;
};

int fs_conf_parse(fs_conf_t *conf, fs_str_t *filename);

#endif
