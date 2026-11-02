/* Module: vegas30k.dll
   Function: cdrtoc_ReAllocTrackList
   Address: 0109a260
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall cdrtoc_ReAllocTrackList(struct _tracklist *) */

long cdrtoc_ReAllocTrackList(_tracklist *param_1)

{
                    /* 0x9a260  621  ?cdrtoc_ReAllocTrackList@@YGJPAU_tracklist@@@Z */
  if (param_1 == (_tracklist *)0x0) {
    return -0x7fffbffd;
  }
  *(_tracklist **)(param_1 + 4) = param_1 + 8;
  return 0;
}


