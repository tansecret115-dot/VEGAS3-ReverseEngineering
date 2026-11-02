/* Module: vegas30k.dll
   Function: Mixer_SetOutputDeviceGain
   Address: 0117e910
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_SetOutputDeviceGain(unsigned long,long *) */

long Mixer_SetOutputDeviceGain(ulong param_1,long *param_2)

{
  long lVar1;
  
                    /* 0x17e910  237  ?Mixer_SetOutputDeviceGain@@YGJKPAJ@Z */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x40))(DAT_012b09c8,param_1,param_2);
  return lVar1;
}


