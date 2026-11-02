/* Module: vidcap30.exe
   Function: FUN_00540ba0
   Address: 00540ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00540ba0(int param_1,undefined4 param_2,int param_3)

{
  param_3 = param_3 - *(int *)(param_1 + 0x74);
  if (param_3 < 1) {
    return 0xffff;
  }
  return param_3 / *(int *)(param_1 + 0x16c) + *(int *)(param_1 + 200);
}


