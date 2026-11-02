/* Module: mp3rw.dll
   Function: FUN_0044c620
   Address: 0044c620
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044c620(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)((int)param_2 + 0x35) != 0) {
    iVar2 = 0;
    if (0 < *(int *)((int)param_2 + 0x2d)) {
      iVar1 = 0;
      do {
        FUN_00475ac0(param_1,*(void **)(iVar1 + 4 + *(int *)((int)param_2 + 0x35)));
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x10;
      } while (iVar2 < *(int *)((int)param_2 + 0x2d));
    }
    FUN_00475ac0(param_1,*(void **)((int)param_2 + 0x35));
  }
  FUN_0044c600(param_2);
  return;
}


