/* Module: pngu3266.dll
   Function: FUN_6061aa50
   Address: 6061aa50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6061aa50(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[6];
  *param_1 = &PTR_FUN_6062d0c0;
  param_1[2] = &PTR_FUN_6062d0a0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[3];
  param_1[6] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)param_1[4];
  param_1[3] = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  param_1[4] = 0;
  FUN_6061c880(param_1);
  return;
}


