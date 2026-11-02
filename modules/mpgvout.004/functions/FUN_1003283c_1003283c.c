/* Module: mpgvout.004
   Function: FUN_1003283c
   Address: 1003283c
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_1003283c(void)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_1003e6a8;
  while (iVar1 != 0) {
    (**(code **)PTR_DAT_1003e6a8)();
    iVar1 = *(int *)(PTR_DAT_1003e6a8 + 4);
    PTR_DAT_1003e6a8 = PTR_DAT_1003e6a8 + 4;
  }
  return;
}


