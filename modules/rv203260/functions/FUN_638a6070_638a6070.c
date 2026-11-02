/* Module: rv203260.dll
   Function: FUN_638a6070
   Address: 638a6070
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_638a6070(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_638b3268;
  *(undefined4 *)((int)param_1 + 0x72) = 0;
  if (*(int *)((int)param_1 + 0xae) != 0) {
    (**(code **)(*(int *)param_1[4] + 0x1c))(*(int *)((int)param_1 + 0xae));
  }
  FUN_638a5960(param_1);
  return;
}


