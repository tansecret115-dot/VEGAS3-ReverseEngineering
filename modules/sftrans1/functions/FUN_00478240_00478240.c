/* Module: sftrans1.dll
   Function: FUN_00478240
   Address: 00478240
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00478240(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = param_1;
  for (iVar1 = 0x72; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  param_1[0x56] = 0;
  param_1[1] = 0xb;
  param_1[2] = 0x1c8;
  param_1[0x6a] = 0xd1745d17;
  param_1[0x6b] = 0x3fed1745;
  param_1[0x6c] = 1;
  param_1[0x22] = 0;
  param_1[0x23] = 0x3ff00000;
  param_1[0x57] = 10;
  param_1[0x26] = 0;
  param_1[0x27] = 0x3ff00000;
  param_1[0x24] = 0;
  param_1[0x25] = 0x3ff00000;
  param_1[0x28] = 0;
  param_1[6] = 0;
  param_1[0x29] = 0x3ff00000;
  param_1[3] = 1;
  param_1[7] = 0x3ff00000;
  param_1[5] = 1;
  param_1[0x1c] = 2;
  param_1[0x40] = param_1[0x40] | 4;
  param_1[0x37] = 0x3cf5c28f;
  param_1[0x38] = 0x3cf5c28f;
  param_1[0x1d] = 2;
  param_1[0x1a] = 0;
  param_1[0x4b] = param_1[0x4b] | 4;
  param_1[0x2b] = 0xc;
  param_1[0x66] = 0x3f800000;
  param_1[0x65] = 0x3f800000;
  param_1[100] = 0x3f800000;
  param_1[0x67] = 0x3f800000;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x1b] = 0x3fe00000;
  param_1[0x2c] = 0;
  param_1[0x3e] = 0x3f800000;
  param_1[0x3d] = 0x3e4ccccd;
  param_1[0x3b] = 0;
  param_1[0x3a] = 0;
  param_1[0x39] = 0;
  param_1[0x3c] = 0x3f800000;
  param_1[0x41] = 0;
  param_1[0x48] = 0x3d4ccccd;
  param_1[0x49] = 0x3dcccccd;
  param_1[0x46] = 0x3f800000;
  param_1[0x45] = 0x3f800000;
  param_1[0x44] = 0;
  param_1[0x47] = 0x3f800000;
  return;
}


