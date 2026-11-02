/* Module: vegas30k.dll
   Function: Mixer_InsertMainBus
   Address: 0117d9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* long __stdcall Mixer_InsertMainBus(struct ISFMixer *,unsigned long) */

long Mixer_InsertMainBus(ISFMixer *param_1,ulong param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uStack_53c;
  undefined4 uStack_538;
  ISFMixer *pIStack_534;
  undefined1 *puStack_530;
  int iStack_52c;
  undefined1 *puStack_528;
  undefined4 uStack_524;
  undefined4 uStack_520;
  undefined1 local_510 [8];
  undefined1 local_508 [192];
  undefined4 auStack_448 [4];
  undefined1 auStack_438 [1016];
  undefined4 uStack_40;
  
                    /* 0x17d9e0  200  ?Mixer_InsertMainBus@@YGJPAUISFMixer@@K@Z */
  if ((param_1 == (ISFMixer *)0x0) && (param_1 = DAT_012b09c8, DAT_012b09c8 == (ISFMixer *)0x0)) {
    return -0x7ff8ffa9;
  }
  uStack_520 = 0x117da06;
  lVar2 = Mixer_Unprepare();
  if (-1 < lVar2) {
    uStack_520 = 0;
    puStack_528 = local_510;
    uStack_524 = 0;
    puStack_530 = local_508;
    iStack_52c = 0;
    uStack_538 = 0x117da24;
    pIStack_534 = param_1;
    (**(code **)(*(int *)param_1 + 0x24))();
    uStack_53c = &stack0xfffffae4;
    uStack_538 = 0x104;
    puVar5 = &uStack_524;
    (**(code **)(*(int *)param_1 + 0x2c))(param_1,puVar5);
    uStack_53c = (undefined1 *)0x0;
    lVar2 = (**(code **)(*DAT_012b09c4 + 0x4c))(DAT_012b09c4,pIStack_534);
    if (&iStack_52c != (int *)0x0) {
      iVar4 = (int)&uStack_53c + 1;
      (**(code **)(iStack_52c + 0x1c))(&iStack_52c,puVar5,auStack_438);
      piVar1 = (int *)auStack_448[iVar4];
      lVar2 = (**(code **)(*(int *)param_1 + 0xa0))(param_1,uStack_40);
      (**(code **)(*piVar1 + 8))(piVar1);
      if (-1 < lVar2) {
        (**(code **)(*(int *)param_1 + 0x14))(param_1);
        Mixer_UpdateAll();
      }
    }
    lVar3 = Mixer_Prepare();
    if (-1 < lVar2) {
      return lVar3;
    }
  }
  return lVar2;
}


