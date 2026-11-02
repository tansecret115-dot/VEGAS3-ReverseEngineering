/* Module: vegas30k.dll
   Function: Mixer_CanAddFXBus
   Address: 011816b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_CanAddFXBus(void) */

long Mixer_CanAddFXBus(void)

{
  long lVar1;
  
                    /* 0x1816b0  153  ?Mixer_CanAddFXBus@@YGJXZ */
  lVar1 = Mixer_NumBusTypePorts(4);
  return (uint)(0x1f < lVar1);
}


