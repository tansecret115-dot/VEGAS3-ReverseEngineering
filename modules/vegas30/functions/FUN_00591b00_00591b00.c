/* Module: vegas30.exe
   Function: FUN_00591b00
   Address: 00591b00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00591b00(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 0x3e9:
  case 0x3ea:
  case 0x3ed:
    return 1;
  case 0x3eb:
  case 0x3ec:
  case 0x3ee:
    uVar1 = 2;
  }
  return uVar1;
}


