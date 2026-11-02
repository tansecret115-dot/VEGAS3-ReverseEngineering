/* Module: erv23260.dll
   Function: FUN_637f2950
   Address: 637f2950
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_637f2950(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  iVar3 = *param_1;
  if (((iVar3 == 0x12) || (iVar3 == 0x15)) || (iVar3 == 0x16)) {
    if (0x800 < uVar1) {
      return 7;
    }
    if (0x480 < uVar2) {
      return 7;
    }
    if (uVar1 < 0x20) {
      return 7;
    }
    if (uVar2 < 0x20) {
      return 7;
    }
    if ((uVar1 & 0xfffffffc) != uVar1) {
      return 7;
    }
    if ((uVar2 & 0xfffffffc) != uVar2) {
      return 7;
    }
  }
  else {
    if (iVar3 != 0x11) {
      return 8;
    }
    if (((((uVar1 != 0x580) || (uVar2 != 0x480)) && ((uVar1 != 0x2c0 || (uVar2 != 0x240)))) &&
        ((uVar1 != 0x160 || (uVar2 != 0x120)))) && ((uVar1 != 0xb0 || (uVar2 != 0x90)))) {
      if (uVar1 != 0x80) {
        return 7;
      }
      if (uVar2 != 0x60) {
        return 7;
      }
      return 0;
    }
  }
  return 0;
}


