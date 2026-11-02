/* Module: rmbe3260.dll
   Function: FUN_66050c60
   Address: 66050c60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66050c60(int param_1)

{
  if (*(LPCVOID *)(param_1 + 0x14) != (LPCVOID)0x0) {
    UnmapViewOfFile(*(LPCVOID *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}


