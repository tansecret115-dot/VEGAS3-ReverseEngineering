/* Module: vegas30.exe
   Function: FUN_005d17b0
   Address: 005d17b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005d17b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  FUN_005b83b0(*(undefined4 *)(param_1 + 8),1);
  uVar1 = _SfList_MoveRange_16(*(undefined4 *)(param_1 + 0x234),param_2,param_3,1);
  FUN_005b84d0(*(undefined4 *)(param_1 + 8),1);
  return uVar1;
}


