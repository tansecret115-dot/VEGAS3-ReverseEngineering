/* Module: rmme3260.dll
   Function: FUN_6625f560
   Address: 6625f560
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6625f560(void)

{
  undefined4 *puVar1;
  DWORD DVar2;
  
  DVar2 = GetCurrentThreadId();
  for (puVar1 = DAT_6627f25c; (puVar1 != (undefined4 *)0x0 && (puVar1[3] != DVar2));
      puVar1 = (undefined4 *)*puVar1) {
  }
  return;
}


