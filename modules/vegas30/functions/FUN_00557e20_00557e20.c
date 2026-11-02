/* Module: vegas30.exe
   Function: FUN_00557e20
   Address: 00557e20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00557e20(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 1:
    uVar1 = 0x6da8;
    break;
  case 2:
    uVar1 = 0x6da9;
    break;
  default:
    uVar1 = 0x6dac;
    break;
  case 4:
    uVar1 = 0x6daa;
    break;
  case 8:
    uVar1 = 0x6dab;
  }
  _SfLoadString_16(DAT_00647204,uVar1,param_2,param_3);
  return 0;
}


