/* Module: vegas30k.dll
   Function: cdrtoc_FindTrack
   Address: 0109a100
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdrtoc_FindTrack(struct _toc *,unsigned long) */

int cdrtoc_FindTrack(_toc *param_1,ulong param_2)

{
  uint uVar1;
  _track *p_Var2;
  uint uVar3;
  
                    /* 0x9a100  612  ?cdrtoc_FindTrack@@YGHPAU_toc@@K@Z */
  uVar1 = cdrtoc_GetTrackCount(param_1);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      p_Var2 = cdrtoc_GetTrack(param_1,uVar3);
      if (param_2 == *(ulong *)p_Var2) {
        return uVar3;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return -1;
}


