/* Module: vegas30k.dll
   Function: FUN_0118c560
   Address: 0118c560
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0118c560(int param_1)

{
  if ((*(uint *)(param_1 + 0x50) & 0x22) != 0) {
    FUN_0118c5a0(*(undefined4 *)(param_1 + 0x164),0x4e00d);
    return 0;
  }
  if ((*(uint *)(param_1 + 0x50) & 0x400) != 0) {
    FUN_0118bf50(*(undefined4 *)(param_1 + 0x164),0x4e00d);
  }
  return 0;
}


