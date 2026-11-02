/* Module: vegas30k.dll
   Function: FUN_01128f30
   Address: 01128f30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01128f30(undefined4 param_1)

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


