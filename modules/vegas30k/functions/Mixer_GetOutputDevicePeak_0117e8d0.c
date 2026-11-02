/* Module: vegas30k.dll
   Function: Mixer_GetOutputDevicePeak
   Address: 0117e8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetOutputDevicePeak(unsigned long,float *,int *) */

long Mixer_GetOutputDevicePeak(ulong param_1,float *param_2,int *param_3)

{
  long lVar1;
  
                    /* 0x17e8d0  191  ?Mixer_GetOutputDevicePeak@@YGJKPAMPAH@Z */
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x38))(DAT_012b09c8,param_1,param_2,param_3);
  return lVar1;
}


