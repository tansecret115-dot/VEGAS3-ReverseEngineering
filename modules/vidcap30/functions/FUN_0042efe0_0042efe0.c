/* Module: vidcap30.exe
   Function: FUN_0042efe0
   Address: 0042efe0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0042efe0(int param_1,int param_2,int *param_3)

{
  FUN_0042f4b0(param_1,1);
  if ((*param_3 != 0) && (param_3[1] != 0)) {
    *(int *)(param_2 * 0x40 + 0x450 + param_1) = *param_3;
    *(int *)(param_2 * 0x40 + 0x454 + param_1) = param_3[1];
  }
  FUN_0042f5d0(param_1,1);
  return;
}


