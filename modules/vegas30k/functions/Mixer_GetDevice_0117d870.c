/* Module: vegas30k.dll
   Function: Mixer_GetDevice
   Address: 0117d870
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetDevice(struct ISFMixerIn * *,unsigned long,unsigned long) */

long Mixer_GetDevice(ISFMixerIn **param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  
                    /* 0x17d870  166  ?Mixer_GetDevice@@YGJPAPAUISFMixerIn@@KK@Z */
  *param_1 = (ISFMixerIn *)0x0;
  lVar1 = (**(code **)(*DAT_012b09c8 + 0x1e0))(DAT_012b09c8,param_1,param_2,param_3);
  return lVar1;
}


