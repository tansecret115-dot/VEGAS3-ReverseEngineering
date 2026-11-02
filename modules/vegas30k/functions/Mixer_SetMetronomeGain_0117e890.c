/* Module: vegas30k.dll
   Function: Mixer_SetMetronomeGain
   Address: 0117e890
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_SetMetronomeGain(double *) */

long Mixer_SetMetronomeGain(double *param_1)

{
  long lVar1;
  
                    /* 0x17e890  233  ?Mixer_SetMetronomeGain@@YGJPAN@Z */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0xbc))(DAT_012b09c8,param_1);
  return lVar1;
}


