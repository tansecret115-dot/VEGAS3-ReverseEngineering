/* Module: encn3260.dll
   Function: FUN_664c52e0
   Address: 664c52e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664c52e0(void)

{
  int *piVar1;
  
  if (DAT_664f29b0 == (int *)0x0) {
    piVar1 = operator_new(0x18);
    if (piVar1 != (int *)0x0) {
      DAT_664f29b0 = FUN_664c5310(piVar1);
      return;
    }
    DAT_664f29b0 = (int *)0x0;
  }
  return;
}


