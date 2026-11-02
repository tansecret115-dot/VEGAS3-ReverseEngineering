/* Module: vegas30k.dll
   Function: cdrtoc_FillTrackLengths
   Address: 0109a480
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdrtoc_FillTrackLengths(struct _toc *) */

long cdrtoc_FillTrackLengths(_toc *param_1)

{
  uint uVar1;
  int iVar2;
  _track *p_Var3;
  _track *p_Var4;
  uint uVar5;
  
                    /* 0x9a480  611  ?cdrtoc_FillTrackLengths@@YGJPAU_toc@@@Z */
  if (param_1 == (_toc *)0x0) {
    return -0x7fffbffd;
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar2 = cdrtoc_GetTrackCount(param_1);
    if (iVar2 != 0) {
      uVar1 = iVar2 - 1;
      uVar5 = 0;
      if (uVar1 != 0) {
        do {
          p_Var3 = cdrtoc_GetTrack(param_1,uVar5);
          uVar5 = uVar5 + 1;
          p_Var4 = cdrtoc_GetTrack(param_1,uVar5);
          *(int *)(p_Var3 + 0x18) = *(int *)(p_Var4 + 0x14) - *(int *)(p_Var3 + 0x14);
        } while (uVar5 < uVar1);
      }
      p_Var3 = cdrtoc_GetTrack(param_1,uVar1);
      *(int *)(p_Var3 + 0x18) = *(int *)(param_1 + 0x1d8c) - *(int *)(p_Var3 + 0x14);
      return 0;
    }
    return 0;
  }
  return -0x7ff8ffa9;
}


