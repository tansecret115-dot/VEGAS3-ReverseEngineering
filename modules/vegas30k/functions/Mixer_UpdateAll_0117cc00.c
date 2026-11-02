/* Module: vegas30k.dll
   Function: Mixer_UpdateAll
   Address: 0117cc00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_UpdateAll(void) */

long Mixer_UpdateAll(void)

{
                    /* 0x17cc00  251  ?Mixer_UpdateAll@@YGJXZ */
  if (DAT_012b0afc != (code *)0x0) {
    (*DAT_012b0afc)(DAT_012b09c8,0x100,DAT_012b0b00,0,0,0xffffffff,0,0,0,0xffffffff,0xffffffff,0,0,0
                   );
  }
  return 0;
}


