/* Module: erv33260.dll
   Function: FUN_6707b970
   Address: 6707b970
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6707b970(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  while (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 4);
    *(int *)(param_1 + 4) = iVar1;
    FUN_67072140(*(void **)(iVar1 + 8));
    iVar1 = *(int *)(param_1 + 0xc) + -1;
    *(int *)(param_1 + 0xc) = iVar1;
  }
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    FUN_67072140(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_67072140(*(void **)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}


