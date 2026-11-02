/* Module: vegas30.exe
   Function: FUN_005d9da0
   Address: 005d9da0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d9da0(undefined4 param_1,undefined4 *param_2,int param_3)

{
  FUN_005b83b0(param_1,1);
  _SfList_InsertList_16(*param_2,0xffffffff,param_3 + 0x30,1);
  *(int *)(param_3 + 0x38) = *(int *)(param_3 + 0x38) + 1;
  FUN_005b84d0(param_1,1);
  return 0;
}


