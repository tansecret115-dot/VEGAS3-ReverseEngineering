/* Module: vegas30k.dll
   Function: cdrtoc_GetTrack
   Address: 0109a0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* struct _track * __stdcall cdrtoc_GetTrack(struct _toc *,unsigned int) */

_track * cdrtoc_GetTrack(_toc *param_1,uint param_2)

{
                    /* 0x9a0d0  615  ?cdrtoc_GetTrack@@YGPAU_track@@PAU_toc@@I@Z */
  if ((param_1 != (_toc *)0x0) && (*(int *)(param_1 + 0x10) != 0)) {
    if (param_2 < *(uint *)(param_1 + 0xc)) {
      return (_track *)(*(int *)(param_1 + 0x10) + param_2 * 0x4c);
    }
  }
  return (_track *)0x0;
}


