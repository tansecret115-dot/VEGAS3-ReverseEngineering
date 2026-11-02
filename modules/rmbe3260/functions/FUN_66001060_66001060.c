/* Module: rmbe3260.dll
   Function: FUN_66001060
   Address: 66001060
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_66001060(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_66075228;
  if (DAT_66075228 != (undefined4 *)0x0) {
    FUN_6602db60(DAT_66075228);
    operator_delete(puVar1);
    DAT_66075228 = (undefined4 *)0x0;
  }
  return;
}


