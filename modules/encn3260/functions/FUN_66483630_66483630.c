/* Module: encn3260.dll
   Function: FUN_66483630
   Address: 66483630
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66483630(int *param_1)

{
  int *piVar1;
  
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 0x18))();
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 0x18))();
  }
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *param_1 = 0;
  }
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[1] = 0;
  }
  FUN_664ba950(param_1 + 3);
  return;
}


