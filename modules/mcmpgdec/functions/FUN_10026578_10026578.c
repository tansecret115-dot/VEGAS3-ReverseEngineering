/* Module: mcmpgdec.dll
   Function: FUN_10026578
   Address: 10026578
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_10026578(void)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_10033e70;
  while (iVar1 != 0) {
    (**(code **)PTR_DAT_10033e70)();
    iVar1 = *(int *)(PTR_DAT_10033e70 + 4);
    PTR_DAT_10033e70 = PTR_DAT_10033e70 + 4;
  }
  return;
}


