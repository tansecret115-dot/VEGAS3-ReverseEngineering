/* Module: encn3260.dll
   Function: FUN_6648ee80
   Address: 6648ee80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6648ee80(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)param_1 + 0x95);
  *param_1 = &PTR_FUN_664de458;
  param_1[0x1a] = &PTR_LAB_664de440;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x95) = 0;
  }
  FUN_6648e2b0(param_1);
  return;
}


