/* Module: vegas30k.dll
   Function: Mixer_CleanUp
   Address: 0117cb90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_CleanUp(void) */

long Mixer_CleanUp(void)

{
                    /* 0x17cb90  155  ?Mixer_CleanUp@@YGJXZ */
  Mixer_Unprepare();
  if (DAT_012b09c8 != (int *)0x0) {
    (**(code **)(*DAT_012b09c8 + 8))(DAT_012b09c8);
  }
  DAT_012b09c8 = (int *)0x0;
  if (DAT_012b09c4 != (int *)0x0) {
    if (DAT_012b09c0 != 0) {
      if ((DAT_012b0830 & 0xf0000) == 0) {
        FUN_01182230(&DAT_012b0838);
      }
      FUN_01182550(&DAT_012b0838);
    }
    (**(code **)(*DAT_012b09c4 + 8))(DAT_012b09c4);
  }
  DAT_012b09c4 = (int *)0x0;
  return 0;
}


