/* Module: vegas30k.dll
   Function: FUN_01042130
   Address: 01042130
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_01042130(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  bool bVar5;
  ISfTrkGraph *local_40;
  int *local_3c;
  int *local_38;
  undefined4 local_34 [2];
  int local_2c;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined1 *local_1c;
  void *local_14;
  undefined *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_011dd168;
  puStack_10 = &DAT_011d81dc;
  local_14 = ExceptionList;
  local_1c = &stack0xffffffb4;
  local_3c = (int *)0x0;
  local_24 = 10000000;
  local_20 = 0;
  local_34[0] = 1;
  iVar2 = 4;
  bVar5 = true;
  piVar4 = &DAT_011dab90;
  piVar3 = (int *)register0x00000010;
  do {
    piVar3 = piVar3 + 1;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar5 = *piVar3 == *piVar4;
    piVar4 = piVar4 + 1;
  } while (bVar5);
  if (bVar5) {
    return 0x8000ffff;
  }
  ExceptionList = &local_14;
  uVar1 = SfMixer_CreateTrackGraph(&local_40);
  if (-1 < (int)uVar1) {
    iVar2 = _SfAudio_CreateGraphObject_4(&local_3c);
    if (-1 < iVar2) {
      iVar2 = (**(code **)*local_3c)(local_3c,&DAT_011f0eb0,&local_38);
      if (iVar2 < 0) {
        (**(code **)(*local_3c + 8))(local_3c);
      }
      else {
        (**(code **)(*local_38 + 0x20))(local_38);
        (**(code **)(*local_38 + 8))(local_38);
        (**(code **)(*local_3c + 0x6c))(local_3c,1,local_34);
        (**(code **)(*local_3c + 0x6c))(local_3c,0,&local_24);
        local_2c = (**(code **)(*local_3c + 0x40))(local_3c,0,&LAB_01041fa0,local_40);
        (**(code **)(*local_3c + 0x44))(local_3c,0);
        local_8 = 0;
        iVar2 = (**(code **)(*local_3c + 0x88))(local_3c,param_1,param_2,param_3,param_4,local_28,0)
        ;
        local_2c = iVar2;
        if (iVar2 < 0) {
          (**(code **)(*local_3c + 8))(local_3c);
          local_8 = 0xffffffff;
        }
        else {
          iVar2 = (**(code **)(*(int *)local_40 + 0x10))(local_40,local_3c);
          local_2c = iVar2;
          if (iVar2 < 0) {
            (**(code **)(*local_3c + 8))(local_3c);
            local_8 = 0xffffffff;
          }
          else {
            (**(code **)(*local_3c + 8))(local_3c);
            iVar2 = (**(code **)(*(int *)local_40 + 0x2c))(local_40);
            local_8 = 0xffffffff;
            local_2c = iVar2;
          }
        }
      }
    }
    (**(code **)(*(int *)local_40 + 0x10))(local_40,0);
    (**(code **)(*(int *)local_40 + 8))(local_40);
    uVar1 = (uint)(iVar2 == 0);
  }
  ExceptionList = local_14;
  return uVar1;
}


