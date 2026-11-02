/* Module: vegas30k.dll
   Function: Mixer_GetValidFXPortAssigmentName
   Address: 01181620
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetValidFXPortAssigmentName(char *,unsigned long,unsigned long,struct
   ISFMixer *) */

long Mixer_GetValidFXPortAssigmentName(char *param_1,ulong param_2,ulong param_3,ISFMixer *param_4)

{
  long lVar1;
  ISFMixerIn *local_4;
  
                    /* 0x181620  197  ?Mixer_GetValidFXPortAssigmentName@@YGJPADKKPAUISFMixer@@@Z */
  local_4 = (ISFMixerIn *)0x0;
  lVar1 = Mixer_GetValidFXPortAssigment(&local_4,param_3,param_4);
  if (lVar1 == 0) {
    (**(code **)(*(int *)local_4 + 0xc))(local_4,param_1,param_2);
    (**(code **)(*(int *)param_1 + 8))(param_1);
  }
  return lVar1;
}


