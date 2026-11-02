/* Module: vegas30k.dll
   Function: Mixer_BusContainerCreate
   Address: 0117afa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_BusContainerCreate(struct IStream *,int,unsigned long) */

long Mixer_BusContainerCreate(IStream *param_1,int param_2,ulong param_3)

{
  ulong uVar1;
  long lVar2;
  int *unaff_ESI;
  ulong uVar3;
  ulong uVar4;
  uint unaff_retaddr;
  ISFMixerIn *local_4;
  
                    /* 0x17afa0  145  ?Mixer_BusContainerCreate@@YGJPAUIStream@@HK@Z */
  lVar2 = Mixer_NumBusTypePorts(1);
  uVar1 = param_3;
  uVar4 = lVar2 - 1;
  for (uVar3 = uVar4; -1 < (int)uVar3; uVar3 = uVar3 - 1) {
    Mixer_GetDevice(&local_4,1,uVar3);
    (**(code **)(*(int *)local_4 + 0x8c))(local_4,0x32,&param_3);
    if (uVar1 <= unaff_retaddr) {
      unaff_retaddr = unaff_retaddr + 1;
      (**(code **)(*unaff_ESI + 0x90))(unaff_ESI,0x32,&stack0x00000000);
    }
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  lVar2 = Mixer_InsertMainBus((ISFMixer *)0x0,uVar1);
  if (-1 < lVar2) {
    param_3 = 0;
    lVar2 = Mixer_GetDevice((ISFMixerIn **)&param_3,1,uVar1);
    if ((-1 < lVar2) && (param_3 != 0)) {
      Mixer_BusCreate(param_1,param_2,(ISFMixerIn *)param_3);
      (**(code **)(*(int *)param_3 + 8))(param_3);
    }
    return lVar2;
  }
  for (; -1 < (int)uVar4; uVar4 = uVar4 - 1) {
    Mixer_GetDevice((ISFMixerIn **)&param_2,1,uVar4);
    (**(code **)(*(int *)param_2 + 0x8c))(param_2,0x32,&param_3);
    if (uVar1 < unaff_retaddr) {
      unaff_retaddr = unaff_retaddr - 1;
      (**(code **)(*(int *)local_4 + 0x90))(local_4,0x32,&stack0x00000000);
    }
    (**(code **)(*(int *)local_4 + 8))(local_4);
  }
  return lVar2;
}


