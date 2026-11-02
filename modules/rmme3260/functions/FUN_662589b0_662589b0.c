/* Module: rmme3260.dll
   Function: FUN_662589b0
   Address: 662589b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662589b0(void)

{
  int *piVar1;
  
  if (DAT_6627f1b8 == (int *)0x0) {
    piVar1 = operator_new(0x18);
    if (piVar1 != (int *)0x0) {
      DAT_6627f1b8 = FUN_662589e0(piVar1);
      return;
    }
    DAT_6627f1b8 = (int *)0x0;
  }
  return;
}


