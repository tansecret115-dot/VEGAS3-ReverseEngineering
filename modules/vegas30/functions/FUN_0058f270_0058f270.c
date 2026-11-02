/* Module: vegas30.exe
   Function: FUN_0058f270
   Address: 0058f270
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0058f270(int param_1)

{
  int iVar1;
  
  FUN_0058f170(param_1);
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  if (*(int *)(param_1 + 0x10) != 0) {
    iVar1 = _SfList_Destroy_4(*(int *)(param_1 + 0x10));
    if (iVar1 < 0) {
      return iVar1;
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    iVar1 = _SfList_Destroy_4(*(int *)(param_1 + 0x14));
    if (iVar1 < 0) {
      return iVar1;
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  _SfQueueDelete_4(param_1 + 0x18);
  _SfQueueDelete_4(param_1 + 0x3c);
  return 0;
}


