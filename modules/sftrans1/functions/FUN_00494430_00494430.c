/* Module: sftrans1.dll
   Function: FUN_00494430
   Address: 00494430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_00494430(int param_1,undefined4 param_2,uint param_3,uint param_4,HWND param_5)

{
  int *piVar1;
  undefined4 uVar2;
  LRESULT LVar3;
  HWND pHVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_3 < 0x54) {
    if (param_3 == 0x53) {
      uVar2 = FUN_004947e0(0x53,param_4,param_5);
      return uVar2;
    }
    if (param_3 != 2) {
      if (param_3 != 0x4e) {
        return 0;
      }
      FUN_0052d210(param_5);
      return 0;
    }
    FUN_0052d1a0();
    if (*(HIMAGELIST *)(param_1 + 0x50) == (HIMAGELIST)0x0) {
      return 0;
    }
    ImageList_Destroy(*(HIMAGELIST *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
    return 0;
  }
  if (param_3 == 0x111) {
    if (*(int *)(param_1 + 0x30) == 0) {
      return 0;
    }
    iVar5 = FUN_00493e40(param_4,param_5,*(int *)(param_1 + 0x30) + 0xe8,param_1 + 0x38);
    if (iVar5 == 0) {
      return 0;
    }
    piVar1 = *(int **)(param_1 + 0x34);
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    (**(code **)(*piVar1 + 0x2c))(piVar1);
    return 0;
  }
  if (param_3 != 0x114) {
    return 0;
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    return 0;
  }
  LVar3 = SendMessageA(param_5,0x60a,0,0);
  pHVar4 = GetDlgItem(*(HWND *)(param_1 + 4),0x6c2);
  if (param_5 == pHVar4) {
    uVar6 = 0x3fa99999;
    uVar2 = 0x3fd00000;
    iVar5 = *(int *)(param_1 + 0x30) + 0x148;
  }
  else {
    pHVar4 = GetDlgItem(*(HWND *)(param_1 + 4),0x6c0);
    if (param_5 == pHVar4) {
      uVar6 = 0x3fa99999;
      uVar2 = 0x3fd00000;
      iVar5 = *(int *)(param_1 + 0x30) + 0x150;
    }
    else {
      pHVar4 = GetDlgItem(*(HWND *)(param_1 + 4),0x6d0);
      if (param_5 != pHVar4) goto LAB_004945c9;
      uVar6 = 0x3fc99999;
      uVar2 = 0x40000000;
      iVar5 = *(int *)(param_1 + 0x30) + 0x158;
    }
  }
  FUN_00494620(param_4 & 0xffff,LVar3,iVar5,0,2000,0,0,0,uVar2,0xd2f1a9fc,0x3f50624d,0x9999999a,
               uVar6);
LAB_004945c9:
  piVar1 = *(int **)(param_1 + 0x34);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  (**(code **)(*piVar1 + 0x2c))(piVar1);
  return 0;
}


