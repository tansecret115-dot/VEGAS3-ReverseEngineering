/* Module: mp3plug.dll
   Function: FUN_5f713c20
   Address: 5f713c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5f713c20(int param_1)

{
  if (*(LPCVOID *)(param_1 + 0xc) != (LPCVOID)0x0) {
    FUN_5f681ba0(*(LPCVOID *)(param_1 + 0xc));
  }
  if (*(LPCVOID *)(param_1 + 8) != (LPCVOID)0x0) {
    FUN_5f681ba0(*(LPCVOID *)(param_1 + 8));
  }
  return;
}


