/* Module: encn3260.dll
   Function: FUN_664c5c00
   Address: 664c5c00
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_664c5c00(void)

{
  int *piVar1;
  
  if (DAT_664f2a28 == (int *)0x0) {
    piVar1 = operator_new(0xc5);
    if (piVar1 == (int *)0x0) {
      DAT_664f2a28 = (int *)0x0;
    }
    else {
      DAT_664f2a28 = FUN_664c9fc0(piVar1);
    }
  }
  return (-(uint)(DAT_664f2a28 != (int *)0x0) & 0x7ff8fff2) + 0x8007000e;
}


