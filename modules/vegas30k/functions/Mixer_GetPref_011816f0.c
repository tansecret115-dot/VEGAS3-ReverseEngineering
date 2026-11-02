/* Module: vegas30k.dll
   Function: Mixer_GetPref
   Address: 011816f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetPref(unsigned long,void *) */

long Mixer_GetPref(ulong param_1,void *param_2)

{
  long lVar1;
  
                    /* 0x1816f0  193  ?Mixer_GetPref@@YGJKPAX@Z */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x84))(DAT_012b09c8,param_1,param_2);
  return lVar1;
}


