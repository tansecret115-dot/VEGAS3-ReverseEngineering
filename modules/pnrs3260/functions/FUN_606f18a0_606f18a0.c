/* Module: pnrs3260.dll
   Function: FUN_606f18a0
   Address: 606f18a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_606f18a0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_606f30c8;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


