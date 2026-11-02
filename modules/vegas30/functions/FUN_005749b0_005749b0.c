/* Module: vegas30.exe
   Function: FUN_005749b0
   Address: 005749b0
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_005749b0(void)

{
  int iVar1;
  char cVar2;
  long lVar3;
  int *unaff_EBP;
  long lVar4;
  int iVar5;
  ulong uVar6;
  ISFMixerIn *local_104;
  undefined1 auStack_100 [256];
  
  lVar4 = 0;
  local_104 = (ISFMixerIn *)0x0;
  lVar3 = Mixer_GetNumMainBuses((ISFMixer *)0x0);
  if (lVar3 != 0) {
    lVar4 = Mixer_GetMainBus(&local_104,0,(ISFMixer *)0x0);
    if ((-1 < lVar4) && (local_104 != (ISFMixerIn *)0x0)) {
      lVar4 = (**(code **)(*(int *)local_104 + 0x10))(local_104,"Master");
      (**(code **)(*unaff_EBP + 8))(unaff_EBP);
      local_104 = (ISFMixerIn *)0x0;
    }
    if (1 < lVar3) {
      iVar5 = 0x47;
      do {
        if (lVar4 < 0) {
          return lVar4;
        }
        lVar4 = Mixer_GetMainBus(&local_104,iVar5 - 0x46,(ISFMixer *)0x0);
        if ((-1 < lVar4) && (local_104 != (ISFMixerIn *)0x0)) {
          cVar2 = (char)iVar5;
          if (iVar5 + -0x47 < 0x1a) {
            cVar2 = cVar2 + -6;
          }
          SfPrintF(auStack_100,"Bus %c",(int)cVar2);
          lVar4 = (**(code **)(*(int *)local_104 + 0x10))(local_104,auStack_100);
          (**(code **)(*unaff_EBP + 8))(unaff_EBP);
          local_104 = (ISFMixerIn *)0x0;
        }
        iVar1 = iVar5 + -0x45;
        iVar5 = iVar5 + 1;
      } while (iVar1 < lVar3);
    }
    if (lVar4 < 0) {
      return lVar4;
    }
  }
  lVar3 = Mixer_NumBusTypePorts(4);
  uVar6 = 0;
  if (0 < lVar3) {
    do {
      if (lVar4 < 0) {
        return lVar4;
      }
      lVar4 = Mixer_GetDevice(&local_104,4,uVar6);
      if ((-1 < lVar4) && (local_104 != (ISFMixerIn *)0x0)) {
        SfPrintF(auStack_100,"FX %d",uVar6 + 1);
        lVar4 = (**(code **)(*(int *)local_104 + 0x10))(local_104,auStack_100);
        (**(code **)(*unaff_EBP + 8))(unaff_EBP);
        local_104 = (ISFMixerIn *)0x0;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < lVar3);
  }
  return lVar4;
}


