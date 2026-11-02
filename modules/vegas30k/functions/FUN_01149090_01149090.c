/* Module: vegas30k.dll
   Function: FUN_01149090
   Address: 01149090
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01149090(int param_1)

{
  if ((*(byte *)(param_1 + 0x4a4) & 8) != 0) {
    FUN_01147990(param_1);
  }
  *(undefined4 *)(param_1 + 0x4a0) = 0x7f88;
  *(uint *)(param_1 + 0x4a4) = *(uint *)(param_1 + 0x4a4) & 0xfffffef3;
  return 0;
}


