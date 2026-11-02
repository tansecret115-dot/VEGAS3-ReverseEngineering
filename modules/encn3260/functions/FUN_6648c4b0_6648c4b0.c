/* Module: encn3260.dll
   Function: FUN_6648c4b0
   Address: 6648c4b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6648c4b0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_664de1e0;
  FUN_6648c5a0((int)param_1);
  piVar1 = (int *)param_1[6];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[6] = 0;
  }
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[2] = 0;
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  FUN_664ba950(param_1 + 7);
  return;
}


