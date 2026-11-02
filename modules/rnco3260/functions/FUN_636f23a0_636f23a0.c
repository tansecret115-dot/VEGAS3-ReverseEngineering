/* Module: rnco3260.dll
   Function: FUN_636f23a0
   Address: 636f23a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_636f23a0(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 4:
  case 8:
  case 0xc:
    return 0x18;
  case 1:
  case 5:
  case 9:
  case 0xd:
    return 0x20;
  case 2:
  case 6:
  case 10:
  case 0xe:
  case 0x13:
  case 0x14:
  case 0x15:
    return 0x10;
  case 3:
  case 7:
  case 0xb:
  case 0xf:
    return 8;
  case 0x10:
  case 0x11:
    return 0xc;
  case 0x12:
    return 9;
  default:
    return 0;
  }
}


