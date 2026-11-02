/* Module: rv303260.dll
   Function: FUN_67206360
   Address: 67206360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_67206360(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_67213268;
  *(undefined4 *)((int)param_1 + 0x72) = 0;
  if (*(int *)((int)param_1 + 0xae) != 0) {
    (**(code **)(*(int *)param_1[4] + 0x1c))(*(int *)((int)param_1 + 0xae));
  }
  FUN_67205d30(param_1);
  return;
}


