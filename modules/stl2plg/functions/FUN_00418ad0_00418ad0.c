/* Module: stl2plg.dll
   Function: FUN_00418ad0
   Address: 00418ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_00418ad0(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar1 = FUN_0044fc20(2);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00418b30(puVar1);
  }
  return puVar1;
}


