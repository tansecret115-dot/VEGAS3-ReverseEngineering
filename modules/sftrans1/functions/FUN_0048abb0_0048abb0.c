/* Module: sftrans1.dll
   Function: FUN_0048abb0
   Address: 0048abb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0048abb0(int param_1)

{
  if (*(int *)(param_1 + 0x128) != 0) {
    return **(undefined4 **)(param_1 + 0xac);
  }
  return **(undefined4 **)(param_1 + 0xa8);
}


