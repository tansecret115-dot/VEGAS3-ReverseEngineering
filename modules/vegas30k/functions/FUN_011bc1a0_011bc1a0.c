/* Module: vegas30k.dll
   Function: FUN_011bc1a0
   Address: 011bc1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011bc1a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x2d0) = *(undefined4 *)(param_1 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 0x2c8);
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  return;
}


