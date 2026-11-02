/* Module: sftrans1.dll
   Function: FUN_00477d50
   Address: 00477d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00477d50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_00478240();
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined4 *)(param_1 + 400) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x19c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0x3f400000;
  *(undefined4 *)(param_1 + 0x84) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0xe;
  puVar2 = (undefined4 *)(param_1 + 0x18);
  for (iVar1 = 0x14; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x4c) = 0x3ff00000;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 4;
  *(undefined4 *)(param_1 + 0x6c) = 0x3fe00000;
  *(undefined4 *)(param_1 + 0x104) = 1;
  *(undefined4 *)(param_1 + 0x120) = 0x3e800000;
  *(undefined4 *)(param_1 + 0x124) = 0x3e4ccccd;
  *(undefined4 *)(param_1 + 0x118) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x114) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x110) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xb0) = 1;
  *(undefined4 *)(param_1 + 0xf8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf4) = 0x3e99999a;
  *(uint *)(param_1 + 0x100) = *(uint *)(param_1 + 0x100) | 4;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0x3dcccccd;
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xe8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xe4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xf0) = 0x3f800000;
  return;
}


