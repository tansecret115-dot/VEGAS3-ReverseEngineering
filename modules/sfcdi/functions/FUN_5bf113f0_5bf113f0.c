/* Module: sfcdi.dll
   Function: FUN_5bf113f0
   Address: 5bf113f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf113f0(uint param_1)

{
  if (param_1 < 0x194) {
    if (param_1 == 0x193) {
      return 0x8004e0e8;
    }
    switch(param_1) {
    case 200:
      return 0;
    case 0xca:
      return 0x8004e0e7;
    case 0xd3:
      return 0x8004e0e6;
    case 0x191:
      return 0x8004e0eb;
    case 0x192:
      return 0x8004e0ea;
    }
  }
  else {
    switch(param_1) {
    case 0x1a1:
      return 0x8004e0f0;
    case 0x1b0:
      return 0x8004e0e3;
    case 0x1b1:
      return 0x8004e0e4;
    case 0x1b2:
      return 0x8004e0e5;
    case 500:
      return 0x8004e0e9;
    }
  }
  return 0x8004e0e2;
}


