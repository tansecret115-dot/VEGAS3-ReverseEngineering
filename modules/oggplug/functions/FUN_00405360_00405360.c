/* Module: oggplug.dll
   Function: FUN_00405360
   Address: 00405360
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00405360(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined *param_5)

{
  if (*(short *)(param_3 + 2) == 2) {
    (*(code *)param_5)(*param_1,1,0,param_2,2,0,param_4);
    (*(code *)param_5)(param_1[1],1,0,param_2,2,1,param_4);
    return;
  }
  if (*(short *)(param_3 + 2) == 1) {
    (*(code *)param_5)(*param_1,1,0,param_2,1,0,param_4);
  }
  return;
}


