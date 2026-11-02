/* Module: erv23260.dll
   Function: FUN_63805fb0
   Address: 63805fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_63805fb0(int param_1)

{
  *(undefined4 *)(param_1 + 0x8b8) = 0;
  if (*(int *)(param_1 + 0x8b4) != 0) {
    FUN_63806690(param_1);
    *(undefined4 *)(param_1 + 0x8b4) = 0;
  }
  return 0;
}


