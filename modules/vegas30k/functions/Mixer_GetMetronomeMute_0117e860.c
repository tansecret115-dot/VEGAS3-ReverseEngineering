/* Module: vegas30k.dll
   Function: Mixer_GetMetronomeMute
   Address: 0117e860
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetMetronomeMute(void) */

long Mixer_GetMetronomeMute(void)

{
  long lVar1;
  
                    /* 0x17e860  182  ?Mixer_GetMetronomeMute@@YGJXZ */
  if (DAT_012b09c8 != (int *)0x0) {
    lVar1 = (**(code **)(*DAT_012b09c8 + 0xb8))(DAT_012b09c8);
    return lVar1;
  }
  return (uint)(DAT_012b099c != 0);
}


