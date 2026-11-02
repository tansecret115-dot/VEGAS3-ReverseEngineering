/* Module: encn3260.dll
   Function: FUN_664cdc80
   Address: 664cdc80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664cdc80(int param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    return *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x10);
  }
  return 0;
}


