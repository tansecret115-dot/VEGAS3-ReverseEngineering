/* Module: vegas30.exe
   Function: FUN_004a9cf0
   Address: 004a9cf0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004a9cf0(uint param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    switch(param_2) {
    case 2:
      return param_1 & 1;
    case 3:
      return param_1 & 2;
    case 4:
      return param_1 & 4;
    case 5:
      uVar1 = param_1 & 8;
    }
    return uVar1;
  }
  return 1;
}


