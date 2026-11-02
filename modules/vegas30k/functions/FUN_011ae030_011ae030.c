/* Module: vegas30k.dll
   Function: FUN_011ae030
   Address: 011ae030
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_011ae030(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  *param_1 = &PTR_LAB_011eb394;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = param_2;
  uVar1 = *(undefined4 *)(param_2 + 0x640);
  param_1[1] = 0;
  param_1[4] = uVar1;
  return;
}


