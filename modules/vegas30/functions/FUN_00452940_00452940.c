/* Module: vegas30.exe
   Function: FUN_00452940
   Address: 00452940
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00452940(int *param_1,int param_2,int param_3)

{
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = param_2;
  param_1[0x47] = param_3;
  FUN_00452820(param_1[2],param_1[0x46]);
  (**(code **)(*param_1 + 0x24))(param_1);
  return;
}


