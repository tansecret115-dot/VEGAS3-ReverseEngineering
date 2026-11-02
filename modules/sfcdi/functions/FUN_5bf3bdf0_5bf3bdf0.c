/* Module: sfcdi.dll
   Function: FUN_5bf3bdf0
   Address: 5bf3bdf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf3bdf0(undefined4 *param_1)

{
  undefined4 *puVar1;
  HGLOBAL pvVar2;
  
  puVar1 = (undefined4 *)*param_1;
  if ((puVar1 != (undefined4 *)0x0) && (puVar1 != (undefined4 *)0xffffffff)) {
    FUN_5bf463f0(puVar1);
    FUN_5bf466a0((undefined4 *)*param_1);
  }
  if ((LPCVOID)param_1[6] != (LPCVOID)0x0) {
    pvVar2 = GlobalHandle((LPCVOID)param_1[6]);
    GlobalUnlock(pvVar2);
    pvVar2 = GlobalHandle((LPCVOID)param_1[6]);
    GlobalFree(pvVar2);
    param_1[6] = 0;
    return 0;
  }
  return 0;
}


