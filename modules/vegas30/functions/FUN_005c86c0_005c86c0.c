/* Module: vegas30.exe
   Function: FUN_005c86c0
   Address: 005c86c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c86c0(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_8;
  int iStack_4;
  
  if (param_3 < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_005c6910(param_2,param_3);
    if (iVar2 == 0) {
      return -0x7fffbffb;
    }
  }
  if (*(int *)(param_2 + 0x50) == iVar2) {
    return 0;
  }
  FUN_005b83b0(param_1,1);
  if ((code *)**(undefined4 **)(param_2 + 0x218) != (code *)0x0) {
    (*(code *)**(undefined4 **)(param_2 + 0x218))(param_2);
  }
  if (*(int *)(param_2 + 4) == 3) {
    FUN_0043d090(param_2);
  }
  iVar3 = 0;
  if (((iVar2 == 0) && (*(int *)(param_2 + 0x50) != 0)) && (*(int *)(param_2 + 0x54) == 0)) {
    iVar3 = _SfList_CreateExZ_32
                      ((undefined4 *)(param_2 + 0x54),4,0xffffffff,0xffffffff,0x40000000,0,0,0);
    if (iVar3 < 0) goto LAB_005c8850;
    param_3 = *(int *)(param_2 + 0x50);
    iVar3 = _SfList_InsertList_16(*(undefined4 *)(param_2 + 0x54),0xffffffff,&param_3,1);
    if (iVar3 < 0) goto LAB_005c8850;
  }
  *(int *)(param_2 + 0x50) = iVar2;
  iVar1 = *(int *)(param_2 + 0x3c) + 1;
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  *(int *)(param_2 + 0x3c) = iVar1;
  iVar1 = *(int *)(param_2 + 8);
  if (iVar1 != 0) {
    *(uint *)(iVar1 + 0x10) = *(uint *)(iVar1 + 0x10) | 0x200000;
    *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
  }
  if (((iVar2 != 0) && (*(int *)(param_2 + 0x24) < 1)) &&
     ((*(int *)(param_2 + 0x24) < 0 || (*(int *)(param_2 + 0x20) == 0)))) {
    iStack_4 = *(int *)(iVar2 + 0x14);
    iStack_8 = *(int *)(iVar2 + 0x10);
    if ((iStack_4 < 1) && ((iStack_4 < 0 || (iStack_8 == 0)))) {
      iStack_8 = 1;
      iStack_4 = 0;
    }
    FUN_005c7760(param_2,0,&iStack_8,0,0);
    FUN_005c6cd0(param_2,3);
  }
  FUN_005c6ad0(param_1,param_2);
  *(uint *)*param_1 = *(uint *)*param_1 | 0x100;
  if (((*(uint *)(param_2 + 0x10) & 0x400) != 0) ||
     ((*(int *)(param_2 + 8) != 0 && ((*(uint *)(*(int *)(param_2 + 8) + 0x10) & 0x200) != 0)))) {
    *(uint *)*param_1 = *(uint *)*param_1 | 0x400;
    FUN_005b84d0(param_1,1);
    return iVar3;
  }
LAB_005c8850:
  FUN_005b84d0(param_1,1);
  return iVar3;
}


