/* Module: sfcd.cdd
   Function: FUN_00412870
   Address: 00412870
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00412870(undefined4 *param_1,uint *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(byte *)((int)param_1 + 1) = 3;
  FUN_00412720((byte *)((int)param_1 + 1),(int)param_2);
  FUN_0041f150((byte *)((int)param_1 + 2),*param_2);
  *(uint *)((int)param_1 + 3) = param_2[8];
  *(uint *)((int)param_1 + 7) = param_2[9];
  *(uint *)((int)param_1 + 0xb) = param_2[10];
  return;
}


