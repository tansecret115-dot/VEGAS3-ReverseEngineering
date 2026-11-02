/* Module: rmbe3260.dll
   Function: FUN_66024310
   Address: 66024310
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66024310(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)((int)param_1 + 0x4e);
  *param_1 = &PTR_FUN_66066f40;
  param_1[4] = &PTR_LAB_66066ef8;
  param_1[5] = &PTR_LAB_66066ee0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x4e) = 0;
  }
  FUN_6605b770(param_1 + 6);
  *param_1 = &PTR_FUN_66063e30;
  return;
}


