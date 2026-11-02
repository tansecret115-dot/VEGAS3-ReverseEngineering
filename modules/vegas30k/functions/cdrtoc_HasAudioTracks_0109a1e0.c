/* Module: vegas30k.dll
   Function: cdrtoc_HasAudioTracks
   Address: 0109a1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdrtoc_HasAudioTracks(struct _toc *) */

int cdrtoc_HasAudioTracks(_toc *param_1)

{
  byte bVar1;
  
                    /* 0x9a1e0  617  ?cdrtoc_HasAudioTracks@@YGHPAU_toc@@@Z */
  bVar1 = FUN_0109a140(param_1);
  return (uint)((bVar1 & 2) == 2);
}


