/* Module: rn5a3260.dll
   Function: FUN_628a4ed0
   Address: 628a4ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_628a4ed0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[4];
  *param_1 = &PTR_FUN_628a6b0c;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[4] = 0;
  }
  FUN_628a4dc0(param_1);
  return;
}


