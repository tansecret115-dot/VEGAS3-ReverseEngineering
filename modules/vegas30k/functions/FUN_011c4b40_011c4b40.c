/* Module: vegas30k.dll
   Function: FUN_011c4b40
   Address: 011c4b40
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011c4b40(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  *(uint *)(param_1 + 0x228) = uVar1 & 0xfffffffd;
  if ((uVar1 & 0x20) != 0) {
    *(undefined4 *)(param_1 + 0x1c8) = 0;
    CloseHandle(*(HANDLE *)(param_1 + 0x138));
    *(undefined4 *)(param_1 + 0x138) = 0;
    *(undefined4 *)(param_1 + 0x1b8) = 0;
    if (*(int *)(param_1 + 0x128) != 0) {
      _SfList_Destroy_4(*(int *)(param_1 + 0x128));
    }
    *(undefined4 *)(param_1 + 0x128) = 0;
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1e8));
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x1d0));
  }
  return 0;
}


