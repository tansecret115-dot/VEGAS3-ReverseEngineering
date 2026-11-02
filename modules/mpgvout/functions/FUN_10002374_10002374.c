/* Module: mpgvout.dll
   Function: FUN_10002374
   Address: 10002374
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_10002374(void)

{
  int iVar1;
  
  iVar1 = *(int *)PTR_DAT_10003048;
  while (iVar1 != 0) {
    (**(code **)PTR_DAT_10003048)();
    iVar1 = *(int *)(PTR_DAT_10003048 + 4);
    PTR_DAT_10003048 = PTR_DAT_10003048 + 4;
  }
  return;
}


