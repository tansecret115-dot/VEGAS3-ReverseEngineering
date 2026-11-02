/* Module: rmto3260.dll
   Function: FUN_662f6520
   Address: 662f6520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_662f6520(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x501);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_662f6710(puVar1);
    return puVar1;
  }
  return (undefined4 *)0x0;
}


