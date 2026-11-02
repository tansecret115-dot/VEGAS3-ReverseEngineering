/* Module: vegas30.exe
   Function: FUN_00478140
   Address: 00478140
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00478140(int param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_8 = *(undefined4 *)(param_1 + 0x28);
  local_4 = *(undefined4 *)(param_1 + 0x2c);
  local_10 = 0;
  local_c = 0;
  _SfList_DeleteList_16(*(undefined4 *)(param_1 + 0x30),0,0xffffffff,1);
  _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x30),0,&local_10,1);
  return;
}


