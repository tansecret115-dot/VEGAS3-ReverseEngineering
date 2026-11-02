/* Module: encn3260.dll
   Function: FUN_664ba950
   Address: 664ba950
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664ba950(int *param_1)

{
  int *piVar1;
  
  *param_1 = (int)&PTR_FUN_664df4c8;
  if (param_1[1] == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[4] = 0;
  }
  else {
    FUN_664baaf0(param_1);
  }
  piVar1 = (int *)param_1[3];
  while (piVar1 != (int *)0x0) {
    param_1[3] = *piVar1;
    operator_delete(piVar1);
    piVar1 = (int *)param_1[3];
  }
  return;
}


