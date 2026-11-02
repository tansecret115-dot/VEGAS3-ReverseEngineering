/* Module: vidcap30.exe
   Function: FUN_0044c8a0
   Address: 0044c8a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0044c8a0(void *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != (void *)0x0) {
    iVar1 = FUN_0044c620(param_1);
    iVar2 = 0;
    if (0 < iVar1) {
      do {
        FUN_0044c8a0(*(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x43c) + 8) + iVar2 * 4));
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar1);
    }
    if (*(int *)((int)param_1 + 0x43c) != 0) {
      _SfList_Destroy_4(*(int *)((int)param_1 + 0x43c));
    }
    free(param_1);
  }
  return;
}


