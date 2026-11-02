/* Module: vegas30k.dll
   Function: Mixer_RemoveMainBus
   Address: 0117daf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall Mixer_RemoveMainBus(struct ISFMixer *,unsigned long) */

long Mixer_RemoveMainBus(ISFMixer *param_1,ulong param_2)

{
  long lVar1;
  ISFMixer *pIVar2;
  int *piVar3;
  ISFMixer *pIVar4;
  ulong uStack_8;
  
                    /* 0x17daf0  218  ?Mixer_RemoveMainBus@@YGJPAUISFMixer@@K@Z */
  pIVar2 = param_1;
  if (param_1 == (ISFMixer *)0x0) {
    pIVar2 = DAT_012b09c8;
  }
  uStack_8 = param_2;
  param_1 = (ISFMixer *)0x0;
  pIVar4 = pIVar2;
  lVar1 = (**(code **)(*(int *)pIVar2 + 0x1e0))(pIVar2,&param_1);
  if (-1 < lVar1) {
    piVar3 = (int *)0x30;
    (**(code **)(iRam00000001 + 0x8c))(1,0x30,&uStack_8);
    lVar1 = (**(code **)(*(int *)pIVar2 + 0xd0))(pIVar2,pIVar4);
    if (-1 < lVar1) {
      (**(code **)(*(int *)pIVar2 + 0x14))(pIVar2);
      Mixer_UpdateAll();
    }
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return lVar1;
}


