/* Module: vegas30.exe
   Function: FUN_0050a7f0
   Address: 0050a7f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0050a7f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    iVar1 = FUN_0050a790(param_1,param_2);
    if (iVar1 != 0) {
      if (*(int **)(iVar1 + 0x120) == (int *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = **(int **)(iVar1 + 0x120);
      }
      iVar3 = 0;
      if (0 < iVar2) {
        do {
          if (*(int *)(*(int *)(*(int *)(iVar1 + 0x120) + 8) + iVar3 * 4) == param_2) {
            FUN_00508c50(param_2);
            _SfList_DeleteList_16(*(undefined4 *)(iVar1 + 0x120),iVar3,1,1);
            iVar3 = iVar3 + -1;
            iVar2 = iVar2 + -1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < iVar2);
      }
      return 0;
    }
  }
  return 0x80004005;
}


