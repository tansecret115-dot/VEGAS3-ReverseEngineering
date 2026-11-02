/* Module: vegas30k.dll
   Function: Mixer_SetMetronomeOnPreview
   Address: 0117e800
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_SetMetronomeOnPreview(int) */

long Mixer_SetMetronomeOnPreview(int param_1)

{
  long lVar1;
  
                    /* 0x17e800  235  ?Mixer_SetMetronomeOnPreview@@YGJH@Z */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0xc4))(DAT_012b09c8,param_1);
  return lVar1;
}


