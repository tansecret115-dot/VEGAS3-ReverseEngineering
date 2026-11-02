/* Module: vegas30k.dll
   Function: cdrtoc_Validate
   Address: 0109a500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdrtoc_Validate(struct _toc *) */

long cdrtoc_Validate(_toc *param_1)

{
  uint uVar1;
  _track *p_Var2;
  _track *p_Var3;
  uint uVar4;
  
                    /* 0x9a500  622  ?cdrtoc_Validate@@YGJPAU_toc@@@Z */
  if (param_1 == (_toc *)0x0) {
    return -0x7fffbffd;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return -0x7ff8ffa9;
  }
  uVar1 = cdrtoc_GetTrackCount(param_1);
  if (uVar1 == 0) {
    return -0x7ffb1f32;
  }
  if (uVar1 < 100) {
    uVar1 = uVar1 - 1;
    uVar4 = 0;
    if (uVar1 != 0) {
      do {
        p_Var2 = cdrtoc_GetTrack(param_1,uVar4);
        uVar4 = uVar4 + 1;
        p_Var3 = cdrtoc_GetTrack(param_1,uVar4);
        if (*(uint *)(p_Var3 + 0x14) <= *(uint *)(p_Var2 + 0x14)) {
          return -0x7ffb1f32;
        }
        *(uint *)(p_Var2 + 0x18) = *(uint *)(p_Var3 + 0x14) - *(uint *)(p_Var2 + 0x14);
      } while (uVar4 < uVar1);
    }
    p_Var2 = cdrtoc_GetTrack(param_1,uVar1);
    if (*(uint *)(param_1 + 0x1d8c) <= *(uint *)(p_Var2 + 0x14)) {
      return -0x7ffb1f32;
    }
    *(uint *)(p_Var2 + 0x18) = *(uint *)(param_1 + 0x1d8c) - *(uint *)(p_Var2 + 0x14);
    return 0;
  }
  return -0x7ffb1f32;
}


