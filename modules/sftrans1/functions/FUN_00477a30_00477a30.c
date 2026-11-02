/* Module: sftrans1.dll
   Function: FUN_00477a30
   Address: 00477a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00477a30(int param_1)

{
  FUN_00478240();
  *(undefined4 *)(param_1 + 0x80) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x7c) = 0x3f000000;
  *(undefined4 *)(param_1 + 0x78) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  return;
}


