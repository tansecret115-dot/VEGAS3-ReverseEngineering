/* Module: vegas30k.dll
   Function: Mixer_FlushAll
   Address: 0117e950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall Mixer_FlushAll(void) */

void Mixer_FlushAll(void)

{
                    /* 0x17e950  161  ?Mixer_FlushAll@@YGXXZ */
  if (DAT_012b09c8 != (int *)0x0) {
    (**(code **)(*DAT_012b09c8 + 0xd4))(DAT_012b09c8,1,0xffffffff,0,0,0xffffffff,0xffffffff);
  }
  return;
}


