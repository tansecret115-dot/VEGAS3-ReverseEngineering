/* Module: vegas30k.dll
   Function: Mixer_IsPlayPrepared
   Address: 011830c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall Mixer_IsPlayPrepared(void) */

int Mixer_IsPlayPrepared(void)

{
  int iVar1;
  uint local_4;
  
                    /* 0x1830c0  201  ?Mixer_IsPlayPrepared@@YGHXZ */
  local_4 = 0;
  iVar1 = FUN_01183090(&local_4);
  if (iVar1 < 0) {
    return 0;
  }
  return (uint)((local_4 & 0x221) != 0);
}


