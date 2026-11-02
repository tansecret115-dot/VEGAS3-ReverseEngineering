/* Module: vidcap30.exe
   Function: FUN_0040cfd0
   Address: 0040cfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040cfd0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(int *)(param_1 + 0x88) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x88));
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  if (*(int **)(param_1 + 0x8c) == (int *)0x0) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    return 0;
  }
  iVar1 = **(int **)(param_1 + 0x8c);
  if (0 < iVar1) {
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x8c) + 8);
      iVar4 = *(int *)(*(int *)(param_1 + 0x8c) + 4) * iVar5;
      iVar3 = *(int *)(iVar4 + 0x2c + iVar2);
      if (iVar3 != 0) {
        _SfList_Destroy_4(iVar3);
      }
      iVar5 = iVar5 + 1;
      *(undefined4 *)(iVar4 + iVar2 + 0x2c) = 0;
    } while (iVar5 < iVar1);
  }
  _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x8c));
  *(undefined4 *)(param_1 + 0x8c) = 0;
  return 0;
}


