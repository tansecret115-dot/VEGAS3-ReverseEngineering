/* Module: vegas30k.dll
   Function: FUN_011c1770
   Address: 011c1770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011c1770(undefined4 param_1)

{
  switch(param_1) {
  case 0:
    return 0;
  case 1:
  case 4:
    return 0x80040964;
  case 2:
    return 0x800404b0;
  default:
    return 0x8000ffff;
  case 6:
    return 0x80040037;
  case 7:
    return 0x8007000e;
  case 8:
  case 0x20:
    return 0x8004e000;
  }
}


