/* Module: rmbe3260.dll
   Function: FUN_6605ead0
   Address: 6605ead0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6605ead0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[4];
  *param_1 = &PTR_FUN_66068dbc;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[4] = 0;
  }
  FUN_6605e9c0(param_1);
  return;
}


