/* Module: vegas30k.dll
   Function: FUN_011d36d0
   Address: 011d36d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011d36d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_LAB_011ec634;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[7] = param_2;
  param_1[4] = 0;
  if (param_2 == (undefined4 *)0x0) {
    param_1[6] = 0;
    param_1[3] = 0;
    return;
  }
  uVar1 = *param_2;
  param_1[6] = 0;
  param_1[3] = uVar1;
  return;
}


