/* Module: erv23260.dll
   Function: FUN_637f4460
   Address: 637f4460
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_637f4460(int *param_1)

{
  if (param_1[0x1e] == 0) {
    FUN_637fd730(*param_1,param_1[5],param_1[6],param_1[7],0x10);
    FUN_637fd730(param_1[1],(uint)param_1[5] >> 1,(uint)param_1[6] >> 1,param_1[7],8);
    FUN_637fd730(param_1[2],(uint)param_1[5] >> 1,(uint)param_1[6] >> 1,param_1[7],8);
    param_1[0x1e] = 1;
  }
  return;
}


