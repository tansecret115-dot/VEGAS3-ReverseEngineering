/* Module: sftrkfx1.dll
   Function: FUN_5cbdf370
   Address: 5cbdf370
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_5cbdf370(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = calloc(1,0x4ec);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_5cbdf290(puVar1,param_1);
  }
  return puVar1;
}


