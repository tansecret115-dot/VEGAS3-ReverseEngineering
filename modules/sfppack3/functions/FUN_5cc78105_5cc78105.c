/* Module: sfppack3.dll
   Function: FUN_5cc78105
   Address: 5cc78105
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cc78105(int param_1)

{
  if (*(int *)(param_1 + 0x40) != 0) {
    CoTaskMemFree(*(LPVOID *)(param_1 + 0x44));
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return;
}


