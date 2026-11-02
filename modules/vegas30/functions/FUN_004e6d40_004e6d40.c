/* Module: vegas30.exe
   Function: FUN_004e6d40
   Address: 004e6d40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004e6d40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = _SfQueueRemove_8(param_1,0);
  if (iVar1 == 0) {
    return 0;
  }
  do {
    _SfQueueInsert_8(param_2,iVar1);
    iVar2 = iVar2 + 1;
    iVar1 = _SfQueueRemove_8(param_1,0);
  } while (iVar1 != 0);
  return iVar2;
}


