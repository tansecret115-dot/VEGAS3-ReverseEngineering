/* Module: vegas30k.dll
   Function: Mixer_BusMuted
   Address: 0117e7c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* int __stdcall Mixer_BusMuted(unsigned long) */

int Mixer_BusMuted(ulong param_1)

{
  int iVar1;
  int *unaff_ESI;
  uint uVar2;
  ISFMixerIn *local_4;
  
                    /* 0x17e7c0  151  ?Mixer_BusMuted@@YGHK@Z */
  uVar2 = 0;
  local_4 = (ISFMixerIn *)0x0;
  Mixer_GetMainBus(&local_4,param_1,(ISFMixer *)0x0);
  if (local_4 != (ISFMixerIn *)0x0) {
    iVar1 = (**(code **)(*(int *)local_4 + 0x4c))(local_4);
    uVar2 = (uint)(iVar1 == 0);
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  return uVar2;
}


