/* Module: vegas30k.dll
   Function: _SfVideoPlugin_ApplyFilterAuto@96
   Address: 01025af0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfVideoPlugin_ApplyFilterAuto_96
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              int param_5,undefined4 param_6,undefined4 param_7,int param_8,undefined4 param_9,
              undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
              undefined4 param_14,int param_15,int *param_16,undefined4 param_17,undefined4 param_18
              ,undefined4 param_19,undefined4 param_20,undefined4 param_21,undefined4 param_22,
              undefined4 param_23,undefined4 param_24)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int *piVar6;
  int *piStack_7c;
  int *local_78;
  int *local_74;
  undefined4 local_70;
  int *local_6c;
  int *local_68;
  int *local_64;
  int *local_60;
  int *local_5c [3];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 local_40 [16];
  undefined4 auStack_30 [2];
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
                    /* 0x25af0  1263  _SfVideoPlugin_ApplyFilterAuto@96 */
  local_68 = param_16;
  bVar5 = param_8 == 0;
  local_60 = *(int **)(param_15 + 0x14);
  piVar1 = *(int **)(param_15 + 0x10);
  local_78 = (int *)0x0;
  local_6c = (int *)0x0;
  local_74 = (int *)0x0;
  local_64 = (int *)0x0;
  local_5c[0] = (int *)0x0;
  local_70 = 0;
  FUN_010250b0(&local_50,param_3,param_1,param_19);
  if (!bVar5) {
    FUN_010250b0(local_40,param_10,param_8,param_19);
  }
  iVar2 = _SfGetPixelType_4(param_1);
  if (iVar2 == 0x20) {
    local_70 = 1;
  }
  if ((((local_68 == (int *)0x0) && (iVar2 = _SfVideoPlugin_CreateInstance_4(&local_68), iVar2 < 0))
      || (iVar2 = (**(code **)*local_68)(local_68,&DAT_011e64d8,&local_74), iVar2 < 0)) ||
     (iVar2 = (**(code **)*piVar1)(piVar1,&DAT_011e65a8,&local_64), iVar2 < 0)) {
    if (((piVar1 == (int *)0x0) ||
        (iVar2 = (**(code **)*piVar1)(piVar1,&DAT_011e64f8,local_5c), iVar2 < 0)) ||
       (iVar3 = FUN_01135a40(local_74,param_1,param_2,0,param_4,local_70,&local_78), iVar3 < 0))
    goto LAB_01025e22;
    local_70 = 0;
    iVar2 = (**(code **)*piVar1)(piVar1,&DAT_011e6978,&local_70);
    if (-1 < iVar2) {
      if (param_5 == 0) {
        local_64 = (int *)0x0;
        local_60 = (int *)0x3ff00000;
      }
      else {
        local_64 = *(int **)(param_5 + 0x10);
        local_60 = *(int **)(param_5 + 0x14);
      }
      piVar6 = local_60;
      (**(code **)(*piStack_7c + 0xc))(piStack_7c,param_17,param_18,param_6,param_7,local_64);
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    FUN_01025a30(piVar1,param_24);
    iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,0,0,&stack0xffffff7c,1,0);
    FUN_010251b0(piVar1);
    if (iVar2 < 0) goto LAB_01025e22;
    if (local_60 != (int *)0x0) {
      FUN_010251e0(local_60,param_15,param_6,param_7,param_20,param_21,param_22,param_23);
    }
    iVar2 = *piVar1;
    uVar4 = 0;
  }
  else {
    iVar2 = FUN_01135a40(local_74,param_1,param_2,0,param_4,local_70,&local_78);
    if (iVar2 < 0) goto LAB_01025e22;
    if (!bVar5) {
      iVar2 = FUN_01135a40(local_74,param_8,param_9,local_40,param_11,local_70,&local_6c);
    }
    if (iVar2 < 0) goto LAB_01025e22;
    uStack_28 = local_50;
    uStack_24 = uStack_4c;
    auStack_30[0] = 0;
    uStack_20 = 0;
    uStack_1c = 0;
    FUN_01025e90(local_78,param_5,param_6,param_7);
    if (!bVar5) {
      FUN_01025e90(local_6c,param_12,param_13,param_14);
    }
    FUN_01025a30(piVar1,param_24);
    iVar2 = (**(code **)(*piVar1 + 0x18))
                      (piVar1,~-(uint)bVar5 & (uint)&local_6c,!bVar5,&local_78,1,0);
    FUN_010251b0(piVar1);
    if (iVar2 < 0) goto LAB_01025e22;
    if (local_60 != (int *)0x0) {
      FUN_010251e0(local_60,param_15,param_6,param_7,param_20,param_21,param_22,param_23);
    }
    (**(code **)(*local_64 + 0x24))(local_64,(float)(double)CONCAT44(param_18,param_17));
    iVar2 = *piVar1;
    uVar4 = ~-(uint)bVar5 & (uint)auStack_30;
  }
  iVar2 = (**(code **)(iVar2 + 0x1c))(piVar1,0,0,uVar4);
LAB_01025e22:
  if (local_5c[0] != (int *)0x0) {
    (**(code **)(*local_5c[0] + 8))(local_5c[0]);
  }
  if (local_78 != (int *)0x0) {
    (**(code **)(*local_78 + 8))(local_78);
  }
  if (local_6c != (int *)0x0) {
    (**(code **)(*local_6c + 8))(local_6c);
  }
  if (local_64 != (int *)0x0) {
    (**(code **)(*local_64 + 8))(local_64);
  }
  if (local_74 != (int *)0x0) {
    (**(code **)(*local_74 + 8))(local_74);
  }
  if ((param_16 == (int *)0x0) && (local_68 != (int *)0x0)) {
    (**(code **)(*local_68 + 8))(local_68);
  }
  return iVar2;
}


