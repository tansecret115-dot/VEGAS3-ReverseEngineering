/* Module: sfcd.cdd
   Function: FUN_00419370
   Address: 00419370
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_00419370(uint param_1)

{
  switch(param_1 & 0xff) {
  case 0:
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 8:
  case 9:
  case 0xb:
  case 0xd:
  case 0xe:
    return 0x8004e0c8;
  default:
    return param_1;
  }
}


