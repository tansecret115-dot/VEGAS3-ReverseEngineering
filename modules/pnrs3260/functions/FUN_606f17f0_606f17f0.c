/* Module: pnrs3260.dll
   Function: FUN_606f17f0
   Address: 606f17f0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_606f17f0(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 2);
  if (0 < LVar1) {
    return param_1[2];
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x48))(1);
  }
  DAT_606f4038 = 0;
  return 0;
}


