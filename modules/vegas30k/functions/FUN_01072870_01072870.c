/* Module: vegas30k.dll
   Function: FUN_01072870
   Address: 01072870
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01072870(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_4 = param_3;
  local_c = param_2;
  local_8 = param_4;
  iVar1 = _SfList_InsertList_16(*(undefined4 *)(param_1 + 0x14),0xffffffff,&local_c,1);
  if ((-1 < iVar1) && (param_2 != 0)) {
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + param_4;
  }
  return;
}


