/* Module: vegas30k.dll
   Function: _SfVideoPlugin_ApplyTransition@120
   Address: 010262b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfVideoPlugin_ApplyTransition_120
              (undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
              undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
              undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
              undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
              undefined4 param_21,int param_22,int *param_23,double param_24,undefined4 param_25,
              undefined4 param_26,undefined4 param_27,undefined4 param_28,undefined4 param_29)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int *local_8c;
  int *local_88;
  int *local_84;
  int *local_80;
  int *local_7c;
  int *local_78;
  int local_74;
  undefined4 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 auStack_50 [2];
  undefined4 auStack_48 [17];
  int iStack_4;
  
                    /* 0x262b0  1265  _SfVideoPlugin_ApplyTransition@120 */
  local_84 = param_23;
  local_74 = *(int *)(param_22 + 0x14);
  piVar1 = *(int **)(param_22 + 0x10);
  local_8c = (int *)0x0;
  local_80 = (int *)0x0;
  local_7c = (int *)0x0;
  local_88 = (int *)0x0;
  local_78 = (int *)0x0;
  iVar2 = _SfGetPixelType_4(param_1);
  bVar6 = iVar2 == 0x20;
  if (((((local_84 != (int *)0x0) ||
        (iVar2 = _SfVideoPlugin_CreateInstance_4(&local_84), -1 < iVar2)) &&
       (iVar2 = (**(code **)*local_84)(local_84,&DAT_011e64d8,&local_88), -1 < iVar2)) &&
      ((iVar2 = (**(code **)*piVar1)(piVar1,&DAT_011e65a8,&local_78), -1 < iVar2 &&
       (iVar3 = FUN_01135a40(local_88,param_1,param_2,0,param_4,bVar6,&local_8c), -1 < iVar3)))) &&
     ((iVar3 = FUN_01135a40(local_88,param_8,param_9,param_10,param_11,bVar6,&local_80), -1 < iVar3
      && (iVar3 = FUN_01135a40(local_88,param_15,param_16,param_17,param_18,bVar6,&local_7c),
         -1 < iVar3)))) {
    uStack_70 = 0;
    if (param_3 == (undefined4 *)0x0) {
      uStack_68 = 0;
      uStack_64 = 0;
    }
    else {
      uStack_68 = *param_3;
      uStack_64 = param_3[1];
    }
    uStack_60 = 0;
    uStack_5c = 0;
    FUN_01025e90(local_8c,param_5,param_6,param_7);
    FUN_01025e90(local_80,param_12,param_13,param_14);
    FUN_01025e90(local_7c,param_19,param_20,param_21);
    FUN_01025a30(piVar1,param_29);
    iVar2 = (**(code **)(*piVar1 + 0x18))(piVar1,&local_80,2,&local_8c,1,0);
    FUN_010251b0(piVar1);
    if (-1 < iVar2) {
      if (local_74 != 0) {
        FUN_010251e0(local_74,param_22,param_6,param_7,param_25,param_26,param_27,param_28);
      }
      (**(code **)(*local_78 + 0x24))(local_78,(float)param_24);
      auStack_50[0] = 0;
      puVar4 = auStack_48 + 1;
      iVar2 = 4;
      do {
        puVar4[-1] = 0;
        *puVar4 = 1;
        puVar4 = puVar4 + 2;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      if (param_1 == (undefined4 *)0x0) {
        auStack_48[0] = 0;
        auStack_48[2] = 0;
        auStack_48[1] = *(undefined4 *)(iStack_4 + 4);
        auStack_48[3] = *(undefined4 *)(iStack_4 + 8);
      }
      else {
        auStack_48[2] = param_1[1];
        auStack_48[0] = *param_1;
        auStack_48[1] = param_1[2];
        auStack_48[3] = param_1[3];
      }
      iVar2 = (**(code **)(*piVar1 + 0x1c))(piVar1,0,auStack_50,&local_78);
      if ((-1 < iVar2) && (iVar3 = FUN_01135590(), iVar3 == 1)) {
        uVar8 = 3;
        uVar7 = 0;
        uVar5 = FUN_01134d60(0,param_10,param_11,3);
        iVar2 = _SfDibCopy_36(param_1,param_2,param_1,param_4,uVar5,uVar7,param_10,param_11,uVar8);
      }
    }
  }
  if (local_8c != (int *)0x0) {
    (**(code **)(*local_8c + 8))(local_8c);
  }
  if (local_80 != (int *)0x0) {
    (**(code **)(*local_80 + 8))(local_80);
  }
  if (local_7c != (int *)0x0) {
    (**(code **)(*local_7c + 8))(local_7c);
  }
  if (local_78 != (int *)0x0) {
    (**(code **)(*local_78 + 8))(local_78);
  }
  if (local_88 != (int *)0x0) {
    (**(code **)(*local_88 + 8))(local_88);
  }
  if ((param_23 == (int *)0x0) && (local_84 != (int *)0x0)) {
    (**(code **)(*local_84 + 8))(local_84);
  }
  return iVar2;
}


