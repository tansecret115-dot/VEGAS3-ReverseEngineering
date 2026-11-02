/* Module: vegas30k.dll
   Function: Mixer_GetNumMainBuses
   Address: 0117d8d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_GetNumMainBuses(struct ISFMixer *) */

long Mixer_GetNumMainBuses(ISFMixer *param_1)

{
  ISFMixer *pIVar1;
  
                    /* 0x17d8d0  188  ?Mixer_GetNumMainBuses@@YGJPAUISFMixer@@@Z */
  pIVar1 = param_1;
  if (param_1 == (ISFMixer *)0x0) {
    pIVar1 = DAT_012b09c8;
  }
  param_1 = (ISFMixer *)0x0;
  (**(code **)(*(int *)pIVar1 + 0x5c))(pIVar1);
  return (long)&param_1;
}


