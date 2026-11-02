/* Module: vegas30.exe
   Function: FUN_004aa8e0
   Address: 004aa8e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004aa8e0(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = param_1 & 0xf0000;
  if (uVar2 < 0x60001) {
    if (uVar2 != 0x60000) {
      if (uVar2 == 0) {
        uVar1 = FUN_004a2bd0(param_1);
        return uVar1;
      }
      if (uVar2 == 0x10000) {
        uVar1 = FUN_004ca940(param_1);
        return uVar1;
      }
      if (uVar2 != 0x40000) {
        return 0;
      }
    }
  }
  else if ((uVar2 != 0xa0000) && (uVar2 != 0xb0000)) {
    return 0;
  }
  return 10;
}


