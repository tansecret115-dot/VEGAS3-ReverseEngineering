/* Module: rmme3260.dll
   Function: FUN_6621ad90
   Address: 6621ad90
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __fastcall FUN_6621ad90(int *param_1)

{
  FUN_6621b820(param_1);
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined2 *)((int)param_1 + 0x1e) = 0;
  param_1[8] = 0;
  *(undefined2 *)(param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *param_1 = (int)&PTR_FUN_6626b9f0;
  FUN_6621b4e0(param_1);
  return param_1;
}


