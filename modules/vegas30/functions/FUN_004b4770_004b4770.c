/* Module: vegas30.exe
   Function: FUN_004b4770
   Address: 004b4770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
FUN_004b4770(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            )

{
  undefined4 uVar1;
  
  uVar1 = 0;
  switch(param_3) {
  case 0x47e:
    uVar1 = FUN_004b45b0(param_1,param_2);
    return uVar1;
  default:
    uVar1 = 1;
    break;
  case 0x480:
    if (param_5 == 1) {
      uVar1 = FUN_004b4620(param_1,param_2);
      return uVar1;
    }
    break;
  case 0x4aa:
  case 0x4ab:
  case 0x4ac:
    uVar1 = FUN_004b46a0(param_1,param_2);
    return uVar1;
  }
  return uVar1;
}


