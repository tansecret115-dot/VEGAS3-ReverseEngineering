/* Module: vidcap30.exe
   Function: FUN_0042fcc0
   Address: 0042fcc0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042fcc0(int param_1,int *param_2)

{
  *(int *)(param_1 + 0x24) = *param_2;
  *(int *)(param_1 + 0x28) = param_2[1];
  *(int *)(param_1 + 0x2c) = param_2[2];
  *(int *)(param_1 + 0x30) = param_2[3];
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x2c) - *(int *)(param_1 + 0x24);
  *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x28);
  FUN_0042fda0(param_1);
  FUN_0042fd20(param_1);
  FUN_0042fb00(param_1,0,0);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}


