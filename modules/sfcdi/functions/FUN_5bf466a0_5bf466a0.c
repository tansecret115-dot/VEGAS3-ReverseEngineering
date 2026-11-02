/* Module: sfcdi.dll
   Function: FUN_5bf466a0
   Address: 5bf466a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf466a0(undefined4 *param_1)

{
  HGLOBAL pvVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if ((param_1 != (undefined4 *)0xffffffff) && (param_1 != (undefined4 *)0x0)) {
    FUN_5bf463f0(param_1);
    if (((param_1[1] & 1) != 0) && (uVar2 = 0, param_1[5] != 0)) {
      puVar3 = param_1 + 0x16;
      do {
        if ((HANDLE)*puVar3 != (HANDLE)0x0) {
          CloseHandle((HANDLE)*puVar3);
        }
        uVar2 = uVar2 + 1;
        puVar3 = puVar3 + 7;
      } while (uVar2 < (uint)param_1[5]);
    }
    pvVar1 = GlobalHandle(param_1);
    GlobalUnlock(pvVar1);
    pvVar1 = GlobalHandle(param_1);
    GlobalFree(pvVar1);
    return 0;
  }
  return 0;
}


