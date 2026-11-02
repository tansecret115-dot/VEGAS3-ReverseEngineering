/* Module: vegas30k.dll
   Function: cdrtrack_FillBytesPerFrame
   Address: 01099fe0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdrtrack_FillBytesPerFrame(struct _track *) */

long cdrtrack_FillBytesPerFrame(_track *param_1)

{
                    /* 0x99fe0  623  ?cdrtrack_FillBytesPerFrame@@YGJPAU_track@@@Z */
  if (param_1 == (_track *)0x0) {
    return -0x7fffbffd;
  }
  if (((*(uint *)(param_1 + 8) & 4) != 0) && (*(int *)(param_1 + 0xc) == 1)) {
    *(undefined4 *)(param_1 + 0x48) = 0x800;
    return 0;
  }
  *(undefined4 *)(param_1 + 0x48) = 0x930;
  return 0;
}


