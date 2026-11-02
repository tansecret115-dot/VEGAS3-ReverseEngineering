/* Module: vegas30k.dll
   Function: Mixer_GetMetronomeOnPreview
   Address: 0117e820
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetMetronomeOnPreview(void) */

long Mixer_GetMetronomeOnPreview(void)

{
  long lVar1;
  
                    /* 0x17e820  183  ?Mixer_GetMetronomeOnPreview@@YGJXZ */
  lVar1 = (**(code **)(*DAT_012b09c8 + 200))(DAT_012b09c8);
  return lVar1;
}


