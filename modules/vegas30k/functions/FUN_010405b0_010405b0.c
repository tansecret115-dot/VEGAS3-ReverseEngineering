/* Module: vegas30k.dll
   Function: FUN_010405b0
   Address: 010405b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_010405b0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_011dd0c8;
  if (param_1[2] != 0) {
    FUN_01137930();
    (**(code **)(**(int **)param_1[3] + 8))(*(int **)param_1[3]);
    free((void *)param_1[3]);
  }
  param_1[3] = 0;
  return;
}


