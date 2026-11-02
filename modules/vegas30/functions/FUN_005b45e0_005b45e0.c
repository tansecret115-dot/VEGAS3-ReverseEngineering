/* Module: vegas30.exe
   Function: FUN_005b45e0
   Address: 005b45e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005b45e0(int *param_1,undefined4 param_2)

{
  if (*param_1 == 0) {
    _SfList_CreateExZ_32(param_1,param_2,0x10,0x10,0x40000004,0,0,0);
    return;
  }
  _SfList_DeleteList_16(*param_1,0,0xffffffff,0);
  return;
}


