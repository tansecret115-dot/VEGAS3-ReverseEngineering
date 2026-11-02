/* Module: aifplug.dll
   Function: FUN_5fbd1c50
   Address: 5fbd1c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5fbd1c50(int param_1,undefined4 *param_2,uint param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  
  iVar1 = FUN_5fbd1fd0(param_1);
  if (-1 < iVar1) {
    FUN_5fbd2820(*(int *)(*(int *)(param_1 + 0x248) + 0x20),param_2,param_3,param_5);
  }
  return;
}


