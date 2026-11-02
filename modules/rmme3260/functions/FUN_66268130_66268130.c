/* Module: rmme3260.dll
   Function: FUN_66268130
   Address: 66268130
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66268130(int param_1)

{
  if (*(int *)(param_1 + 0x2c) != 0) {
    _findclose(*(int *)(param_1 + 0x2c));
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}


