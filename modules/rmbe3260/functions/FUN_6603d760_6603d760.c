/* Module: rmbe3260.dll
   Function: FUN_6603d760
   Address: 6603d760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * FUN_6603d760(void)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x38);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = FUN_6603f130(puVar1);
    return puVar1;
  }
  return (undefined4 *)0x0;
}


