/* Module: cook3260.dll
   Function: FUN_633a1ec0
   Address: 633a1ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_633a1ec0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        FUN_633a3750(*(int *)(param_1 + 0x14) + iVar1);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x16bb4;
      } while (iVar2 < *(int *)(param_1 + 4));
    }
    iVar1 = *(int *)(param_1 + 0x14);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + -4);
      if (-1 < iVar2 + -1) {
        do {
          FUN_633a1330();
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      operator_delete((void *)(iVar1 + -4));
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(void **)(param_1 + 0x10) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}


