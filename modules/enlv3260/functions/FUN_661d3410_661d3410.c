/* Module: enlv3260.dll
   Function: FUN_661d3410
   Address: 661d3410
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_661d3410(int *param_1)

{
  int *piVar1;
  
  *param_1 = (int)&PTR_FUN_661d5770;
  if (param_1[1] == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[4] = 0;
  }
  else {
    FUN_661d3570(param_1);
  }
  piVar1 = (int *)param_1[3];
  while (piVar1 != (int *)0x0) {
    param_1[3] = *piVar1;
    operator_delete(piVar1);
    piVar1 = (int *)param_1[3];
  }
  return;
}


