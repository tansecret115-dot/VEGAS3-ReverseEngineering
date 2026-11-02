/* Module: rmbe3260.dll
   Function: FUN_6601ff50
   Address: 6601ff50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6601ff50(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2;
  }
  (**(code **)(*(int *)(param_1 + 4) + 0x10))
            (param_1 + 4,iVar1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  return;
}


