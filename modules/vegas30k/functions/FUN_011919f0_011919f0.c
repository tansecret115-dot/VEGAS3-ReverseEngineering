/* Module: vegas30k.dll
   Function: FUN_011919f0
   Address: 011919f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011919f0(int param_1)

{
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined1 *)(param_1 + 0x138) = 0;
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) & 0xfffffeff;
  return 0;
}


