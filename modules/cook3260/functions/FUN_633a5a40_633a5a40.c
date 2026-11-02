/* Module: cook3260.dll
   Function: FUN_633a5a40
   Address: 633a5a40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_633a5a40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0xc) != 1 && -1 < *(int *)(param_1 + 0xc) + -1) {
    puVar2 = (undefined4 *)(param_1 + 0x44b8);
    do {
      free((void *)*puVar2);
      iVar1 = iVar1 + 1;
      puVar2 = puVar2 + 1;
    } while (iVar1 < *(int *)(param_1 + 0xc) + -1);
  }
  puVar2 = (undefined4 *)(param_1 + 0x4580);
  iVar1 = 7;
  do {
    free((void *)*puVar2);
    puVar2 = puVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int *)(param_1 + 8) == 2) {
    free(*(void **)(param_1 + 0x459c));
  }
  return;
}


