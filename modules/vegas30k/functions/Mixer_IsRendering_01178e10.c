/* Module: vegas30k.dll
   Function: Mixer_IsRendering
   Address: 01178e10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall Mixer_IsRendering(void) */

int Mixer_IsRendering(void)

{
  int iVar1;
  uint local_4;
  
                    /* 0x178e10  202  ?Mixer_IsRendering@@YGHXZ */
  local_4 = 0;
  iVar1 = FUN_01183090(&local_4);
  if (iVar1 < 0) {
    return 0;
  }
  return local_4 >> 0xf & 1;
}


