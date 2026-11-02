/* Module: sftrans1.dll
   Function: FUN_00477a70
   Address: 00477a70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00477a70(int param_1)

{
  FUN_00478240();
  *(undefined4 *)(param_1 + 0xb0) = 1;
  *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) | 4;
  *(undefined4 *)(param_1 + 0xdc) = 0x3d23d70a;
  *(undefined4 *)(param_1 + 0xe0) = 0x3d23d70a;
  *(undefined4 *)(param_1 + 0xf8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf4) = 0x3f000000;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
  return;
}


