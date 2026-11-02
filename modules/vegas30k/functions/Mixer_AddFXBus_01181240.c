/* Module: vegas30k.dll
   Function: Mixer_AddFXBus
   Address: 01181240
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_AddFXBus(struct ISFMixer *,unsigned long,unsigned long) */

long Mixer_AddFXBus(ISFMixer *param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  
                    /* 0x181240  142  ?Mixer_AddFXBus@@YGJPAUISFMixer@@KK@Z */
  if (param_1 == (ISFMixer *)0x0) {
    param_1 = DAT_012b09c8;
  }
  iVar1 = (**(code **)(*(int *)param_1 + 0x94))(param_1,param_3,param_2);
  if (-1 < iVar1) {
    (**(code **)(*(int *)param_1 + 0x14))(param_1);
    Mixer_UpdateAll();
  }
  return iVar1;
}


