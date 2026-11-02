/* Module: vegas30.exe
   Function: FUN_0049da60
   Address: 0049da60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0049da60(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_8;
  undefined4 local_4;
  
  piVar1 = *(int **)(*(int *)(param_2 + 8) + 0x28);
  if ((piVar1 != (int *)0x0) && (iVar2 = *piVar1, 1 < iVar2)) {
    local_8 = *(undefined4 *)(param_2 + 0x18);
    local_4 = *(undefined4 *)(param_2 + 0x1c);
    iVar3 = _SfList_FindSortedInsertIndexRange_20(piVar1,&local_8,0,0xffffffff,&LAB_005c5a20);
    if (iVar3 < 1) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + -1;
      if (iVar3 < 0) {
        return 0;
      }
    }
    if (iVar3 < iVar2 + -1) {
      puVar4 = (undefined4 *)(piVar1[1] * iVar3 + piVar1[2]);
      if (puVar4[1] == param_2) {
        return *puVar4;
      }
      if (puVar4[0x35] == param_2) {
        return puVar4[0x34];
      }
      if ((iVar3 + 2 < iVar2) && (puVar4[0x69] == param_2)) {
        return puVar4[0x68];
      }
    }
  }
  return 0;
}


