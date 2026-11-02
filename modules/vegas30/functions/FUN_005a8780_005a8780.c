/* Module: vegas30.exe
   Function: FUN_005a8780
   Address: 005a8780
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005a8780(int param_1)

{
  int iVar1;
  void *_Memory;
  int iVar2;
  int iVar3;
  
  FUN_005a8710(param_1 + 8);
  FUN_005a7a60(*(undefined4 *)(param_1 + 0x138c),*(undefined4 *)(param_1 + 5000));
  FUN_005a7a60(*(undefined4 *)(param_1 + 0x13ac),*(undefined4 *)(param_1 + 0x13a8));
  if (*(int **)(param_1 + 0x1440) == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = **(int **)(param_1 + 0x1440);
  }
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x1440) + 8);
      _Memory = *(void **)(iVar1 + iVar3 * 4);
      *(undefined4 *)(iVar1 + iVar3 * 4) = 0;
      free(_Memory);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  if (*(int *)(param_1 + 0x1440) != 0) {
    _SfList_Destroy_4(*(int *)(param_1 + 0x1440));
  }
  return;
}


