/* Module: vegas30.exe
   Function: FUN_0049d9a0
   Address: 0049d9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0049d9a0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar3 = *(int **)(*(int *)(param_2 + 8) + 0x28);
  if ((piVar3 != (int *)0x0) && (iVar1 = *piVar3, 1 < iVar1)) {
    local_8 = *(undefined4 *)(param_2 + 0x18);
    local_4 = *(undefined4 *)(param_2 + 0x1c);
    iVar2 = _SfList_FindSortedInsertIndexRange_20(piVar3,&local_8,0,0xffffffff,&LAB_005c5a20);
    if (iVar2 < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return 0;
      }
    }
    if (iVar2 < iVar1 + -1) {
      piVar3 = (int *)(piVar3[1] * iVar2 + piVar3[2]);
      if (*piVar3 == param_2) {
        return piVar3[1];
      }
      if (piVar3[0x34] == param_2) {
        return piVar3[0x35];
      }
      if ((iVar2 + 2 < iVar1) && (piVar3[0x68] == param_2)) {
        return piVar3[0x69];
      }
    }
  }
  return 0;
}


