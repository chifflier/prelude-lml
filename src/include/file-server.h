/*****
*
* Copyright (C) 1998 - 2004 Yoann Vandoorselaere <yoann@prelude-ids.org>
* All Rights Reserved
*
* This file is part of the Prelude program.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License as published by 
* the Free Software Foundation; either version 2, or (at your option)
* any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
*
* You should have received a copy of the GNU General Public License
* along with this program; see the file COPYING.  If not, write to
* the Free Software Foundation, 675 Mass Ave, Cambridge, MA 02139, USA.
*
*****/


int file_server_get_event_fd(void);

void file_server_set_batch_mode(void);

void file_server_set_ignore_metadata(void);

int file_server_wake_up(void);

int file_server_monitor_file(regex_list_t *rlist, lml_log_source_t *ls);

void file_server_start_monitoring(void);

unsigned int file_server_get_max_rotation_time_offset(void);

void file_server_set_max_rotation_time_offset(unsigned int val);

unsigned int file_server_get_max_rotation_size_offset(void);

void file_server_set_max_rotation_size_offset(unsigned int val);
