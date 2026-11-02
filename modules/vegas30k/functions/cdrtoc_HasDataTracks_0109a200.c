/* Module: vegas30k.dll
   Function: cdrtoc_HasDataTracks
   Address: 0109a200
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdrtoc_HasDataTracks(struct _toc *) */

int cdrtoc_HasDataTracks(_toc *param_1)

{
  byte bVar1;
  
                    /* 0x9a200  618  ?cdrtoc_HasDataTracks@@YGHPAU_toc@@@Z */
  bVar1 = FUN_0109a140(param_1);
  return (uint)((bVar1 & 1) == 1);
}


