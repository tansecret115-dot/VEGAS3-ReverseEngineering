/* Module: vegas30.exe
   Function: FUN_005c9520
   Address: 005c9520
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c9520(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = param_3;
  if (param_2 == *(int *)(param_3 + 8)) {
    return 1;
  }
  if (*(int *)(param_3 + 4) != *(int *)(param_2 + 4)) {
    return -0x7fffbffb;
  }
  FUN_005b83b0(param_1,1);
  iVar2 = *(int *)(iVar1 + 8);
  if (iVar2 != 0) {
    *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x200000;
    *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
    iVar2 = FUN_005c9490(param_1,iVar1,param_6);
    if (iVar2 < 0) goto LAB_005c9618;
  }
  uVar3 = param_4;
  iVar2 = param_5;
  if ((param_5 < 1) && (param_5 < 0)) {
    uVar3 = 0;
    iVar2 = 0;
  }
  *(undefined4 *)(iVar1 + 0x18) = uVar3;
  *(int *)(iVar1 + 0x1c) = iVar2;
  iVar2 = FUN_005c8b90(param_2,iVar1);
  if (iVar2 < 0) {
    iVar2 = -0x7fffbffb;
  }
  else {
    param_3 = iVar1;
    iVar2 = _SfList_InsertList_16(*(undefined4 *)(param_2 + 0x24),iVar2,&param_3,1);
    if ((-1 < iVar2) && (*(int *)(iVar1 + 8) = param_2, param_2 != 0)) {
      *(uint *)(param_2 + 0x10) = *(uint *)(param_2 + 0x10) | 0x200000;
      *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
    }
  }
  *(uint *)*param_1 = *(uint *)*param_1 | 0x80000;
  *(uint *)*param_1 = *(uint *)*param_1 | 0x40;
  if ((*(uint *)(iVar1 + 0x10) & 0x400) != 0) {
    *(uint *)*param_1 = *(uint *)*param_1 | 0x400;
  }
LAB_005c9618:
  FUN_005b84d0(param_1,1);
  return iVar2;
}


