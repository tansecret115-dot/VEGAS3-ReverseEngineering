/* Module: vegas30k.dll
   Function: Mixer_MIDISetInputThru
   Address: 01180b90
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_MIDISetInputThru(unsigned long) */

long Mixer_MIDISetInputThru(ulong param_1)

{
  long lVar1;
  
                    /* 0x180b90  209  ?Mixer_MIDISetInputThru@@YGJK@Z */
  lVar1 = 1;
  if (DAT_012b09c8 != (int *)0x0) {
    lVar1 = (**(code **)(*DAT_012b09c8 + 500))(DAT_012b09c8,param_1);
  }
  return lVar1;
}


