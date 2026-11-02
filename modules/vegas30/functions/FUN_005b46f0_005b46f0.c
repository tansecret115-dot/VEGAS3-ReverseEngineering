/* Module: vegas30.exe
   Function: FUN_005b46f0
   Address: 005b46f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005b46f0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((*param_1 == 0) &&
     (iVar1 = _SfList_CreateExZ_32(param_1,8,0x10,0x10,0x40000004,0,0,0), iVar1 < 0)) {
    return;
  }
  local_8 = param_2;
  local_4 = param_3;
  _SfList_InsertList_16(*param_1,0xffffffff,&local_8,1);
  return;
}


