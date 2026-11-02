/* Module: sfmarket2.dll
   Function: FUN_00454c10
   Address: 00454c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_00454c10(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar1 = FUN_0047e200(2);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_00454c70(puVar1);
  }
  return puVar1;
}


