/* Module: sftrans1.dll
   Function: FUN_00477ae0
   Address: 00477ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00477ae0(int param_1)

{
  FUN_00478240();
  *(undefined4 *)(param_1 + 0x104) = 1;
  *(undefined4 *)(param_1 + 0x120) = 0x3eb33333;
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 4;
  *(undefined4 *)(param_1 + 0x124) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x114) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x110) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11c) = 0x3f800000;
  return;
}


