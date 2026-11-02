/* Module: vegas30k.dll
   Function: _SfVideoPlugin_ApplyFilterAutoCooked@108
   Address: 01025f00
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfVideoPlugin_ApplyFilterAutoCooked_108
              (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8,
              undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
              int *param_13,int param_14,undefined4 *param_15,undefined4 param_16,
              undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20,
              undefined4 param_21,undefined4 param_22,undefined4 param_23,undefined4 param_24,
              undefined4 param_25,undefined4 param_26)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_EBX;
  uint uVar3;
  int *unaff_EBP;
  int *unaff_ESI;
  bool bVar4;
  undefined4 unaff_retaddr;
  undefined4 *puStack_78;
  int **ppiStack_74;
  int *local_60;
  int *local_5c;
  int *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48 [4];
  undefined1 auStack_44 [12];
  undefined1 local_38 [4];
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int *piStack_14;
  undefined4 uStack_8;
  int iStack_4;
  
                    /* 0x25f00  1264  _SfVideoPlugin_ApplyFilterAutoCooked@108 */
  ppiStack_74 = (int **)param_26;
  puStack_78 = param_1;
  bVar4 = param_8 == (undefined4 *)0x0;
  local_60 = (int *)0x0;
  local_54 = 0;
  local_5c = (int *)0x0;
  local_50 = 0;
  local_4c = 0;
  local_58 = (int *)0x0;
  FUN_010250b0(local_48,param_3);
  if (!bVar4) {
    ppiStack_74 = (int **)param_26;
    puStack_78 = param_8;
    FUN_010250b0(local_38,param_10);
  }
  ppiStack_74 = (int **)param_1;
  puStack_78 = (undefined4 *)0x1025f6d;
  iVar1 = _SfGetPixelType_4();
  if (iVar1 == 0x20) {
    local_58 = (int *)0x1;
  }
  ppiStack_74 = &local_5c;
  puStack_78 = &DAT_011e64d8;
  iVar1 = (**(code **)*param_15)(param_15);
  if (iVar1 < 0) {
LAB_0102613b:
    if (param_13 == (int *)0x0) goto LAB_0102625e;
    iVar1 = (**(code **)*param_13)(param_13,&DAT_011e64f8,&local_58);
    if (iVar1 < 0) goto LAB_0102625e;
    iVar2 = FUN_01135a40(unaff_EBP,uStack_8,iStack_4,0,param_1,unaff_EBX,&stack0xffffff94);
    if (iVar2 < 0) goto LAB_0102625e;
    uStack_8 = 0;
    iVar1 = (**(code **)*param_13)(param_13,&DAT_011e6978,&uStack_8);
    if (-1 < iVar1) {
      (**(code **)(*piStack_14 + 0xc))
                (piStack_14,param_18,param_19,unaff_retaddr,param_1,*(undefined4 *)(iStack_4 + 0x10)
                 ,*(undefined4 *)(iStack_4 + 0x14));
      (**(code **)(*piStack_30 + 8))(piStack_30);
    }
    FUN_01025a30(param_13,param_21);
    iVar1 = (**(code **)(*param_13 + 0x18))(param_13,0,0,&puStack_78,1,0);
    FUN_010251b0(param_13);
    if (iVar1 < 0) goto LAB_0102625e;
    if (param_14 != 0) {
      FUN_010255a0(param_14,param_16,param_15,param_18,param_17,param_19,param_20);
    }
    iVar1 = *param_13;
    uVar3 = 0;
  }
  else {
    iVar1 = (**(code **)*param_13)(param_13,&DAT_011e65a8,&local_5c);
    if (iVar1 < 0) goto LAB_0102613b;
    iVar1 = FUN_01135a40(unaff_EBP,uStack_8,iStack_4,0,param_1,unaff_EBX,&stack0xffffff94);
    if (iVar1 < 0) goto LAB_0102625e;
    if (!bVar4) {
      iVar1 = FUN_01135a40(unaff_EBP,param_5,param_6,auStack_44,param_8,unaff_EBX,&local_60);
    }
    if (iVar1 < 0) goto LAB_0102625e;
    uStack_2c = local_54;
    uStack_28 = local_50;
    uStack_34 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    FUN_01025e90(unaff_ESI,param_2,param_3,param_4);
    if (!bVar4) {
      FUN_01025e90(local_60,param_9,param_10,param_11);
    }
    FUN_01025a30(param_13,param_24);
    iVar1 = (**(code **)(*param_13 + 0x18))
                      (param_13,~-(uint)bVar4 & (uint)&local_60,!bVar4,&stack0xffffff94,1,0);
    FUN_010251b0(param_13);
    if (iVar1 < 0) goto LAB_0102625e;
    if (param_14 != 0) {
      FUN_010255a0(param_14,param_16,param_15,param_18,param_17,param_19,param_20);
    }
    (**(code **)(*local_5c + 0x24))(local_5c,(float)(double)CONCAT44(param_22,param_21));
    iVar1 = *param_13;
    uVar3 = ~-(uint)bVar4 & (uint)&uStack_34;
  }
  iVar1 = (**(code **)(iVar1 + 0x1c))(param_13,0,0,uVar3);
LAB_0102625e:
  if (local_58 != (int *)0x0) {
    (**(code **)(*local_58 + 8))(local_58);
  }
  if (unaff_ESI != (int *)0x0) {
    (**(code **)(*unaff_ESI + 8))(unaff_ESI);
  }
  if (local_60 != (int *)0x0) {
    (**(code **)(*local_60 + 8))(local_60);
  }
  if (local_5c != (int *)0x0) {
    (**(code **)(*local_5c + 8))(local_5c);
  }
  if (unaff_EBP != (int *)0x0) {
    (**(code **)(*unaff_EBP + 8))(unaff_EBP);
  }
  return iVar1;
}


