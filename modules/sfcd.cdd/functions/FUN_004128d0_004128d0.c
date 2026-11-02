/* Module: sfcd.cdd
   Function: FUN_004128d0
   Address: 004128d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004128d0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  *(byte *)((int)param_1 + 1) = 2;
  if (param_2 != 0) {
    FUN_00412720((byte *)((int)param_1 + 1),param_2);
  }
  *(undefined4 *)((int)param_1 + 2) = *param_3;
  *(undefined4 *)((int)param_1 + 6) = param_3[1];
  *(undefined4 *)((int)param_1 + 10) = param_3[2];
  *(undefined1 *)((int)param_1 + 0xe) = *(undefined1 *)(param_3 + 3);
  return;
}


