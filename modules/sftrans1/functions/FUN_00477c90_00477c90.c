/* Module: sftrans1.dll
   Function: FUN_00477c90
   Address: 00477c90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00477c90(int param_1)

{
  FUN_00478240();
  *(undefined4 *)(param_1 + 0x120) = 0x3d4ccccd;
  *(undefined4 *)(param_1 + 0x124) = 0x3d4ccccd;
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 4;
  *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) | 4;
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 400) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x19c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x104) = 1;
  *(undefined4 *)(param_1 + 0x118) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x114) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x110) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x11c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb0) = 1;
  *(undefined4 *)(param_1 + 0xf8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0x3d23d70a;
  *(undefined4 *)(param_1 + 0xe0) = 0x3d23d70a;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
  return;
}


