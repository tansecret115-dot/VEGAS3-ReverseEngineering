/* Module: rmme3260.dll
   Function: FUN_662592d0
   Address: 662592d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_662592d0(void)

{
  int *piVar1;
  
  if (DAT_6627f238 == (int *)0x0) {
    piVar1 = operator_new(0xc5);
    if (piVar1 == (int *)0x0) {
      DAT_6627f238 = (int *)0x0;
    }
    else {
      DAT_6627f238 = FUN_6625e3a0(piVar1);
    }
  }
  return (-(uint)(DAT_6627f238 != (int *)0x0) & 0x7ff8fff2) + 0x8007000e;
}


