/* Module: g2plug.dll
   Function: FUN_5f80c880
   Address: 5f80c880
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f80c880(uint param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  
  switch(param_2) {
  case 0x839:
    uVar1 = 1;
    break;
  case 0x83a:
    uVar1 = 2;
    break;
  case 0x83b:
    uVar1 = 8;
    break;
  case 0x83c:
    uVar1 = 0x20;
    break;
  case 0x83d:
    uVar1 = 0x40;
    break;
  case 0x83e:
    uVar1 = 0x80;
    break;
  case 0x83f:
    uVar1 = 0x100;
    break;
  default:
    return param_1;
  }
  if (param_3 == 0) {
    return param_1 & ~uVar1;
  }
  return param_1 | uVar1;
}


