/* Routines to write a TRS-80 DOS "/cmd" file */
/* Copyright (c) 1996, Timothy Mann */

/* This software may be copied, modified, and used for any purpose
 * without fee, provided that (1) the above copyright notice is
 * retained, and (2) modified versions are clearly marked as having
 * been modified, with the modifier's name and the date included.  */

/* Last modified on Tue Dec 17 13:06:19 PST 1996 by mann */

extern void cmd_init();
extern void cmd_data(int address, int value);
extern void cmd_transfer_address(int address);
extern void cmd_end_of_file();
