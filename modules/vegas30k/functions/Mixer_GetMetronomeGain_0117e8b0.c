/* Module: vegas30k.dll
   Function: Mixer_GetMetronomeGain
   Address: 0117e8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetMetronomeGain(double *) */

long Mixer_GetMetronomeGain(double *param_1)

{
  long lVar1;
  
                    /* 0x17e8b0  181  ?Mixer_GetMetronomeGain@@YGJPAN@Z */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0xc0))(DAT_012b09c8,param_1);
  return lVar1;
}


