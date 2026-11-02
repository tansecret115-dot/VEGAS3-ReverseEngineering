/* Module: vegas30k.dll
   Function: FUN_011ae320
   Address: 011ae320
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011ae320(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_LAB_011eb3b0;
  param_1[3] = param_2;
  uVar1 = *(undefined4 *)(param_2 + 0x68c);
  param_1[1] = 0;
  param_1[2] = uVar1;
  return;
}


