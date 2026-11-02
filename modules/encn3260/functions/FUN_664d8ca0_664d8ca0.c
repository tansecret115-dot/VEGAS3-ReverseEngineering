/* Module: encn3260.dll
   Function: FUN_664d8ca0
   Address: 664d8ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664d8ca0(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    _findclose(*(int *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}


