/* Module: sfcdi.dll
   Function: cdrtrack_FillBytesPerFrameTAO
   Address: 5bf01840
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdrtrack_FillBytesPerFrameTAO(struct _track *) */

long cdrtrack_FillBytesPerFrameTAO(_track *param_1)

{
  int iVar1;
  
                    /* 0x1840  208  ?cdrtrack_FillBytesPerFrameTAO@@YGJPAU_track@@@Z */
  if (param_1 == (_track *)0x0) {
    return -0x7fffbffd;
  }
  if ((*(uint *)(param_1 + 8) & 4) == 0) {
    *(undefined4 *)(param_1 + 0x48) = 0x930;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 1) {
      *(undefined4 *)(param_1 + 0x48) = 0x800;
      return 0;
    }
    if (iVar1 == 4) {
      *(undefined4 *)(param_1 + 0x48) = 0x91c;
      return 0;
    }
    if (iVar1 == 8) {
      *(undefined4 *)(param_1 + 0x48) = 0x91c;
      return 0;
    }
  }
  return 0;
}


