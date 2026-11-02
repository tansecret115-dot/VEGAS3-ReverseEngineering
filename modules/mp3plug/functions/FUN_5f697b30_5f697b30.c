/* Module: mp3plug.dll
   Function: FUN_5f697b30
   Address: 5f697b30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f697b30(int param_1)

{
  int iVar1;
  
  WaitForSingleObject(*(HANDLE *)(param_1 + 0x1d0),0xffffffff);
  if (*(int *)(param_1 + 0x130) == 0) {
    iVar1 = *(int *)(param_1 + 0x1b4) + 1;
    *(int *)(param_1 + 0x1b4) = iVar1;
    if (iVar1 == 10) {
      *(undefined4 *)(param_1 + 0x1b4) = 0;
    }
    *(int *)(param_1 + 0x1bc) = *(int *)(param_1 + 0x1bc) + -1;
    SetEvent(*(HANDLE *)(param_1 + 8));
  }
  ReleaseMutex(*(HANDLE *)(param_1 + 0x1d0));
  return 0;
}


