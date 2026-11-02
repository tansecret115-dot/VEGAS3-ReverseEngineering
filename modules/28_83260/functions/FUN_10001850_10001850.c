/* Module: 28_83260.dll
   Function: FUN_10001850
   Address: 10001850
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_10001850(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_10007088;
  *(undefined2 *)(param_1 + 1) = 1;
  *(undefined4 *)((int)param_1 + 6) = 8000;
  *(undefined2 *)((int)param_1 + 10) = 0x10;
  *(undefined2 *)(param_1 + 3) = 1;
  *(undefined2 *)((int)param_1 + 0xe) = 1;
  param_1[4] = 8000;
  *(undefined2 *)(param_1 + 5) = 0x10;
  *(undefined2 *)((int)param_1 + 0x16) = 1;
  *(undefined2 *)(param_1 + 6) = 2;
  *(undefined4 *)((int)param_1 + 0x1a) = 0x26;
  *(undefined4 *)((int)param_1 + 0x1e) = 0x7080;
  *(undefined4 *)((int)param_1 + 0x22) = 4000;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  return;
}


