/* Module: encn3260.dll
   Function: FUN_664d8f70
   Address: 664d8f70
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_664d8f70(int param_1)

{
  if (*(int *)(param_1 + 0x24) == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  return 1;
}


