/* Module: vegas30k.dll
   Function: FUN_01136550
   Address: 01136550
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_01136550(int param_1)

{
  if (*(int *)(param_1 + 0x164) == 0) {
    return 0;
  }
  FUN_0113d1e0();
  (**(code **)(**(int **)(param_1 + 0x18) + 0x14))(*(int **)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x164) = 0;
  return 1;
}


