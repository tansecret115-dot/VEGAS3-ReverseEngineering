/* Module: vegas30k.dll
   Function: Mixer_RemoveFXBus
   Address: 01181280
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* long __stdcall Mixer_RemoveFXBus(struct ISFMixer *,unsigned long,int) */

long Mixer_RemoveFXBus(ISFMixer *param_1,ulong param_2,int param_3)

{
  long lVar1;
  ISFMixer *pIVar2;
  int *piVar3;
  ISFMixer *pIVar4;
  ulong uStack_8;
  
                    /* 0x181280  217  ?Mixer_RemoveFXBus@@YGJPAUISFMixer@@KH@Z */
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
    (**(code **)(_DAT_00000004 + 0x8c))(4,0x30,&uStack_8);
    lVar1 = (**(code **)(*(int *)pIVar2 + 0xd0))(pIVar2,pIVar4);
    if (-1 < lVar1) {
      FUN_011833d0(pIVar2,4);
      (**(code **)(*(int *)pIVar2 + 0x14))(pIVar2);
      Mixer_UpdateAll();
    }
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return lVar1;
}


