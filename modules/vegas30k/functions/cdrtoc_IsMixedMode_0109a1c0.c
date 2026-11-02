/* Module: vegas30k.dll
   Function: cdrtoc_IsMixedMode
   Address: 0109a1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall cdrtoc_IsMixedMode(struct _toc *) */

int cdrtoc_IsMixedMode(_toc *param_1)

{
  byte bVar1;
  
                    /* 0x9a1c0  619  ?cdrtoc_IsMixedMode@@YGHPAU_toc@@@Z */
  bVar1 = FUN_0109a140(param_1);
  return (uint)((bVar1 & 3) == 3);
}


