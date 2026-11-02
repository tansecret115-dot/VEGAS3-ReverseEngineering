/* Module: pngu3266.dll
   Function: FUN_6061ce80
   Address: 6061ce80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6061ce80(int param_1)

{
  if (*(LPCVOID *)(param_1 + 0x14) != (LPCVOID)0x0) {
    UnmapViewOfFile(*(LPCVOID *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}


