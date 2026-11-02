/* Module: erv33260.dll
   Function: FUN_6707b5e0
   Address: 6707b5e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6707b5e0(undefined4 *param_1)

{
  if ((void *)param_1[9] != (void *)0x0) {
    FUN_67071080((void *)param_1[9]);
    param_1[9] = 0;
  }
  if ((void *)*param_1 != (void *)0x0) {
    FUN_67071080((void *)*param_1);
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}


