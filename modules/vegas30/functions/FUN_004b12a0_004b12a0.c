/* Module: vegas30.exe
   Function: FUN_004b12a0
   Address: 004b12a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004b12a0(int param_1)

{
  if (param_1 != 0) {
    _SfList_DeleteList_16(param_1,0,0xffffffff,1);
    _SfList_Destroy_4(param_1);
  }
  return 0;
}


