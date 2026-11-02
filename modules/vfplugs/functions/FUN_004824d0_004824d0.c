/* Module: vfplugs.dll
   Function: FUN_004824d0
   Address: 004824d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_004824d0(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = calloc(1,0x4ec);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004823f0(puVar1,param_1);
  }
  return puVar1;
}


