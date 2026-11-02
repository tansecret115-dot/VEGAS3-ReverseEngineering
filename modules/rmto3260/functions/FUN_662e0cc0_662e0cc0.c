/* Module: rmto3260.dll
   Function: FUN_662e0cc0
   Address: 662e0cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __fastcall FUN_662e0cc0(int *param_1)

{
  FUN_662e1950(param_1);
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
  *param_1 = (int)&PTR_FUN_663077a8;
  FUN_662e1310(param_1);
  return param_1;
}


