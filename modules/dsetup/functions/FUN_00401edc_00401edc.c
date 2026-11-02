/* Module: dsetup.dll
   Function: FUN_00401edc
   Address: 00401edc
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00401edc(uint param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = param_1 & 0xf0f;
  if (uVar1 < 0x103) {
    if (uVar1 == 0x102) {
      return 4;
    }
    if (uVar1 < 2) {
      return 1;
    }
    if (uVar1 == 2) {
      return 3;
    }
    if (uVar1 < 3) {
      return 0;
    }
    if (uVar1 < 5) {
      return 6;
    }
    if (uVar1 == 5) {
      return 4;
    }
    bVar2 = uVar1 == 0x101;
  }
  else {
    if (uVar1 < 0x103) {
      return 0;
    }
    if (uVar1 < 0x105) {
      return 7;
    }
    if (uVar1 == 0x105) {
      return 2;
    }
    if (uVar1 == 0x202) {
      return 5;
    }
    bVar2 = uVar1 == 0x203;
  }
  if (!bVar2) {
    return 0;
  }
  return 2;
}


