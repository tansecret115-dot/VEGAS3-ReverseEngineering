/* Module: vegas30k.dll
   Function: Mixer_Reset
   Address: 0117cd80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_Reset(void) */

long Mixer_Reset(void)

{
  long lVar1;
  int iVar2;
  
                    /* 0x17cd80  219  ?Mixer_Reset@@YGJXZ */
  lVar1 = -0x7fff0001;
  if (DAT_012b09c8 != 0) {
    iVar2 = Mixer_IsPlayPrepared();
    if (iVar2 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = Mixer_Unprepare();
      if (-1 < lVar1) {
        lVar1 = Mixer_Prepare();
        return lVar1;
      }
    }
  }
  return lVar1;
}


