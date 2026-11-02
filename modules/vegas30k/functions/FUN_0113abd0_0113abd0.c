/* Module: vegas30k.dll
   Function: FUN_0113abd0
   Address: 0113abd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0113abd0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_2[2] == -0x228) {
    if (param_2[1] == 0x430) {
      uVar1 = FUN_0113a990(param_1,*param_2);
      return uVar1;
    }
    if (param_2[1] == 0x436) {
      uVar1 = FUN_0113ab50(param_1,*param_2);
    }
  }
  else if (param_2[2] == -0x227) {
    if (param_2[1] == 0x430) {
      uVar1 = FUN_0113a760(param_1,*param_2);
      return uVar1;
    }
    if (param_2[1] == 0x436) {
      uVar1 = FUN_0113aa40(param_1,*param_2);
      return uVar1;
    }
  }
  return uVar1;
}


