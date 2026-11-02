/* Module: rmme3260.dll
   Function: FUN_66202f90
   Address: 66202f90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66202f90(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_6626b240;
  FUN_66203080((int)param_1);
  piVar1 = (int *)param_1[0xf];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xf] = 0;
  }
  piVar1 = (int *)param_1[0xe];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0xe] = 0;
  }
  FUN_66250210((int *)((int)param_1 + 0x62));
  FUN_66250210(param_1 + 0x15);
  FUN_66250210(param_1 + 0x10);
  FUN_66250a40(param_1 + 9);
  FUN_66250a40(param_1 + 4);
  *param_1 = &PTR_FUN_6626b290;
  return;
}


