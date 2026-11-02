/* Module: vegas30k.dll
   Function: FUN_010c5d70
   Address: 010c5d70
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_010c5d70(uint *param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  _SYSTEM_INFO local_28;
  
  (*(code *)PTR_FUN_01206554)(&DAT_0128eb98);
  sVar2 = 20000;
  do {
    sVar2 = sVar2 + -1;
  } while (sVar2 != 0);
  uVar1 = (*(code *)PTR_FUN_01206558)(&DAT_0128eb98);
  iVar3 = 0x28;
  *param_1 = uVar1;
  GetSystemInfo(&local_28);
  if (local_28.dwProcessorType != 0x182) {
    iVar3 = 0x15;
  }
  uVar1 = (uint)(iVar3 * 20000) / uVar1;
  if ((uVar1 < 0xca) && (0xc5 < uVar1)) {
    return 200;
  }
  if ((uVar1 < 0xa8) && (0xa3 < uVar1)) {
    return 0xa6;
  }
  if ((uVar1 < 0x98) && (0x93 < uVar1)) {
    return 0x96;
  }
  if ((uVar1 < 0x7a) && (0x75 < uVar1)) {
    return 0x78;
  }
  if ((uVar1 < 0x66) && (0x61 < uVar1)) {
    return 100;
  }
  if ((uVar1 < 0x5c) && (0x57 < uVar1)) {
    return 0x5a;
  }
  if ((uVar1 < 0x4d) && (0x48 < uVar1)) {
    return 0x4b;
  }
  if ((uVar1 < 0x44) && (0x3f < uVar1)) {
    return 0x42;
  }
  if ((uVar1 < 0x3e) && (0x39 < uVar1)) {
    return 0x3c;
  }
  if ((uVar1 < 0x34) && (0x2f < uVar1)) {
    return 0x32;
  }
  if ((uVar1 < 0x23) && (0x1e < uVar1)) {
    return 0x21;
  }
  if ((uVar1 < 0x1b) && (0x16 < uVar1)) {
    return 0x19;
  }
  if ((uVar1 < 0x12) && (0xd < uVar1)) {
    uVar1 = 0x10;
  }
  return uVar1;
}


