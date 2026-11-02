/* Module: vegas30k.dll
   Function: cdrtoc_FillBytesPerFrame
   Address: 0109a420
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdrtoc_FillBytesPerFrame(struct _toc *) */

long cdrtoc_FillBytesPerFrame(_toc *param_1)

{
  uint uVar1;
  _track *p_Var2;
  uint uVar3;
  
                    /* 0x9a420  610  ?cdrtoc_FillBytesPerFrame@@YGJPAU_toc@@@Z */
  if (param_1 == (_toc *)0x0) {
    return -0x7fffbffd;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    return -0x7ff8ffa9;
  }
  uVar1 = cdrtoc_GetTrackCount(param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      p_Var2 = cdrtoc_GetTrack(param_1,uVar3);
      cdrtrack_FillBytesPerFrame(p_Var2);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}


