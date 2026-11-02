/* Module: vegas30k.dll
   Function: cdrtoc_GetTrackCount
   Address: 0109a0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdrtoc_GetTrackCount(struct _toc *) */

int cdrtoc_GetTrackCount(_toc *param_1)

{
                    /* 0x9a0b0  616  ?cdrtoc_GetTrackCount@@YGHPAU_toc@@@Z */
  if (param_1 == (_toc *)0x0) {
    return 0;
  }
  return *(int *)(param_1 + 0xc);
}


