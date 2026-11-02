/* Module: sfxpfx1.dll
   Function: FUN_5c97c623
   Address: 5c97c623
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c97c623(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    CoTaskMemFree(*(LPVOID *)(param_1 + 0x44));
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}


