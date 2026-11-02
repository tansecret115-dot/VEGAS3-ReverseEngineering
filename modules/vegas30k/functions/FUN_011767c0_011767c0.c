/* Module: vegas30k.dll
   Function: FUN_011767c0
   Address: 011767c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_011767c0(undefined4 *param_1)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_LAB_011ea424;
  param_1[1] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x30] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x34] = 0;
  param_1[0x14] = 0;
  param_1[0x5c] = 10000000;
  param_1[0x66] = 0x2a69c000;
  param_1[0x36] = 0xffffffff;
  param_1[0x3a] = 0xffffffff;
  param_1[0x1a] = 0;
  param_1[0x20] = 0xe2556b28;
  param_1[0x35] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x17] = param_1[0x17] & 0xfffffffd;
  param_1[0x77] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x80] = 0;
  param_1[0x7f] = 0;
  param_1[0x31] = 0;
  param_1[0x5d] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x67] = 0xc9;
  param_1[0x37] = 0xffffffff;
  param_1[0x3b] = 0xffffffff;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x42] = 0;
  param_1[0x44] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0x3ff00000;
  param_1[0x21] = 0x403df853;
  uVar1 = ftol();
  param_1[0x28] = 0;
  param_1[0x22] = (int)uVar1;
  param_1[0x24] = 0xffffffff;
  param_1[0x26] = 0xffffffff;
  param_1[0x29] = 0;
  param_1[0x23] = (int)((ulonglong)uVar1 >> 0x20);
  param_1[0x25] = 0xffffffff;
  param_1[0x27] = 0xffffffff;
  return param_1;
}


