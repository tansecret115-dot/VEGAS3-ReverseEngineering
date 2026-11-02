/* Module: mpgaout.dll
   Function: FUN_1000b54c
   Address: 1000b54c
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_1000b54c(void)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_1001e718;
  while (iVar1 != 0) {
    (**(code **)PTR_DAT_1001e718)();
    iVar1 = *(int *)(PTR_DAT_1001e718 + 4);
    PTR_DAT_1001e718 = PTR_DAT_1001e718 + 4;
  }
  return;
}


