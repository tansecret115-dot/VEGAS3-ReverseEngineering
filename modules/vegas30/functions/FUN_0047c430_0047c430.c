/* Module: vegas30.exe
   Function: FUN_0047c430
   Address: 0047c430
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0047c430(int param_1)

{
  int iVar1;
  
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x18);
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      FUN_0047c480(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x18) + 8) + iVar1 * 4));
      _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x18),iVar1,1,0);
    }
    _SfList_Destroy_4(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}


