/* Module: g2plug.dll
   Function: FUN_5f812730
   Address: 5f812730
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f812730(undefined4 param_1,uint param_2)

{
  switch(param_1) {
  case 0x3ee:
    return param_2 & 1;
  case 0x3ef:
    return param_2 & 2;
  case 0x3f0:
    return param_2 & 4;
  default:
    return 0;
  case 0x3f3:
    return param_2 & 0x20;
  case 0x408:
    return param_2 & 0x40;
  case 0x409:
    return param_2 & 0x80;
  case 0x40a:
    return param_2 & 0x100;
  case 0x40b:
    return param_2 & 8;
  }
}


