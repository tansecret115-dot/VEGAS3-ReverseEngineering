/* Module: vegas30.exe
   Function: FUN_00440dc0
   Address: 00440dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00440dc0(int param_1)

{
  if (*(HANDLE *)(param_1 + 0x134) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 0x134));
    *(undefined4 *)(param_1 + 0x134) = 0xffffffff;
  }
  return 0;
}


