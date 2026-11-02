/* Module: auth3260.dll
   Function: FUN_627a51f0
   Address: 627a51f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_627a51f0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[4];
  *param_1 = &PTR_FUN_627a7c48;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[4] = 0;
  }
  FUN_627a50e0(param_1);
  return;
}


