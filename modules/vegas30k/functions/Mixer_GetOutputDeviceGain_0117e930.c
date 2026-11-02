/* Module: vegas30k.dll
   Function: Mixer_GetOutputDeviceGain
   Address: 0117e930
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetOutputDeviceGain(unsigned long,long *) */

long Mixer_GetOutputDeviceGain(ulong param_1,long *param_2)

{
  long lVar1;
  
                    /* 0x17e930  190  ?Mixer_GetOutputDeviceGain@@YGJKPAJ@Z */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x44))(DAT_012b09c8,param_1,param_2);
  return lVar1;
}


