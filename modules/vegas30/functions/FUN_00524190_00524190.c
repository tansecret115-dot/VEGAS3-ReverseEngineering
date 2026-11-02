/* Module: vegas30.exe
   Function: FUN_00524190
   Address: 00524190
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00524190(int param_1)

{
  int iVar1;
  int iVar2;
  void *_Memory;
  int iVar3;
  
  if (*(int **)(param_1 + 0x188) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x188);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x188) + 8) + iVar3 * 4);
        _Memory = *(void **)(iVar2 + 0x20c);
        if (_Memory != (void *)0x0) {
          free(_Memory);
        }
        iVar3 = iVar3 + 1;
        *(undefined4 *)(iVar2 + 0x20c) = 0;
      } while (iVar3 < iVar1);
    }
    FUN_004ec820(*(undefined4 *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x188) = 0;
  }
  return;
}


