/* Module: vegas30.exe
   Function: FUN_00524200
   Address: 00524200
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00524200(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  switch(*(undefined4 *)(param_1 + 0x104)) {
  case 0:
    return 0;
  case 1:
    return 1;
  case 2:
    return 2;
  case 3:
    return 4;
  case 4:
    return 5;
  case 5:
    return 6;
  case 6:
    uVar1 = 7;
    break;
  case 7:
    return 3;
  }
  return uVar1;
}


