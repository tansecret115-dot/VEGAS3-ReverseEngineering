/* Module: vegas30.exe
   Function: FUN_0058f2e0
   Address: 0058f2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0058f2e0(int param_1)

{
  int iVar1;
  
  FUN_0058ed50(param_1,1);
  _SfQueueDelete_4(param_1 + 0x890);
  param_1 = param_1 + 0x60;
  iVar1 = _SfQueueRemove_8(param_1,0);
  while (iVar1 != 0) {
    if (*(HANDLE *)(iVar1 + 8) != (HANDLE)0x0) {
      CloseHandle(*(HANDLE *)(iVar1 + 8));
    }
    *(undefined4 *)(iVar1 + 8) = 0;
    iVar1 = _SfQueueRemove_8(param_1,0);
  }
  _SfQueueDelete_4(param_1);
  return;
}


