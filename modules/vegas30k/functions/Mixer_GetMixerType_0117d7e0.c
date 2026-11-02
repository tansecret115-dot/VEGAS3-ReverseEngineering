/* Module: vegas30k.dll
   Function: Mixer_GetMixerType
   Address: 0117d7e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* enum EMIXERTYPE __stdcall Mixer_GetMixerType(struct ISFMixer *) */

EMIXERTYPE Mixer_GetMixerType(ISFMixer *param_1)

{
  undefined4 local_4;
  
                    /* 0x17d7e0  184  ?Mixer_GetMixerType@@YG?AW4EMIXERTYPE@@PAUISFMixer@@@Z */
  local_4 = 7;
  if ((param_1 == (ISFMixer *)0x0) && (param_1 = DAT_012b09c8, DAT_012b09c8 == (ISFMixer *)0x0)) {
    return 7;
  }
  (**(code **)(*(int *)param_1 + 0x28))(param_1,&local_4);
  return (EMIXERTYPE)param_1;
}


