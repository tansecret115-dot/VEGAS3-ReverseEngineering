/* Module: pngu3266.dll
   Function: FUN_6061ab90
   Address: 6061ab90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6061ab90(int param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)(param_1 + 0xc));
  if (0 < LVar1) {
    return *(undefined4 *)(param_1 + 0xc);
  }
  if ((undefined4 *)(param_1 + -8) != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)(param_1 + -8))(1);
  }
  return 0;
}


