/* Module: vegas30k.dll
   Function: FUN_011c3820
   Address: 011c3820
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_011c3820(int param_1)

{
  if ((*(uint *)(param_1 + 0x228) & 0x20) == 0) {
    return 1;
  }
  *(undefined4 *)(param_1 + 0x1c8) = 0x3bd;
  *(uint *)(param_1 + 0x228) = *(uint *)(param_1 + 0x228) & 0xfffffff7 | 0x10;
  return 0;
}


