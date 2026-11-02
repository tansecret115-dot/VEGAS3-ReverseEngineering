/* Module: vegas30k.dll
   Function: Mixer_GetOutDevice
   Address: 0117d8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetOutDevice(struct ISFMixerOut * *,unsigned long,unsigned long) */

long Mixer_GetOutDevice(ISFMixerOut **param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  
                    /* 0x17d8a0  189  ?Mixer_GetOutDevice@@YGJPAPAUISFMixerOut@@KK@Z */
  *param_1 = (ISFMixerOut *)0x0;
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x1e4))(DAT_012b09c8,param_1,param_2,param_3);
  return lVar1;
}


