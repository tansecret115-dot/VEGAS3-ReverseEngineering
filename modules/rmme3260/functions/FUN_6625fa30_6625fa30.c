/* Module: rmme3260.dll
   Function: FUN_6625fa30
   Address: 6625fa30
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_6625fa30(void)

{
  undefined4 *puVar1;
  DWORD DVar2;
  
  DVar2 = GetCurrentThreadId();
  for (puVar1 = DAT_6627f268; (puVar1 != (undefined4 *)0x0 && (puVar1[3] != DVar2));
      puVar1 = (undefined4 *)*puVar1) {
  }
  return;
}


