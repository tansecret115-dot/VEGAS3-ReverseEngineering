/* Module: aviplug.dll
   Function: FUN_5f94bb20
   Address: 5f94bb20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f94bb20(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = param_1 & 0x700ef00;
  if (uVar2 < 0x1002301) {
    if (uVar2 != 0x1002300) {
      if (0x1002100 < uVar2) {
        if (uVar2 == 0x1002200) {
          return 2;
        }
        return uVar1;
      }
      if (((uVar2 != 0x1002100) && (uVar2 != 0x200)) && (uVar2 != 0x1002000)) {
        return uVar1;
      }
    }
    return 1;
  }
  if (uVar2 != 0x1002400) {
    if (uVar2 == 0x1002500) {
      return 1;
    }
    if (uVar2 != 0x1002600) {
      return uVar1;
    }
  }
  return 2;
}


