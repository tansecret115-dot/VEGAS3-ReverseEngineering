/* Module: sfppack2.dll
   Function: FUN_5cd265b0
   Address: 5cd265b0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_5cd265b0(undefined4 *param_1,double *param_2,uint param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined *param_8,
                 undefined4 param_9)

{
  int iVar1;
  
  iVar1 = FUN_5cd252a0(param_1,param_2,param_3,1,param_4,param_5);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_5cd264b0(param_1,1);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = (*(code *)param_8)(param_1,param_2,param_3,param_9);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_5cd264b0(param_1,1);
  if (iVar1 == 0) {
    return false;
  }
  iVar1 = FUN_5cd252a0(param_1,param_2,param_3,0,param_2,param_3);
  return iVar1 != 0;
}


