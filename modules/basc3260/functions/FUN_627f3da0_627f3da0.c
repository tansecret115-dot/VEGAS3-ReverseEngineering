/* Module: basc3260.dll
   Function: FUN_627f3da0
   Address: 627f3da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_627f3da0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[4];
  *param_1 = &PTR_FUN_627f5af4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[4] = 0;
  }
  FUN_627f3c90(param_1);
  return;
}


