/* Module: extmondrv.dll
   Function: FUN_00401b40
   Address: 00401b40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401b40(int param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  if (*(int *)(param_1 + 0x18) != 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 0x84) != 0) {
      *(undefined4 *)(param_1 + 0x88) = 1;
      SetEvent(*(HANDLE *)(param_1 + 0x80));
      WaitForSingleObject(*(HANDLE *)(param_1 + 0x84),0xffffffff);
      *(undefined4 *)(param_1 + 0x84) = 0;
      *(undefined4 *)(param_1 + 0x8c) = 0;
      *(undefined4 *)(param_1 + 0x88) = 0;
    }
    (**(code **)(**(int **)(param_1 + 0x14) + 0x50))(*(int **)(param_1 + 0x14),0);
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x48) = 0xc0c01f40;
    *(undefined4 *)(param_1 + 0x4c) = 0xc0c01f40;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0xffa0ff3f;
    *(undefined4 *)(param_1 + 0x54) = 0xffa0ff3f;
    *(undefined4 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x90));
  return 0;
}


