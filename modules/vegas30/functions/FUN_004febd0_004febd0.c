/* Module: vegas30.exe
   Function: FUN_004febd0
   Address: 004febd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004febd0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 0x17c) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x17c);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x17c) + 8) + iVar3 * 4);
        if (*(int *)(iVar2 + 0x150) != 0) {
          _SfDibFree_8(*(int *)(iVar2 + 0x150),0);
        }
        *(undefined4 *)(iVar2 + 0x150) = 0;
        if (*(int *)(iVar2 + 0x154) != 0) {
          _SfDibFree_8(*(int *)(iVar2 + 0x154),0);
        }
        iVar3 = iVar3 + 1;
        *(undefined4 *)(iVar2 + 0x154) = 0;
      } while (iVar3 < iVar1);
    }
    _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x17c),0,0xffffffff,0);
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x17c));
    *(undefined4 *)(param_1 + 0x17c) = 0;
  }
  return;
}


