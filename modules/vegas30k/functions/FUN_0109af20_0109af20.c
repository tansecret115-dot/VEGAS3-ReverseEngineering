/* Module: vegas30k.dll
   Function: FUN_0109af20
   Address: 0109af20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0109af20(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 == (undefined4 *)0x0) {
    return uVar1;
  }
  if ((param_2 != (undefined4 *)0x0) || (param_2 = param_3, param_3 != (undefined4 *)0x0)) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    uVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}


