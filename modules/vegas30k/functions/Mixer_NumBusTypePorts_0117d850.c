/* Module: vegas30k.dll
   Function: Mixer_NumBusTypePorts
   Address: 0117d850
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_NumBusTypePorts(unsigned long) */

long Mixer_NumBusTypePorts(ulong param_1)

{
  long lVar1;
  
                    /* 0x17d850  211  ?Mixer_NumBusTypePorts@@YGJK@Z */
  if (DAT_012b09c8 == (int *)0x0) {
    return -1;
  }
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x1f0))(DAT_012b09c8,param_1);
  return lVar1;
}


