/* Module: sftrans1.dll
   Function: FUN_00542a70
   Address: 00542a70
   Source: Ghidra pseudocode (Stage 10 batch) */


int __thiscall FUN_00542a70(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *(int *)(param_1 + 4) = param_2;
  *(int *)(param_1 + 0xc) = param_4;
  if (param_2 == 0) {
    return -0x7fffbffd;
  }
  if (param_3 == 0) {
    return -0x7fffbffd;
  }
  if (param_4 == 0) {
    return -0x7fffbffd;
  }
  if (param_5 != (int *)0x0) {
    uVar2 = ftol();
    *(undefined1 *)(param_1 + 0x96) = uVar2;
    uVar2 = ftol();
    *(undefined1 *)(param_1 + 0x95) = uVar2;
    uVar2 = ftol();
    *(undefined1 *)(param_1 + 0x94) = uVar2;
    uVar2 = ftol();
    *(undefined1 *)(param_1 + 0x97) = uVar2;
    piVar1 = (int *)(param_1 + 0x10);
    *piVar1 = *(int *)(param_4 + 8);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_4 + 0xc);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_4 + 0x10);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_4 + 0x14);
    iVar3 = param_5[1];
    iVar4 = *param_5;
    *piVar1 = *piVar1 + iVar4;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + iVar4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + iVar3;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + iVar3;
    iVar3 = *(int *)(param_1 + 0xc);
    iVar4 = 0;
    iVar5 = 0;
    *(int *)(param_1 + 0x20) =
         (*(int *)(iVar3 + 0x18) - *(int *)(iVar3 + 8)) + *(int *)(iVar3 + 0x10);
    while ((*(int *)(*(int *)(param_1 + 0x24) + iVar5) == 0 ||
           (iVar3 = FUN_00541650(*(int *)(param_1 + 0x24) + iVar5,iVar4,1), -1 < iVar3))) {
      iVar5 = iVar5 + 0x54;
      iVar4 = iVar4 + 1;
      if (0xa7 < iVar5) {
        iVar3 = FUN_00541650(0,2,1);
        return iVar3;
      }
    }
    return iVar3;
  }
  return -0x7fffbffd;
}


