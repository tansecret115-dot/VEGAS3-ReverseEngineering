/* Module: vegas30.exe
   Function: FUN_005e48d0
   Address: 005e48d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __thiscall FUN_005e48d0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  param_1[2] = param_2;
  param_1[6] = 0x33b;
  param_1[7] = 0x33b;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  *param_1 = &PTR_LAB_0062ac10;
  puVar2 = param_1 + 0xc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  return param_1;
}


