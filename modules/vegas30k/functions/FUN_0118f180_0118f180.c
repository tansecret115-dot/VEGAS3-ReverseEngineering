/* Module: vegas30k.dll
   Function: FUN_0118f180
   Address: 0118f180
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0118f180(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x28) != 0) {
      syncoutClose(*(int *)(param_1 + 0x28));
      syncoutFreeHandle(*(undefined4 *)(param_1 + 0x28));
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffd;
    SetEvent(*(HANDLE *)(param_1 + 0x54));
    WaitForSingleObject(*(HANDLE *)(param_1 + 0x50),0xffffffff);
    CloseHandle(*(HANDLE *)(param_1 + 0x54));
    *(undefined4 *)(param_1 + 0x54) = 0;
    CloseHandle(*(HANDLE *)(param_1 + 0x50));
    *(undefined4 *)(param_1 + 0x50) = 0;
    uVar1 = 0;
  }
  return uVar1;
}


