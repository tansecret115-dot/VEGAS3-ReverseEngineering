/* Module: erv23260.dll
   Function: FUN_6380c3e0
   Address: 6380c3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_6380c3e0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_1) {
  case 0:
    return 2;
  case 1:
    uVar1 = 3;
    break;
  case 10:
    return 0;
  case 0xb:
    return 1;
  }
  return uVar1;
}


