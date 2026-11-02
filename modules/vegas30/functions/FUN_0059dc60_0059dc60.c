/* Module: vegas30.exe
   Function: FUN_0059dc60
   Address: 0059dc60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0059dc60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  switch(param_3) {
  case 0:
    FUN_0059da70(param_1,param_2,param_4);
    return 0;
  case 1:
    FUN_0059d8c0(param_1,param_2,param_4);
    return 0;
  case 2:
    uVar1 = 0;
    break;
  case 3:
    uVar1 = 0xc0400000;
    break;
  case 4:
    uVar1 = 0xc0c00000;
    break;
  default:
    goto switchD_0059dc69_default;
  }
  FUN_0059d3c0(param_1,param_2,param_4,uVar1);
switchD_0059dc69_default:
  return 0;
}


