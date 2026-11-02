/* Module: stl2plg.dll
   Function: FUN_00403170
   Address: 00403170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00403170(int param_1)

{
  CloseHandle(*(HANDLE *)(param_1 + 0x3b8));
  *(undefined4 *)(param_1 + 0x3b8) = 0xffffffff;
  return 0;
}


