/* Module: vegas30.exe
   Function: FUN_0050d1d0
   Address: 0050d1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050d1d0(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
  
  param_2[3] = 0x191;
  FUN_0053eb50(*(undefined4 *)(param_1 + 0x90),param_2);
  FUN_00538410(*(undefined4 *)(param_1 + 0x90),0,0);
  FUN_00538900(*(int *)(param_1 + 0x90) + 0xe80,0,0xffffffff,0xffffffff,0xffffffff,0xffffffff);
  FUN_0050bd30(param_2);
  if (*param_2 == 1) {
    iVar1 = param_2[1];
    FUN_005b83b0(DAT_0064b138,1);
    iVar4 = iVar1 + 0x144;
    *(int *)(param_1 + 0x98) = iVar4;
    *(int *)(iVar1 + 0x1d4) = iVar1;
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + 0x30);
    *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(iVar1 + 0x34);
  }
  else {
    if (*param_2 != 2) {
      return 0;
    }
    iVar1 = param_2[1];
    FUN_005b83b0(DAT_0064b138,1);
    iVar4 = iVar1 + 0x80;
    *(int *)(param_1 + 0x98) = iVar4;
    *(int *)(iVar1 + 0x110) = iVar1;
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + 0x1c);
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  FUN_005b84d0(DAT_0064b138,1);
  FUN_0051ed90(param_1,iVar4);
  if (DAT_0064a508 == 0) {
    uVar10 = *(undefined4 *)(param_1 + 0x90);
    lVar9 = 0;
  }
  else {
    uVar6 = FUN_0050af60(*(undefined4 *)(param_1 + 0x98));
    uVar7 = FUN_004581e0(DAT_00647630);
    uVar2 = (uint)((uint)uVar7 < (uint)uVar6);
    uVar3 = (int)((ulonglong)uVar7 >> 0x20) - (int)((ulonglong)uVar6 >> 0x20);
    bVar5 = -1 < (int)(uVar3 - uVar2);
    if ((uVar3 != uVar2 && bVar5) || (bVar5)) {
      lVar8 = FUN_0050af60(*(undefined4 *)(param_1 + 0x98));
      lVar9 = FUN_004581e0(DAT_00647630);
      lVar9 = lVar9 - lVar8;
      uVar10 = *(undefined4 *)(param_1 + 0x90);
    }
    else {
      uVar10 = *(undefined4 *)(param_1 + 0x90);
      lVar9 = 0;
    }
  }
  FUN_00538410(uVar10,lVar9);
  FUN_0053eb50(*(undefined4 *)(param_1 + 0x90),param_2);
  FUN_0050cfd0(param_1);
  FUN_0050d160(param_1);
  return 1;
}


