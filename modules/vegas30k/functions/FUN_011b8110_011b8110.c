/* Module: vegas30k.dll
   Function: FUN_011b8110
   Address: 011b8110
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011b8110(int param_1,undefined4 *param_2)

{
  _SfList_AllocAndInsertItem_20(*(undefined4 *)(param_1 + 0x14),param_2,*param_2,0xffffffff,0);
  if (*(undefined4 **)(param_1 + 0x14) == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    return;
  }
  *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)(param_1 + 0x14);
  return;
}


