/* Module: rmbe3260.dll
   Function: FUN_6605c430
   Address: 6605c430
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6605c430(int *param_1)

{
  int *piVar1;
  
  *param_1 = (int)&PTR_FUN_66068cc0;
  if (param_1[1] == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[4] = 0;
  }
  else {
    FUN_6605c590(param_1);
  }
  piVar1 = (int *)param_1[3];
  while (piVar1 != (int *)0x0) {
    param_1[3] = *piVar1;
    operator_delete(piVar1);
    piVar1 = (int *)param_1[3];
  }
  return;
}


