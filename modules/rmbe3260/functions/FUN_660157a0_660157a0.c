/* Module: rmbe3260.dll
   Function: FUN_660157a0
   Address: 660157a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_660157a0(int param_1)

{
  if (param_1 < 0xffc2) {
    if (param_1 == 0xffc1) {
      return 0x8004008a;
    }
    if (param_1 == 0) {
      return 0;
    }
  }
  else {
    switch(param_1) {
    case 0xfff1:
      return 0x80040251;
    case 0xfff3:
      return 0x8007000e;
    case 0xfff4:
      return 0x80040248;
    case 0xfff5:
      return 0x80040252;
    case 0xfff6:
      return 0x80040253;
    case 0xfff7:
    case 0xfffd:
      return 0x80040254;
    case 0xfff8:
      return 0x80004001;
    case 0xfff9:
      return 0x80070057;
    case 0xfffa:
      return 0x80040242;
    case 0xfffb:
      return 0x80040005;
    }
  }
  return 0x80004005;
}


