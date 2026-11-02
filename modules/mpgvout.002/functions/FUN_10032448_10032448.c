/* Module: mpgvout.002
   Function: FUN_10032448
   Address: 10032448
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_10032448(void)

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


