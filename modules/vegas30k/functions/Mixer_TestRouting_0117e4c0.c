/* Module: vegas30k.dll
   Function: Mixer_TestRouting
   Address: 0117e4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_TestRouting(unsigned long *,unsigned long) */

long Mixer_TestRouting(ulong *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int *unaff_ESI;
  ulong *puVar4;
  int iVar5;
  ISFMixerIn *pIStack_24;
  undefined4 uStack_20;
  ISFMixerIn local_14 [12];
  ulong *puStack_8;
  
                    /* 0x17e4c0  249  ?Mixer_TestRouting@@YGJPAKK@Z */
  iVar5 = 0;
  pIStack_24 = local_14;
  uStack_20 = 0;
  (**(code **)(*DAT_012b09c8 + 0x6c))(DAT_012b09c8);
  lVar1 = Mixer_NumBusTypePorts(1);
  pIStack_24 = (ISFMixerIn *)0x0;
  puVar4 = puStack_8;
  if (lVar1 == 0) {
    return 0;
  }
  do {
    lVar2 = Mixer_GetHardwareBus(&pIStack_24,*puVar4,(ISFMixer *)0x0);
    if (-1 < lVar2) {
      iVar3 = (**(code **)(*(int *)pIStack_24 + 0xbc))(pIStack_24,&uStack_20,1);
      if (iVar3 < 0) {
        iVar5 = iVar3;
      }
      (**(code **)(*unaff_ESI + 8))(unaff_ESI);
    }
    lVar1 = lVar1 + -1;
    puVar4 = puVar4 + 1;
  } while (lVar1 != 0);
  return iVar5;
}


