/* Module: stl2plg.dll
   Function: FUN_00417c00
   Address: 00417c00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00417c00(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = malloc(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 2;
    puVar1[1] = param_1;
    puVar1[2] = 1;
  }
  return;
}


