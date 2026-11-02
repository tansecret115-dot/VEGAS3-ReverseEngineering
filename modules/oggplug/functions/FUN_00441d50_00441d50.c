/* Module: oggplug.dll
   Function: FUN_00441d50
   Address: 00441d50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __cdecl FUN_00441d50(undefined4 *param_1)

{
  undefined1 *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  puVar1 = malloc(0x100);
  param_1[2] = puVar1;
  param_1[3] = puVar1;
  *puVar1 = 0;
  param_1[4] = 0x100;
  return;
}


