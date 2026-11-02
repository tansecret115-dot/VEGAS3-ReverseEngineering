/* Module: encn3260.dll
   Function: FUN_664cb650
   Address: 664cb650
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_664cb650(void)

{
  undefined4 *puVar1;
  DWORD DVar2;
  
  DVar2 = GetCurrentThreadId();
  for (puVar1 = DAT_664f2a58; (puVar1 != (undefined4 *)0x0 && (puVar1[3] != DVar2));
      puVar1 = (undefined4 *)*puVar1) {
  }
  return;
}


