/* Module: vegas30.exe
   Function: FUN_005c9490
   Address: 005c9490
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_005c9490(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 8);
  if (iVar3 == 0) {
    return 1;
  }
  FUN_005b83b0(param_1,1);
  uVar1 = *(undefined4 *)(iVar3 + 0x24);
  iVar2 = _SfList_FindSpecificItemRange_16(uVar1,0,0xffffffff,param_2);
  if (iVar2 < 0) {
    iVar3 = -0x7fffbffb;
  }
  else {
    *(uint *)(iVar3 + 0x10) = *(uint *)(iVar3 + 0x10) | 0x200000;
    *(uint *)*param_1 = *(uint *)*param_1 | 0x2000;
    iVar3 = _SfList_DeleteList_16(uVar1,iVar2,1,param_3);
    if (-1 < iVar3) {
      *(undefined4 *)(param_2 + 8) = 0;
    }
  }
  *(uint *)*param_1 = *(uint *)*param_1 | 0x20;
  FUN_005b84d0(param_1,1);
  return iVar3;
}


