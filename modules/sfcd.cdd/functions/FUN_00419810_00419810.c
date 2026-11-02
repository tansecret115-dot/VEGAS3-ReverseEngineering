/* Module: sfcd.cdd
   Function: FUN_00419810
   Address: 00419810
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00419810(HSFCD__ *param_1,uint param_2,undefined4 *param_3,uint param_4)

{
  int iVar1;
  
  if ((*(uint *)(*(int *)(param_1 + 0x160) + 0x34) & 0x200) != 0) {
    FUN_004197b0(param_1,param_2,param_3,param_4);
    return;
  }
  iVar1 = FUN_00419710(param_1,SUB41(param_2,0),param_3,param_4);
  if (iVar1 < 0) {
    FUN_004196c0(param_1,SUB41(param_2,0),param_3,param_4);
  }
  return;
}


