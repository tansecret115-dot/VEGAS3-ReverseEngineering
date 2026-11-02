/* Module: vegas30k.dll
   Function: cdrtoc_AllocTrackList
   Address: 0109a220
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdrtoc_AllocTrackList(struct _tracklist *) */

long cdrtoc_AllocTrackList(_tracklist *param_1)

{
                    /* 0x9a220  609  ?cdrtoc_AllocTrackList@@YGJPAU_tracklist@@@Z */
  if (param_1 == (_tracklist *)0x0) {
    return -0x7fffbffd;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)param_1 == 0) {
    return 0;
  }
  *(_tracklist **)(param_1 + 4) = param_1 + 8;
  return (-(uint)(param_1 + 8 != (_tracklist *)0x0) & 0x7ff8fff2) + 0x8007000e;
}


