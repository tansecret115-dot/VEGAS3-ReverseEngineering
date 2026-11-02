/* Module: vegas30k.dll
   Function: Mixer_FlushBus
   Address: 0117e970
   Source: Ghidra pseudocode (Stage 10 batch) */


/* void __stdcall Mixer_FlushBus(unsigned long,__int64,__int64) */

void Mixer_FlushBus(ulong param_1,__int64 param_2,__int64 param_3)

{
                    /* 0x17e970  162  ?Mixer_FlushBus@@YGXK_J0@Z */
  if (DAT_012b09c8 != (int *)0x0) {
    (**(code **)(*DAT_012b09c8 + 0xd4))(DAT_012b09c8,1,param_1);
  }
  return;
}


