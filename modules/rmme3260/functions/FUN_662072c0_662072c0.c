/* Module: rmme3260.dll
   Function: FUN_662072c0
   Address: 662072c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662072c0(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &PTR_FUN_6626b508;
  param_1[4] = &PTR_LAB_6626b4e0;
  param_1[5] = &PTR_LAB_6626b4c8;
  FUN_66208980((int)param_1);
  piVar1 = (int *)param_1[0x18];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x18] = 0;
  }
  piVar1 = (int *)param_1[0x17];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x17] = 0;
  }
  FUN_66250210(param_1 + 0x1c);
  thunk_FUN_66206ef0(param_1 + 0x16);
  FUN_6624fd90(param_1 + 0x12);
  FUN_6624fd90(param_1 + 0xe);
  FUN_6624fd90(param_1 + 10);
  FUN_6624fd90(param_1 + 6);
  *param_1 = &PTR_FUN_6626b290;
  return;
}


