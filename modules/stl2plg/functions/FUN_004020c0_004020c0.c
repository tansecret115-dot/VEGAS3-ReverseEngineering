/* Module: stl2plg.dll
   Function: FUN_004020c0
   Address: 004020c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004020c0(int param_1)

{
  if (*(HANDLE *)(param_1 + 0xc) != (HANDLE)0x0) {
    CloseHandle(*(HANDLE *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  FUN_00402650(param_1 + 0x28);
  return 0;
}


