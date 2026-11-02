/* Module: encn3260.dll
   Function: FUN_664b0020
   Address: 664b0020
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664b0020(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_664f0878;
  DAT_664f087c = DAT_664f087c + -1;
  if (DAT_664f087c == 0) {
    if (DAT_664f0878 != (void *)0x0) {
      FUN_664b09b0((int)DAT_664f0878);
      operator_delete(pvVar1);
    }
    DAT_664f0878 = (void *)0x0;
  }
  return;
}


