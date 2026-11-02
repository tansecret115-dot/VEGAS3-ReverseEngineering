/* Module: vegas30k.dll
   Function: Mixer_SetPref
   Address: 011816d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_SetPref(unsigned long,void *) */

long Mixer_SetPref(ulong param_1,void *param_2)

{
  long lVar1;
  
                    /* 0x1816d0  238  ?Mixer_SetPref@@YGJKPAX@Z */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x88))(DAT_012b09c8,param_1,param_2);
  return lVar1;
}


