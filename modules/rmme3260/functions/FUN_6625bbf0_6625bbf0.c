/* Module: rmme3260.dll
   Function: FUN_6625bbf0
   Address: 6625bbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_6625bbf0(int param_1)

{
  if (*(HANDLE *)(param_1 + 8) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(HANDLE *)(param_1 + 0xc) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 0;
}


