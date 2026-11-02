/* Module: vegas30k.dll
   Function: FUN_010609f0
   Address: 010609f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_010609f0(int param_1)

{
  if (*(LPCVOID *)(param_1 + 0x29c) != (LPCVOID)0x0) {
    UnmapViewOfFile(*(LPCVOID *)(param_1 + 0x29c));
    *(undefined4 *)(param_1 + 0x29c) = 0;
    *(undefined4 *)(param_1 + 0x2a0) = 0;
    *(undefined4 *)(param_1 + 0x2a4) = 0;
    *(undefined4 *)(param_1 + 0x2a8) = 0;
    return 0;
  }
  return 1;
}


