/* Module: sfppack2.dll
   Function: FUN_5cd266e0
   Address: 5cd266e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_5cd266e0(undefined4 *param_1,float *param_2,uint param_3,float param_4,undefined4 param_5,
            undefined *param_6,undefined4 param_7)

{
  FUN_5cd343c0(param_1,param_2,(float)(param_3 >> 1),1,param_4);
  (*(code *)param_6)(param_1,param_2,param_3,param_7);
  FUN_5cd343c0(param_1,param_2,(float)(param_3 >> 1),0,(float)param_1);
  return 1;
}


