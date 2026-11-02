/* Module: vidcap30.exe
   Function: FUN_00564a10
   Address: 00564a10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00564a10(int param_1,undefined4 param_2,int *param_3,undefined4 param_4,int param_5,
                 int *param_6)

{
  (**(code **)(*(int *)(param_1 + 0x1c9) + 9))(param_1,param_2,*param_3,param_5 + *param_6 * 4);
  *param_6 = *param_6 + 1;
  *param_3 = *param_3 + 1;
  return;
}


