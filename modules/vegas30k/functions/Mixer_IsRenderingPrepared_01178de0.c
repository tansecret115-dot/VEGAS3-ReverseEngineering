/* Module: vegas30k.dll
   Function: Mixer_IsRenderingPrepared
   Address: 01178de0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall Mixer_IsRenderingPrepared(void) */

int Mixer_IsRenderingPrepared(void)

{
  int iVar1;
  uint local_4;
  
                    /* 0x178de0  203  ?Mixer_IsRenderingPrepared@@YGHXZ */
  local_4 = 0;
  iVar1 = FUN_01183090(&local_4);
  if (iVar1 < 0) {
    return 0;
  }
  return local_4 >> 0xe & 1;
}


