/* Module: rmbe3260.dll
   Function: FUN_66043a60
   Address: 66043a60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_66043a60(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x501);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_66043d50(puVar1);
    return puVar1;
  }
  return (undefined4 *)0x0;
}


