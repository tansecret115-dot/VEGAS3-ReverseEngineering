/* Module: g2plug.dll
   Function: FUN_5f812fd0
   Address: 5f812fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f812fd0(uint param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  switch(param_2) {
  case 0x3ee:
    uVar1 = 1;
    break;
  case 0x3ef:
    uVar1 = 2;
    break;
  case 0x3f0:
    uVar1 = 4;
    break;
  default:
    return param_1;
  case 0x3f3:
    uVar1 = 0x20;
    break;
  case 0x408:
    uVar1 = 0x40;
    break;
  case 0x409:
    uVar1 = 0x80;
    break;
  case 0x40a:
    uVar1 = 0x100;
    break;
  case 0x40b:
    uVar1 = 8;
  }
  if (param_3 != 0) {
    return param_1 | uVar1;
  }
  return param_1 & ~uVar1;
}


