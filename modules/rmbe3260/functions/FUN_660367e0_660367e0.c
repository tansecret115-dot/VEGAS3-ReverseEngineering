/* Module: rmbe3260.dll
   Function: FUN_660367e0
   Address: 660367e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int * __fastcall FUN_660367e0(int *param_1)

{
  FUN_66037470(param_1);
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
  *param_1 = (int)&PTR_FUN_66067c78;
  FUN_66036e30(param_1);
  return param_1;
}


