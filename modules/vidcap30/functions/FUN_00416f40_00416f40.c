/* Module: vidcap30.exe
   Function: FUN_00416f40
   Address: 00416f40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00416f40(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    iVar2 = *param_1;
    iVar3 = 0;
    if (0 < iVar2) {
      do {
        iVar1 = *(int *)(param_1[2] + iVar3 * 4);
        if (*(int *)(iVar1 + 0x208) == 7) {
          FUN_00416e80(param_2,iVar1);
          _SfList_DeleteList_16(param_1,iVar3,1,0);
          iVar2 = iVar2 + -1;
          iVar3 = iVar3 + -1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar2);
    }
    return 0;
  }
  return 0;
}


