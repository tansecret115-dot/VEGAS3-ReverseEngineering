/* Module: vegas30k.dll
   Function: cdrtoc_FreeTrackList
   Address: 0109a280
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdrtoc_FreeTrackList(struct _tracklist *) */

long cdrtoc_FreeTrackList(_tracklist *param_1)

{
  uint uVar1;
  _indexlist *p_Var2;
  
                    /* 0x9a280  614  ?cdrtoc_FreeTrackList@@YGJPAU_tracklist@@@Z */
  if (param_1 == (_tracklist *)0x0) {
    return -0x7fffbffd;
  }
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = 0;
    if (*(int *)param_1 != 0) {
      p_Var2 = (_indexlist *)(*(int *)(param_1 + 4) + 0x40);
      do {
        cdrtoc_FreeIndexList(p_Var2);
        p_Var2 = p_Var2 + 0x4c;
        uVar1 = uVar1 + 1;
      } while (uVar1 < *(uint *)param_1);
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)param_1 = 0;
    return 0;
  }
  return -0x7fffbffd;
}


