/* Module: vegas30k.dll
   Function: Mixer_GetOutputDeviceRange
   Address: 0117e8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetOutputDeviceRange(unsigned long,long *,long *) */

long Mixer_GetOutputDeviceRange(ulong param_1,long *param_2,long *param_3)

{
  long lVar1;
  
                    /* 0x17e8f0  192  ?Mixer_GetOutputDeviceRange@@YGJKPAJ0@Z */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x3c))(DAT_012b09c8,param_1,param_2,param_3);
  return lVar1;
}


