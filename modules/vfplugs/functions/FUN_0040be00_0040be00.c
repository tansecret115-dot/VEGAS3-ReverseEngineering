/* Module: vfplugs.dll
   Function: FUN_0040be00
   Address: 0040be00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_0040be00(undefined4 *param_1)

{
  *(undefined1 *)((int)param_1 + 0x17) = 1;
  param_1[0xf] = 1;
  param_1[0x10] = 1;
  *param_1 = 100;
  param_1[4] = 400;
  *(undefined1 *)(param_1 + 6) = 7;
  *(undefined1 *)((int)param_1 + 0x19) = 0;
  *(undefined1 *)((int)param_1 + 0x1a) = 0;
  *(undefined1 *)((int)param_1 + 0x1b) = 0;
  param_1[0x19] = 0x3f800000;
  param_1[0x1a] = 0x3f800000;
  _mbscpy((uchar *)(param_1 + 7),(uchar *)"Arial");
  param_1[0x26] = 0x3cf5c28f;
  param_1[0x27] = 0x3cf5c28f;
  param_1[0x17] = 0x3f800000;
  param_1[0x16] = 0x3f800000;
  param_1[0x15] = 0x3f800000;
  param_1[0x18] = 0x3f800000;
  param_1[0x2d] = 0x3f800000;
  param_1[0x35] = 0x3f800000;
  param_1[0x34] = 0x3f800000;
  param_1[0x36] = 0x3f800000;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x1b] = 0;
  param_1[0x2f] = param_1[0x2f] | 4;
  param_1[0x2b] = 0x3f4ccccd;
  param_1[0x30] = 0;
  param_1[0x37] = 0x3d4ccccd;
  param_1[0x38] = 0x3dcccccd;
  param_1[0x3a] = param_1[0x3a] | 4;
  param_1[0x33] = 0;
  return 0;
}


