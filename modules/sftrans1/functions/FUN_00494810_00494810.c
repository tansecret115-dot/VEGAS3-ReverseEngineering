/* Module: sftrans1.dll
   Function: FUN_00494810
   Address: 00494810
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_00494810(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,HWND param_5)

{
  int *piVar1;
  LRESULT LVar2;
  HWND pHVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  switch(param_3) {
  case 0x4e:
    FUN_0052d210(param_5);
    return 0;
  case 0x53:
    uVar5 = FUN_00494ac0(param_3,param_4,param_5);
    return uVar5;
  case 0x111:
    if (((*(int *)(param_1 + 0x30) != 0) &&
        (iVar4 = FUN_00493e40(param_4,param_5,*(int *)(param_1 + 0x30) + 0x70,param_1 + 0x38),
        iVar4 != 0)) && (piVar1 = *(int **)(param_1 + 0x34), piVar1 != (int *)0x0)) {
      (**(code **)(*piVar1 + 0x2c))(piVar1);
    }
    break;
  case 0x114:
    if (*(int *)(param_1 + 0x30) == 0) {
      return 0;
    }
    LVar2 = SendMessageA(param_5,0x60a,0,0);
    pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0x6c2);
    if (param_5 == pHVar3) {
      uVar6 = 0x3fa99999;
      uVar5 = 0x3fd00000;
      iVar4 = *(int *)(param_1 + 0x30) + 0xd0;
LAB_00494961:
      FUN_00494620(param_4 & 0xffff,LVar2,iVar4,0,2000,0,0,0,uVar5,0xd2f1a9fc,0x3f50624d,0x9999999a,
                   uVar6);
    }
    else {
      pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0x6c0);
      if (param_5 == pHVar3) {
        uVar6 = 0x3fa99999;
        uVar5 = 0x3fd00000;
        iVar4 = *(int *)(param_1 + 0x30) + 0xd8;
        goto LAB_00494961;
      }
      pHVar3 = GetDlgItem(*(HWND *)(param_1 + 4),0x6d0);
      if (param_5 == pHVar3) {
        uVar6 = 0x3fc99999;
        uVar5 = 0x40000000;
        iVar4 = *(int *)(param_1 + 0x30) + 0xe0;
        goto LAB_00494961;
      }
    }
    piVar1 = *(int **)(param_1 + 0x34);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x2c))(piVar1);
      return 0;
    }
  }
  return 0;
}


