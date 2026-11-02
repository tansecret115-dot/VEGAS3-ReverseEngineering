/* Module: sftrans1.dll
   Function: FUN_005290b0
   Address: 005290b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_005290b0(uint param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if ((param_1 & 8) != 0) {
    uVar1 = 8;
  }
  if ((param_1 & 0x100) != 0) {
    uVar1 = uVar1 | 0x100;
  }
  if ((param_1 & 0x200) != 0) {
    uVar1 = uVar1 | 0x200;
  }
  if ((param_1 & 0x400) != 0) {
    uVar1 = uVar1 | 0x400;
  }
  if ((param_1 & 0x800) != 0) {
    uVar1 = uVar1 | 0x800;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((param_1 & 2) != 0) {
    uVar1 = uVar1 | 2;
  }
  return uVar1;
}


