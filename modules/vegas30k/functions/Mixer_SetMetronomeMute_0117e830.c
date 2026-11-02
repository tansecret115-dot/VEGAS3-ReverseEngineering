/* Module: vegas30k.dll
   Function: Mixer_SetMetronomeMute
   Address: 0117e830
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_SetMetronomeMute(int) */

long Mixer_SetMetronomeMute(int param_1)

{
                    /* 0x17e830  234  ?Mixer_SetMetronomeMute@@YGJH@Z */
  DAT_012b099c = (uint)(param_1 == 0);
  if (DAT_012b09c8 != (int *)0x0) {
    (**(code **)(*DAT_012b09c8 + 0xb4))(DAT_012b09c8,param_1);
  }
  return 0;
}


